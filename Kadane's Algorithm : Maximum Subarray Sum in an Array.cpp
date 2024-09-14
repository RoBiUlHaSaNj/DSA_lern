
#include <bits/stdc++.h>
using namespace std;
/*
int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; 
// o(n^3)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
          
            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    } 

    return maxi;
}

*/
//o(n)

    int maxSubArray(vector<int>& nums) {
          int maxSum = INT_MIN;
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxSum;
    }
    }
