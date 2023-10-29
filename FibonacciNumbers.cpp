#include <iostream>
using namespace std;

// Function to calculate Fibonacci number modulo 10^9 + 7
long long fibonacci(int n) {
    const int MOD = 1000000007;
    long long a = 0, b = 1, c;

    if (n == 0) return a;

    for (int i = 2; i <= n; i++) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cin >> n;

    long long result = fibonacci(n);

    cout << result << endl;

    return 0;
}
