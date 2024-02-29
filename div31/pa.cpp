#include <bits/stdc++.h>
using namespace std;

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long totalSum = 0;
        for (int i = 1; i <= n; ++i) {
            totalSum += digitSum(i);
        }

        cout << totalSum << "\n";
    }

    return 0;
}
