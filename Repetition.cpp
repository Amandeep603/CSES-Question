#include <iostream>
using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    int maxRepetition = 1;
    int currentRepetition = 1;

    for (int i = 1; i < sequence.length(); i++) {
        if (sequence[i] == sequence[i - 1]) {
            currentRepetition++;
            maxRepetition = max(maxRepetition, currentRepetition);
        } else {
            currentRepetition = 1;
        }
    }

    cout << maxRepetition << endl;

    return 0;
}
