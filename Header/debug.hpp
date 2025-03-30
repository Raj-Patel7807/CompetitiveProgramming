#ifndef DEBUG_HPP
#define DEBUG_HPP

#include <bits/stdc++.h>
using namespace std;

#define debug1(a) cerr << #a << " = "; debug_print(a); cerr << '\n';
#define debug2(a, b) cerr << #a << " = "; debug_print(a); cerr << '\n'; \
                     cerr << #b << " = "; debug_print(b); cerr << '\n';
#define debug3(a, b, c) cerr << #a << " = "; debug_print(a); cerr << '\n'; \
                        cerr << #b << " = "; debug_print(b); cerr << '\n'; \
                        cerr << #c << " = "; debug_print(c); cerr << '\n';
#define debug4(a, b, c, d) cerr << #a << " = "; debug_print(a); cerr << '\n'; \
                           cerr << #b << " = "; debug_print(b); cerr << '\n'; \
                           cerr << #c << " = "; debug_print(c); cerr << '\n'; \
                           cerr << #d << " = "; debug_print(d); cerr << '\n';
#define debug5(a, b, c, d, e) cerr << #a << " = "; debug_print(a); cerr << '\n'; \
                              cerr << #b << " = "; debug_print(b); cerr << '\n'; \
                              cerr << #c << " = "; debug_print(c); cerr << '\n'; \
                              cerr << #d << " = "; debug_print(d); cerr << '\n'; \
                              cerr << #e << " = "; debug_print(e); cerr << '\n';
#define debug6(a, b, c, d, e, f) cerr << #a << " = "; debug_print(a); cerr << '\n'; \
                                 cerr << #b << " = "; debug_print(b); cerr << '\n'; \
                                 cerr << #c << " = "; debug_print(c); cerr << '\n'; \
                                 cerr << #d << " = "; debug_print(d); cerr << '\n'; \
                                 cerr << #e << " = "; debug_print(e); cerr << '\n'; \
                                 cerr << #f << " = "; debug_print(f); cerr << '\n';                              
#define debug7(a, b, c, d, e, f, g) cerr << #a << " = "; debug_print(a); cerr << '\n'; \
                                    cerr << #b << " = "; debug_print(b); cerr << '\n'; \
                                    cerr << #c << " = "; debug_print(c); cerr << '\n'; \
                                    cerr << #d << " = "; debug_print(d); cerr << '\n'; \
                                    cerr << #e << " = "; debug_print(e); cerr << '\n'; \
                                    cerr << #f << " = "; debug_print(f); cerr << '\n'; \
                                    cerr << #g << " = "; debug_print(g); cerr << '\n';

#define GET_DEBUG(a, b, c, d, e, f, g, DEBUG, ...) DEBUG
#define debug(...) GET_DEBUG(__VA_ARGS__, debug7, debug6, debug5, debug4, debug3, debug2, debug1)(__VA_ARGS__)


template <typename T> void debug_print(T t);
template <typename T, typename V> void debug_print(pair<T, V> p);
template <typename T> void debug_print(vector<T> v);
template <typename T> void debug_print(set<T> v);
template <typename T> void debug_print(unordered_set<T> v);
template <typename T> void debug_print(multiset<T> v);
template <typename T, typename V> void debug_print(map<T, V> v);
template <typename T, typename V> void debug_print(unordered_map<T, V> v);
template <typename T> void debug_print(deque<T> v);
template <typename T> void debug_print(stack<T> s);
template <typename T> void debug_print(queue<T> q);
template <typename T> void debug_print(priority_queue<T> pq);
template <typename T, typename C> void debug_print(priority_queue<T, vector<T>, C> pq);

template <typename T>
void debug_print(T t) {
    cerr << t;
}

template <typename T, typename V>
void debug_print(pair<T, V> p) {
    cerr << "{";
    debug_print(p.first);
    cerr << ", ";
    debug_print(p.second);
    cerr << "}";
}

template <typename T>
void debug_print(vector<T> v) {
    cerr << "[ ";
    for (auto i : v)
    {
        debug_print(i);
        cerr << ' ';
    }
    cerr << "]";
}

template <typename T>
void debug_print(set<T> v) {
    cerr << "[ ";
    for (auto i : v) {
        debug_print(i);
        cerr << ' ';
    }
    cerr << "]";
}

template <typename T>
void debug_print(unordered_set<T> v) {
    cerr << "[ ";
    for (auto i : v) {
        debug_print(i);
        cerr << ' ';
    }
    cerr << "]";
}

template <typename T>
void debug_print(multiset<T> v) {
    cerr << "[ ";
    for (auto i : v) {
        debug_print(i);
        cerr << ' ';
    }
    cerr << "]";
}

template <typename T, typename V>
void debug_print(map<T, V> v) {
    cerr << "[ ";
    for (auto i : v) {
        cerr << "{";
        debug_print(i.first);
        cerr << ", ";
        debug_print(i.second);
        cerr << "}";
        cerr << ' ';
    }
    cerr << "]";
}

template <typename T, typename V>
void debug_print(unordered_map<T, V> v) {
    cerr << "[ ";
    for (auto i : v) {
        cerr << "{";
        debug_print(i.first);
        cerr << ", ";
        debug_print(i.second);
        cerr << "}";
        cerr << ' ';
    }
    cerr << "]";
}

template <typename T>
void debug_print(deque<T> v) {
    cerr << "[ ";
    for (auto i : v) {
        debug_print(i);
        cerr << ' ';
    }
    cerr << "]";
}

template <typename T>
void debug_print(stack<T> s) {
    cerr << "[ ";
    while (!s.empty()) {
        debug_print(s.top());
        cerr << ' ';
        s.pop();
    }
    cerr << "]";
}

template <typename T>
void debug_print(queue<T> q) {
    cerr << "[ ";
    while (!q.empty()) {
        debug_print(q.front());
        cerr << ' ';
        q.pop();
    }
    cerr << "]";
}

template <typename T>
void debug_print(priority_queue<T> pq) {
    cerr << "[ ";
    while (!pq.empty()) {
        debug_print(pq.top());
        cerr << ' ';
        pq.pop();
    }
    cerr << "]";
}

template <typename T, typename C>
void debug_print(priority_queue<T, vector<T>, C> pq) {
    cerr << "[ ";
    while (!pq.empty()) {
        debug_print(pq.top());
        cerr << ' ';
        pq.pop();
    }
    cerr << "]";
}


#endif
