#include<bits/stdc++.h>


using namespace std;


void findUniqueValues(const vector<int>& A, const vector<int>& B) {
    
    unordered_set<int> unique_values;


    unique_values.insert(A.begin(), A.end());

    unique_values.insert(B.begin(), B.end());

    cout << "2. Unique values:" << endl;
    for (int num : unique_values) {
        cout << num << " ";
    }
    cout << endl << endl;
}

int main() {

    vector<int> A = {1, 2, 3, 4, 5, 1, 2};
    vector<int> B = {3, 4, 4, 5, 6, 3};

   
    findUniqueValues(A, B);

    return 0;
}
