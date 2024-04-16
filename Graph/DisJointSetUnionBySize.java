public class DisjointSetUnionBySize {

    int[] par, size;

    DisjointSetUnionBySize(int n) {
        par = new int[n];
        size = new int[n];
        for (int i = 0; i < n; i++) {
            par[i] = i;
            size[i] = 0;
        }
    }


    int findPar(int u) {
        if (par[u] == u) return u;

        return par[u] = findPar(par[u]);
    }


    void unionBySize(int u, int v) {

        int pu = findPar(u);
        int pv = findPar(v);

        if (pu == pv) return;

        int su = size[pu];
        int sv = size[pv];

        if (su <= sv) {
            size[pv] += size[pu];
            par[pu] = pv;
        } else {
            size[pu] += size[pv];
            par[pv] = pu;
        }

    }
    
    public static  void main(String args[]){
        DisjointSetUnionBySize ds = new DisjointSetUnionBySize(8);

        ds.unionBySize(1, 2);
        ds.unionBySize(2, 3);
        ds.unionBySize(4, 5);
        ds.unionBySize(6, 7);
        ds.unionBySize(5, 6);

        // if 3 and 7 same or not
        if(ds.findPar(3) == ds.findPar(7)) {
            System.out.println("Same");
        }
        else
            System.out.println("Not Same");

        ds.unionBySize(3, 7);
        if(ds.findPar(3) == ds.findPar(7)) {
            System.out.println("Same");
        }
        else
            System.out.println("Not Same");


    }
    

}



