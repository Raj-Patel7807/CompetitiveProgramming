#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

ll BFStree(ll root, vector<vector<ll>> &tree) {
    queue<pair<ll, ll>> q; q.push({root, 1}); ll maxDepth = 1;
    while (!q.empty()) {
        pair<ll, ll> p = q.front(); q.pop();
        ll node = p.first, depth = p.second;
        maxDepth = max(maxDepth, depth);
        for(ll child : tree[node]) { q.push({child, depth + 1}); }
    }
    return maxDepth;
}
ll BFSgraph(ll root, vector<vector<ll>> &graph, vector<ll> &visited) {
    queue<pair<ll, ll>> q; q.push({root, 1});
    visited[root] = 1; ll maxDepth = 1;
    while(!q.empty()) {
        pair<ll, ll> p = q.front(); q.pop();
        ll node = p.first, depth = p.second;
        maxDepth = max(maxDepth, depth);
        for(ll neighbor : graph[node]) {
            if(!visited[neighbor]) {
                visited[neighbor] = 1; q.push({neighbor, depth + 1});
            }
        }
    }
    return maxDepth;
}

int main() {

    

    return 0;
}