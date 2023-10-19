#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 4 == 0) {
        cout << "YES" << endl;
        int sum1 = n / 4;
        int sum2 = n / 4;
        vector<int> set1, set2;

        for (int i = 1; i <= n; i++) {
            if (i <= n / 2) {
                if (set1.size() < sum1) {
                    set1.push_back(i);
                } else {
                    set2.push_back(i);
                }
            } else {
                if (set2.size() < sum2) {
                    set2.push_back(i);
                } else {
                    set1.push_back(i);
                }
            }
        }

        cout << set1.size() << endl;
        for (int num : set1) {
            cout << num << " ";
        }
        cout << endl;

        cout << set2.size() << endl;
        for (int num : set2) {
            cout << num << " ";
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
