#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    unordered_map<long long, long long> freq;
    for (long long i = 0; i < n; ++i) {
        long long num;
        cin >> num;
        freq[num]++;
    }

    long long totalPairs = (n * (n - 1)) / 2;
    for (const auto& p : freq) {
        totalPairs -= (p.second * (p.second - 1)) / 2;
    }

    cout << totalPairs << endl;

    return 0;
}
