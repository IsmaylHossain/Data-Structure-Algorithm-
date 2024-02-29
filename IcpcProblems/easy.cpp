#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate_permutations(int N, int K) {
    vector<char> letters;
    for (int i = 0; i < N; ++i) {
        letters.push_back('A' + i);
    }
    int count = 0;
    do {    
            for (int j = 0; j < N; ++j) {
                cout << letters[j];
            }
            cout << "\n";
        
    } while (next_permutation(letters.begin(), letters.end()) && count < K);
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, K;
        cin >> N >> K;
        generate_permutations(N, K);
    }

    return 0;
}
