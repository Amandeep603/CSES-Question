#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    unordered_map<int, int> numToIndex;
    bool found = false;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;

        if (numToIndex.find(x - num) != numToIndex.end()) {
            cout << numToIndex[x - num] << " " << i << endl;
            found = true;
            break;
        }

        numToIndex[num] = i;
    }

    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
