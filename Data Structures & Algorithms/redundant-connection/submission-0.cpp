class DSU {
public:
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);   // Path Compression
    }

    void unite(int a, int b) {
        int pa = find(a);
        int pb = find(b);

        if (pa == pb)
            return;

        if (size[pa] < size[pb])
            swap(pa, pb);

        parent[pb] = pa;
        size[pa] += size[pb];
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n = edges.size();

        DSU dsu(n + 1);

        for (auto &e : edges) {

            int u = e[0];
            int v = e[1];

            if (dsu.find(u) == dsu.find(v))
                return e;

            dsu.unite(u, v);
        }

        return {};
    }
};