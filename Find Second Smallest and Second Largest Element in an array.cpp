

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findSecondMinimum(vector<int>& nums) {
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;
        
        for (int num : nums) {
            if (num < smallest) {
                /
                secondSmallest = smallest;
                smallest = num;
            } else if (num > smallest && num < secondSmallest) {
               
                secondSmallest = num;
            }
        }
       
        return secondSmallest == INT_MAX ? -1 : secondSmallest;
    }
};
