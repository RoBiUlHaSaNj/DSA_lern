//ls
#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            // upper bound found:
            
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}

//use bs
#include <iostream>
#include <vector>

int upper_bound(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size();
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    
    return low;
}

int main() {
    std::vector<int> arr = {1, 2, 4, 4, 6, 8};
    int target = 4;
    
    int ub = upper_bound(arr, target);
    std::cout << "Upper bound of " << target << " is at index: " << ub << std::endl;
    
    return 0;
}



//use vector
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 3, 3, 5, 7};

    int value = 3;
    auto it = std::upper_bound(v.begin(), v.end(), value);

    if (it != v.end()) {
        std::cout << "Upper bound for " << value << " is at position: " << (it - v.begin()) << '\n';
    } else {
        std::cout << "Value not found in range.\n";
    }

    return 0;
}
