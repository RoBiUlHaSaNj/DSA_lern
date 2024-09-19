#include <iostream>
#include <vector>


using namespace std;

// Function to find the floor of x
int findFloor(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int floor = -1;  // Initialize to -1 (no floor)
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] <= x) {
            floor = arr[mid];  // Possible floor found
            low = mid + 1;     // Move right to find a larger floor
        } else {
            high = mid - 1;    // Move left
        }
    }
    
    return floor;
}

// Function to find the ceiling of x
int findCeiling(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ceiling = -1;  // Initialize to -1 (no ceiling)
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] >= x) {
            ceiling = arr[mid];  // Possible ceiling found
            high = mid - 1;      // Move left to find a smaller ceiling
        } else {
            low = mid + 1;       // Move right
        }
    }
    
    return ceiling;
}

int main() {
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int n = arr.size();
    int x = 5;  // Example 1

    // Find floor and ceiling
    int floor = findFloor(arr, x);
    int ceiling = findCeiling(arr, x);
    
    cout << "Floor: " << floor << ", Ceiling: " << ceiling << endl;
    
    return 0;
}
