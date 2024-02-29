#include <bits/stdc++.h>
 
using namespace std;

int main() {
    long long x, n;
    cin >> x >> n;

    priority_queue<long long, vector<long long>, greater<long long>> q;
    for (int i = 0; i < n; ++i) {
        long long d;
        cin >> d;
        q.push(d);
    }

    long long ct = 0;
    while (q.size() > 1) {
        long long s1 = q.top();
        q.pop();
        long long s2 = q.top();
        q.pop();
        ct += s1 + s2;
        q.push(s1 + s2);
    }

    cout << ct << endl;

    return 0;
}
