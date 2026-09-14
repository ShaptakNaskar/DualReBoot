package com.dualboot.a;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes.dex */
public final class ay {
    final Map a = new TreeMap();
    final Map b = new TreeMap();

    static ab a(ax axVar, Map map) {
        if (map.containsKey(axVar)) {
            return (ab) map.get(axVar);
        }
        return null;
    }

    static ArrayList a(Map map) {
        ArrayList arrayList = new ArrayList(map.size());
        Iterator it = map.keySet().iterator();
        while (it.hasNext()) {
            arrayList.add((ax) it.next());
        }
        return arrayList;
    }

    static boolean a(ab abVar, Map map) {
        if (abVar == null) {
            return false;
        }
        ax axVar = abVar.e;
        if (map.containsKey(axVar)) {
            return false;
        }
        map.put(axVar, abVar);
        return true;
    }

    private static ab b(ax axVar, Map map) {
        return (ab) map.remove(axVar);
    }

    final boolean a(ax axVar) {
        ab abVarB = b(axVar, this.a);
        if (abVarB == null || a(axVar, this.b) != null) {
            return false;
        }
        ba baVar = new ba();
        abVarB.a(baVar);
        baVar.c();
        if (baVar.d()) {
            return a(abVarB, this.b);
        }
        a(abVarB, this.a);
        return false;
    }

    final boolean b(ax axVar) {
        ab abVarB = b(axVar, this.b);
        if (abVarB == null) {
            return false;
        }
        bb bbVar = new bb();
        abVarB.a(bbVar);
        bbVar.c();
        if (bbVar.d()) {
            return a(abVarB, this.a);
        }
        return false;
    }
}
