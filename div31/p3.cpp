#include <iostream>
#include <deque>
using namespace std;

int main() {
    long long Q;
    cin >> Q;

    while (Q--) {
        long long n, m;
        cin >> n >> m;

        deque<long long> arr;
        for (long long i = 0; i < n; i++) {
            long long a;
            cin >> a;
            arr.push_back(a);
        }

        string S;
        cin >> S;

        long long sum = 1;
        for (auto &num : arr) {
            sum = (sum * num) % m;
        }
        cout << sum << " ";

        for (long long i = 0; i < n; i++) {
            if (S[i] == 'L') {
                sum/=arr.front()%m;
                arr.pop_front();
                
            } else {
                sum/=arr.back()%m;
                arr.pop_back();
            }
            if (!arr.empty()) {
                 
                cout << sum << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
