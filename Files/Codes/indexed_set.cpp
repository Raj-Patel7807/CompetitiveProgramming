#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;

#define indexed_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main() {

    indexed_set s;
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(9);
    s.insert(2);
    s.insert(3);

    for(auto i : s) {
        cout << i << ' ';
    } cout << endl;

    auto a = s.find_by_order(1);
    cout << *a << endl;

    auto b = s.find(3);
    cout << *b << endl;

    return 0;
}