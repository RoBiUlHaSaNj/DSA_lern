//#find count  value
#include<bits/stdc++.h>

using namespace std;


void countFrequencies(const vector<int>& A, const vector<int>& B) {
    
    map<int, int> freq;

   
    for (int num : A) {
        freq[num]++;
    }

    for (int num : B) {
        freq[num]++;
    }

    cout << "1. Frequency of each number:" << endl;
    for (const auto& [key, value] : freq) {
        cout << key << " -> " << value << endl;
    }
    cout << endl;
}

int main() {
    // Sample input vectors
    vector<int> A = {1, 2, 3, 4, 5, 1, 2};
    vector<int> B = {3, 4, 4, 5, 6, 3};

    // Count and display frequencies
    countFrequencies(A, B);

    return 0;
}
