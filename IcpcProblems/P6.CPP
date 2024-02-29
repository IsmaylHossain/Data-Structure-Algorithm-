#include<bits/stdc++.h>
using namespace std;

int countTriangles(int n, vector<int>& a) {
    sort(a.begin(), a.end());
    int count = 0;

    for (int i = n - 1; i >= 2; i--) {
        int left = 0, right = i - 1;

        while (left < right) {
            
            if (a[left] + a[right] > a[i]) {
                count += right - left;
                right--;
            } else {
                left++;
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] *= 2;
        }

        cout << countTriangles(n, a) << endl;
    }

    return 0;
}
