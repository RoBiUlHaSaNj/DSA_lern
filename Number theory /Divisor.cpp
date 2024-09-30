
#include <bits/stdc++.h>
using namespace std;

void findDivisors(int n) {
    vector<int> divisors;
    int count =0;
   
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);  
          count++;
            
            if (i != n / i) {
                divisors.push_back(n / i);  
              count++;
            }
        }
    }
    

    sort(divisors.begin(), divisors.end());
    
  
    cout << "Divisors of " << n << " are: ";
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
  cout<<count<<endl;
}

int main() {
    int number;
    

    cout << "Enter a number: ";
    cin >> number;
    

    findDivisors(number);
    
    return 0;
}
