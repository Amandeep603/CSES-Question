#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> distinct_values;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        distinct_values.insert(x);
    }

    cout << distinct_values.size() << endl;

    return 0;
}
