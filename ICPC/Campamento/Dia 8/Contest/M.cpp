#include <bits/stdc++.h>
using namespace std;

// Depth First Search
void dfs(int node, vector<vector<int> >& graph,
        vector<vector<int> >& ancestor, int parent)
{
    ancestor[node][0] = parent;
    for (int neighbor : graph[node]) {
        dfs(neighbor, graph, ancestor, node);
    }
}

// Method to initialize ancestor table
void preprocess(vector<vector<int> >& graph,
                vector<vector<int> >& ancestor, int V,
                int maxN)
{   
    dfs(1, graph, ancestor, -1);
    for (int j = 1; j < maxN; j++) {
        for (int i = 1; i <= V; i++) {
            if (ancestor[i][j - 1] != -1)
                ancestor[i][j]
                    = ancestor[ancestor[i][j - 1]][j - 1];
        }
    }
}

// Method to find Kth ancestor of node
int findKthAncestor(vector<vector<int> >& ancestor,int node, int K, int maxN)
{
    for (int i = maxN - 1; i >= 0; i--) {
        if (K & (1 << i)) {
            if (ancestor[node][i] == -1)
                return -1;
            node = ancestor[node][i];
        }
    }
    return node;
}

int main()
{
    int V,q,s;

    cin>>V>>q;
    int maxN = log2(V) + 1;
    vector<vector<int> > graph(V + 1),ancestor(V + 1, vector<int>(maxN, -1));

    // edge list
    for(int i=1;i<V;i++){
        cin>>s;
        graph[s-1].push_back(i);
    }

    for(int i=0;i<V-1;i++){
        cout<<i<<": ";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }


    // preprocessing
    preprocess(graph, ancestor, V, maxN);

    // queries
    int u,x;
    while(q--){
        cin>>u>>x;
        cout<<findKthAncestor(ancestor,u-1,x,maxN)<<endl;
    }
    return 0;
}
