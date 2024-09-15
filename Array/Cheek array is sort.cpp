#include <bits/stdc++.h>
using namespace std;


vector<int> sortArray(vector<int>& nums) {
    
    
    
    //STL sort(): O(n log n)
//Bubble Sort: O(n²)
//Min-Heap (Priority Queue): O(n log n)

            //sort(nums.begin(),nums.end());


          /*for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > nums[j]) { 
                    swap(nums[i], nums[j]);
                }
            }
        }
        return nums;
        
    
    
        */
        
        
        
       // 0(n)
     
     
     
     /*   
     
     
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}
        */
    

    
    // Min-Heap using priority_queue (smallest element on top)
    priority_queue<int, vector<int>, greater<int>> pq;

    // Push all elements from the nums array into the priority_queue
    for (auto it : nums) {
        pq.push(it);
    }

    // Create a vector to store the sorted elements
    vector<int> ans;

    // Pop elements from the priority_queue and append them to the result vector
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}


int main() {
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    vector<int> sortedNums = sortArray(nums);

    // Output the sorted numbers
    for (int num : sortedNums) {
        cout << num << " ";
    }
    return 0;
}

