#include <iostream>
using namespace std;

void towerOfHanoi(int n, int source, int auxiliary, int destination, int& moveCount) {
    if (n == 1) {
        cout << source << " " << destination << endl;
        moveCount++;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary, moveCount);

    cout << source << " " << destination << endl;
    moveCount++;

    towerOfHanoi(n - 1, auxiliary, source, destination, moveCount);
}

int main() {
    int n;
    cin >> n;

    int moveCount = 0;

    towerOfHanoi(n, 1, 2, 3, moveCount);

    cout << moveCount << endl;

    return 0;
}
