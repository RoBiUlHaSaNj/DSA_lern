#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void findUniqueValues(const vector<int>& A, const vector<int>& B) {
    unordered_map<int, int> freq;

   
    for (int num : A) {
        freq[num]++;
    }


    for (int num : B) {
        freq[num]++;
    }

  
    cout << "Unique values:" << endl;
    for (const auto& [key, value] : freq) {
       
        if (value == 1) {
            cout << key << " ";
        }
    }
    cout << endl;
}

int main() {
    // Sample input vectors
    vector<int> A = {1, 2, 3, 4};  // Input for vector A
    vector<int> B = {3, 3, 4, 5};  // Input for vector B

    // Find and display unique values
    findUniqueValues(A, B);

    return 0;
}
