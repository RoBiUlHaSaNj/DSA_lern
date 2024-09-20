#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        
        if (sum == target) {
            // Found the pair
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            return true;
        } else if (sum < target) {
            left++;  // Move left pointer to increase the sum
        } else {
            right--; // Move right pointer to decrease the sum
        }
    }
    
    // If no pair is found
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 8, 10};
    int target = 10;
    if (!twoSum(arr, target)) {
        cout << "No pair found" << endl;
    }
    return 0;
}
