#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 8, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        cout << "No second maximum found." << endl;
    } else {
        cout << "Second maximum number is: " << secondMax << endl;
    }

    return 0;
}
