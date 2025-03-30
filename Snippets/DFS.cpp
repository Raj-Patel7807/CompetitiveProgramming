#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void DFStree(ll node, ll parent, vector<vector<ll>> &tree, ll depth, ll &maxDepth) {
    maxDepth = max(maxDepth, depth);
    for(ll child : tree[node]) {
        if(child != parent) { DFStree(child, node, tree, depth + 1, maxDepth); }
    }
}
void DFSgraph(ll node, ll parent, vector<vector<ll>> &graph, vector<ll> &visited, ll depth, ll &maxDepth) {
    visited[node] = 1; maxDepth = max(maxDepth, depth);
    for(ll neighbor : graph[node]) {
        if(!visited[neighbor]) { DFSgraph(neighbor, node, graph, visited, depth + 1, maxDepth); }
    }
}

int main() {

    

    return 0;
}