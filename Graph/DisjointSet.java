public class DisjointSet {
    int[] par, rank;

    DisjointSet(int n) {
        par = new int[n];
        rank = new int[n];
        for (int i = 0; i < n; i++) {
            par[i] = i;
            rank[i] = 0;
        }
    }


    int findPar(int u) {
        if (par[u] == u) return u;

        return par[u] = findPar(par[u]);
    }


    void unionByRank(int u, int v) {

        int pu = findPar(u);
        int pv = findPar(v);

        if (pu == pv) return;

        int ru = rank[pu];
        int rv = rank[pv];

        if (ru == rv) {
            rank[pu] += 1;
            par[pv] = pu;
        } else if (ru < rv) {
            par[pu] = pv;
        } else par[pv] = pu;

    }

    public static void main(String[] args) {
        DisjointSet ds = new DisjointSet(8);

        ds.unionByRank(1, 2);
        ds.unionByRank(2, 3);
        ds.unionByRank(4, 5);
        ds.unionByRank(6, 7);
        ds.unionByRank(5, 6);

        // if 3 and 7 same or not
        if (ds.findPar(3) == ds.findPar(7)) {
            System.out.println("Same");
        } else
            System.out.println("Not Same");

        ds.unionByRank(3, 7);
        if (ds.findPar(3) == ds.findPar(7)) {
            System.out.println("Same");
        } else
            System.out.println("Not Same");
    }

}

