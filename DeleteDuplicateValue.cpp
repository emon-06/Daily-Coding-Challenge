#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> unique;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        unique.insert(arr[i]);
    }

    for (int val : unique) {
        cout << val << " ";
    }

    return 0;
}
