#find out common  value 
#include<bits/stdc++.h>
using namespace std;

    vector<int> intersection(vector<int>& A, vector<int>& B) {


        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        //store
        vector<int> result;

        int i = 0, j = 0;

        while (i < A.size() && j < B.size()) {
            if (A[i] < B[j])
                {
                ++i;
            }
            else if (A[i] > B[j]) {
                ++j;
            }

            else
                {

               // if (result.empty() || result.back() != A[i]) //avoid  duplicate 
               {
                    result.push_back(A[i]);
                //}
                ++i;
                ++j;
            }
        }

        return result;
    }

int main() {
    // Example usage
    vector<int> A = {1, 2, 2, 1};
    vector<int> B = {2, 2};


    vector<int> result = intersection(A, B);

    // Output the result
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
