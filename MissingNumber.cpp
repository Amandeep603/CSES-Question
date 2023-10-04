#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate the expected sum of all numbers from 1 to n
    long long expected_sum = (long long)n * (n + 1) / 2;

    long long actual_sum = 0;
    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        actual_sum += num;
    }

    // Find the missing number
    long long missing_number = expected_sum - actual_sum;

    cout << missing_number << endl;

    return 0;
}
