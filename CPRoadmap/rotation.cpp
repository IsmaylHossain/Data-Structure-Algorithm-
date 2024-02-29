#include <bits/stdc++.h>
 using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> N >> Q >> S;

    while (Q--) {
        int t, x;
        cin >> t >> x;

        if (t == 1) {
            x %= N;
            S = S.substr(N - x) + S.substr(0, N - x);
        } else {
            cout << S[x - 1] << endl;
        }
    }

    return 0;
}
