#include <iostream>
#include <algorithm>
using namespace std;

int findMinDifference(int arr[], int n, int m) {
    if (m == 0 || n == 0) {
        return 0;
    }
    if (n < m) {
        return -1;
    }
    sort(arr, arr + n);
    int minDifference = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++) {
        int difference = arr[i + m - 1] - arr[i];
        minDifference = min(minDifference, difference);
    }
    return minDifference;
}

int main() {
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    int result = findMinDifference(arr, n, m);
    if (result == -1) {
        cout << "Not enough packets to distribute" << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}
