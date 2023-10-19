#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    
    vector<int> traffic_lights(n);
    for (int i = 0; i < n; i++) {
        cin >> traffic_lights[i];
    }

    vector<int> gaps;
    gaps.push_back(x);

    for (int i = 0; i < n; i++) {
        int light = traffic_lights[i];
        auto it = lower_bound(gaps.begin(), gaps.end(), light);

        int left_gap = light;
        int right_gap = *it - light;

        gaps.erase(it);
        gaps.insert(it, left_gap);
        gaps.insert(it, right_gap);

        cout << *gaps.rbegin() << " ";
    }

    cout << endl;
    
    return 0;
}
