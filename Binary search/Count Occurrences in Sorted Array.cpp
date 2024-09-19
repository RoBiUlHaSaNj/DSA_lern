#include <iostream>
using namespace std;

// Function to find the first occurrence of X
int findFirstOccurrence(int arr[], int n, int X) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == X) {
            result = mid;
            high = mid - 1; // Search on the left side
        }
        else if (arr[mid] < X) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return result;
}

// Function to find the last occurrence of X
int findLastOccurrence(int arr[], int n, int X) {
    int low = 0, high = n - 1, result = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == X) {
            result = mid;
            low = mid + 1; // Search on the right side
        }
        else if (arr[mid] < X) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return result;
}

// Main function to calculate the count of X in the array
int countOccurrences(int arr[], int n, int X) {
    int first = findFirstOccurrence(arr, n, X);
    if (first == -1) return 0; // X is not present in the array

    int last = findLastOccurrence(arr, n, X);
    
    return last - first + 1; // Count of occurrences
}

int main() {
    int N = 7, X = 3;
    int array[] = {2, 2, 3, 3, 3, 3, 4};
    
    int count = countOccurrences(array, N, X);
    cout << count << endl;
    
    return 0;
}
