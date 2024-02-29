#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long a, b;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;

        long long lcm = (a * b) / __gcd(a, b);
        cout << lcm << endl;
    }

    return 0;
}
