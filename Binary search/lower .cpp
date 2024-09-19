//use vector
#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector<int> v = {1, 3, 3, 5, 7};

    int value = 3;
    auto it = std::lower_bound(v.begin(), v.end(), value);

    if (it != v.end()) {
        std::cout << "Lower bound for " << value << " is at position: " << (it - v.begin()) << '\n';
    } else {
        std::cout << "Value not found in range.\n";
    }

    return 0;
}


//use  bs
#include <iostream>
#include <vector>

int lower_bound(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size();
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] < target) {
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
    
    int lb = lower_bound(arr, target);
    std::cout << "Lower bound of " << target << " is at index: " << lb << std::endl;
    
    return 0;
}

//use ls

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            // lower bound found:
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 15;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}

