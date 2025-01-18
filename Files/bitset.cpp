#include <bits/stdc++.h>
using namespace std;

// A Bitset is an array whose each value is either 0 or 1. 
int main() {

    bitset<10> bs;

    bs[1] = 1;
    bs[3] = 1;
    bs[4] = 1;
    bs[7] = 1;

    cout << bs[4] << endl; // 1;
    cout << bs[5] << endl; // 0;

    bitset<5> s(string("01001")); // From Right To Left;
    cout << s[4] << endl; // 1;
    cout << s[2] << endl; // 0;

    bitset<10> b(string("0010011010"));
    cout << b.count() << endl; // 4;

    bitset<5> p(string("01001"));
    bitset<5> q(string("10110"));

    cout << (p & q) << endl; // 00000;
    cout << (p | q) << endl; // 11111;
    cout << (p ^ q) << endl; // 11111; 

    return 0;
}