#include <iostream>
#include <vector>
using namespace std;

string reconstructString(int n, vector<int>& trace) {
    string s;
    vector<int> count(26, 0);  

    for (int i = 0; i < n; ++i) {
        int charCount = 0;
        char nextChar = 'a';  
         while (count[charCount] != trace[i]) {
            ++charCount;
            nextChar = char('a' + charCount); 
        }

         s.push_back(nextChar);

         ++count[charCount];
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> trace(n);
        for (int i = 0; i < n; ++i) {
            cin >> trace[i];
        }

         cout << reconstructString(n, trace) << endl;
    }

    return 0;
}
