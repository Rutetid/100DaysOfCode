#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int number;
        cin >> number;

        vector<int> keys;
        for (int i = 0; i < number; i++) {
            int value;
            cin >> value;
            keys.push_back(value);
        }

        vector<int> values;
        for (int i = 0; i < number; i++) {
            int value;
            cin >> value;
            values.push_back(value);
        }

        if (keys.size() == values.size()) {
            unordered_map<int, int> myMap;

            for (size_t i = 0; i < keys.size(); ++i) {
                if (values[i] > 0) {
                    if (myMap.find(keys[i]) == myMap.end() || values[i] > myMap[keys[i]]) {
                        myMap[keys[i]] = values[i];
                    }
                }
            }

            int sum = 0;
            for (const auto& pair : myMap) {
                sum += pair.second;
            }

            cout << sum << endl;
        }
    }

    return 0;
}
