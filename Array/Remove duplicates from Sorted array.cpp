#include <iostream>
#include <vector>

using namespace std;


int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;  // Edge case: if the array is empty, return 0

    int k = 1;  // Initialize k to 1 since the first element is always unique

    for (int i = 1; i < nums.size(); i++) {
        // If the current element is different from the previous one
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];  // Place the unique element at the k-th position
            k++;  // Increment k to reflect the new unique element
        }
    }

    return k;  // Return the number of unique elements
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5};  // Sample input

    int result = removeDuplicates(nums);

    cout << "Number of unique elements: " << result << endl;
    cout << "Modified array: ";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
