#include <iostream>
#include <vector>
#include <algorithm>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int x, n;
        std::cin >> x >> n;

        // Find all divisors of x
        std::vector<int> divisors;
        for (int i = 1; i * i <= x; ++i) {
            if (x % i == 0) {
                divisors.push_back(i);
                if (i != x / i)
                    divisors.push_back(x / i);
            }
        }

        // Sort the divisors in ascending order
        std::sort(divisors.begin(), divisors.end());

        // Select n divisors such that their sum equals x
        std::vector<int> sub_problems;
        for (int i = 0; i < n; ++i) {
            sub_problems.push_back(divisors[i]);
        }

        // Calculate the GCD of all selected divisors
        int max_balance = sub_problems[0];
        for (int i = 1; i < n; ++i) {
            max_balance = gcd(max_balance, sub_problems[i]);
        }

        std::cout << max_balance << std::endl;
    }

    return 0;
}
