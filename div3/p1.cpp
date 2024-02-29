#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
 
        int firstBlack = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                firstBlack = i;
                break;
            }
        }
 
        int lastBlack = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == 'B') {
                lastBlack = i;
                break;
            }
        }

        
            int length = lastBlack - firstBlack + 1;
            cout << length << endl;
        
    }

    return 0;
}
