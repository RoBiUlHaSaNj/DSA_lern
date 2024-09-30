
#include <bits/stdc++.h>
using namespace std;


const int MAX_N = 1000000;
vector<double> harmonicNumbers(MAX_N + 1); 


void precomputeHarmonicNumbers() {
    harmonicNumbers[0] = 0.0; 
    for (int i = 1; i <= MAX_N; i++) {
        harmonicNumbers[i] = harmonicNumbers[i - 1] + 1.0 / i;
    }
}

int main() {
  
    precomputeHarmonicNumbers();

    int n;


    cout << "Enter a value for n (up to " << MAX_N << "): ";
    cin >> n;

    if (n < 0 || n > MAX_N) {
        cout << "Please enter a valid value for n." << endl;
        return 1;
    }

  
    cout << fixed << setprecision(10);
    cout << "The Harmonic number H_" << n << " is: " << harmonicNumbers[n] << endl;

    return 0;
}
