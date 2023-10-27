#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<pair<int, int>> operations;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        operations.push_back({a, b});
    }

    for (const auto& op : operations) {
        int a = op.first;
        int b = op.second;
        string substring = s.substr(a - 1, b - a + 1);

        // Remove the substring from the original string
        s.erase(a - 1, b - a + 1);

        // Append the substring to the end of the string
        s += substring;
    }

    cout << s << endl;

    return 0;
}
