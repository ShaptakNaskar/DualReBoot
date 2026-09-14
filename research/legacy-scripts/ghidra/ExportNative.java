// Export every internal function as reference pseudocode, with addresses and status.
// @category BeachDecomp

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.BufferedWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

public class ExportNative extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("Expected output directory");
        }
        Path output = Path.of(args[0]);
        Files.createDirectories(output.resolve("functions"));
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException(decompiler.getLastMessage());
        }
        int count = 0;
        int failed = 0;
        try (BufferedWriter all = Files.newBufferedWriter(output.resolve("libdbgengine.c"), StandardCharsets.UTF_8);
             BufferedWriter index = Files.newBufferedWriter(output.resolve("functions.tsv"), StandardCharsets.UTF_8)) {
            all.write("/* GHIDRA REFERENCE PSEUDOCODE — NOT BUILDABLE SOURCE.\n" +
                      " * Inferred types, parameters, control flow and pointer widths require review.\n" +
                      " * Binary: " + currentProgram.getExecutablePath() + "\n" +
                      " * Language: " + currentProgram.getLanguageID() + "\n */\n\n");
            index.write("address\tname\tsignature\tstatus\tfile\tdiagnostic\n");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext()) {
                monitor.checkCancelled();
                Function function = functions.next();
                if (function.isExternal()) continue;
                String address = function.getEntryPoint().toString();
                String name = function.getName(true);
                String safeName = name.replaceAll("[^a-zA-Z0-9_.-]", "_");
                if (safeName.length() > 120) safeName = safeName.substring(0, 120);
                String file = "functions/" + address + "_" + safeName + ".c";
                DecompileResults result = decompiler.decompileFunction(function, 60, monitor);
                boolean ok = result.decompileCompleted() && result.getDecompiledFunction() != null;
                String diagnostic = result.getErrorMessage();
                String body = "/* " + address + " | " + name + " */\n";
                if (ok) {
                    body += result.getDecompiledFunction().getC();
                } else {
                    failed++;
                    body += "/* DECOMPILATION FAILED: " + clean(diagnostic).replace("*/", "* /") + " */\n";
                }
                Files.writeString(output.resolve(file), body, StandardCharsets.UTF_8);
                all.write(body + "\n");
                index.write(address + "\t" + clean(name) + "\t" + clean(function.getSignature().toString()) +
                            "\t" + (ok ? "ok" : "failed") + "\t" + file + "\t" + clean(diagnostic) + "\n");
                count++;
                if (count % 100 == 0) println("Exported " + count + " functions; " + failed + " failures");
            }
        } finally {
            decompiler.dispose();
        }
        Files.writeString(output.resolve("summary.txt"),
            "functions=" + count + "\nfailed=" + failed + "\nlanguage=" + currentProgram.getLanguageID() + "\n");
        println("Export complete: " + count + " functions, " + failed + " failures");
    }

    private static String clean(String text) {
        return text == null ? "" : text.replace('\t', ' ').replace('\n', ' ').replace('\r', ' ');
    }
}
