#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 90, 40, 90, 30, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 90;

    // Sort the array before performing binary search
    sort(arr, arr + n);

    // Use binary_search() to check if x is in the array
    bool found = binary_search(arr, arr + n, x);

    if (found) {
        // Use lower_bound() to find the index of the first occurrence of x
        int index = lower_bound(arr, arr + n, x) - arr;
        cout << "Element " << x << " found at index: " << index << endl;
    } else {
        cout << "Element " << x << " not found in the array" << endl;
    }

    return 0;
}
