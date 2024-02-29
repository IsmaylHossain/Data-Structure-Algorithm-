#include <iostream>
#include <cmath>
using namespace std;

long long min_xor_difference(long long a, long long b, long long r) {
    long long min_diff = 0;
    for (int i = 62; i >= 0; i--) { // 62 is the highest bit index of r
        if ((r & (1LL << i)) == 0) continue; // if the bit is not set in r, skip
        if ((a & (1LL << i)) != (b & (1LL << i))) {
            min_diff = (1LL << i) - 1;
            break;
        }
    }
    return min_diff;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, r;
        cin >> a >> b >> r;
        cout << min_xor_difference(a, b, r) << endl;
    }
    return 0;
}
