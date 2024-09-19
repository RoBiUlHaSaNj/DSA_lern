/*Example 1:
Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
Output: 4
Explanation: As the target value is 13 , it appears for the first time at index number 2.
*/
#include<bits/stdc++.h>

using namespace std;


int findFirstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;  // Update result
            high = mid - 1; // Continue searching in the left half
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int N = 7, target = 13;
    int array[] = {3, 4, 13, 13, 13, 20, 40};

    int index = findFirstOccurrence(array, N, target);
    
    if (index != -1)
        cout << "First occurrence of target is at index: " << index << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}
