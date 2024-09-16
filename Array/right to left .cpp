

#include<bits/stdc++.h>
using namespace std;

void rotateBy__r_T0_l(int arr[], int n, int d) {
    // To handle cases where d is greater than n
    d = d % n;//2

    // Temporary array to store first d elements
    int temp[d];//2
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    //1 2 

    // Shift the remaining elements
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    //3 4 5

    // Place the d elements at the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int d = 2; // Rotate by 2 positions

   rotateBy__r_T0_l(arr, n, d);
}
