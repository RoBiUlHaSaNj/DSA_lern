
#include<bits/stdc++.h>
using namespace std;

// Function to rotate array to the left by k positions
void Rotate__l_to_r(int arr[], int n, int k) {
    // Handle case where array is empty
    if (n == 0)
        return;

    // Ensure k is within bounds (rotation by n is same as no rotation)
    k = k % n;

    // Temporary array to store first k elements
    int temp[k];

    // Store the first k elements in temp[]
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by k positions
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Place the first k elements (from temp[]) at the end of the array
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2; // Rotate by 2 positions to the left

    Rotate__l_to_r(arr, n, k);

    cout << "After rotating the elements to the left by " << k << " positions: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
