#include <iostream>
using namespace std;

bool searchInRotatedArray(int arr[], int n, int k) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the target is found at the mid index
        if (arr[mid] == k)
            return true;

        // Check if the left half is sorted
        if (arr[low] <= arr[mid]) {
            // Check if the target is in the sorted left half
            if (arr[low] <= k && k < arr[mid])
                high = mid - 1; // Search in the left half
            else
                low = mid + 1; // Search in the right half
        }
        // Else, the right half is sorted
        else {
            // Check if the target is in the sorted right half
            if (arr[mid] < k && k <= arr[high])
                low = mid + 1; // Search in the right half
            else
                high = mid - 1; // Search in the left half
        }
    }

    // If the target is not found
    return false;
}

int main() {
    int arr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    bool result = searchInRotatedArray(arr, n, k);
    
    cout << (result ? "True" : "False") << endl;

    return 0;
}
