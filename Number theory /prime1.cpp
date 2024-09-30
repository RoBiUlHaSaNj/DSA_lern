

#include <bits/stdc++.h>
using namespace std;

//is it prime or not 
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 cheek  
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return false;//if divided 
    }
    return true; 
}

//range 
vector<int> generatePrimes(int limit) {
    vector<int> primes;
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n;

    cout << "Enter a number to check if it is prime or composite: ";
    cin >> n;


    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else if (n > 1) {
        cout << n << " is a composite number." << endl;
    } else {
        cout << n << " is neither prime nor composite." << endl;
    }


    vector<int> primes = generatePrimes(n);
    cout << "Prime numbers up to " << n << ": ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
