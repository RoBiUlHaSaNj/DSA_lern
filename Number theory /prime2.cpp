
#include <bits/stdc++.h>
using namespace std;
;


vector<int> sieveOfEratosthenes(int limit) {
    vector<bool> isPrime(limit + 1, true); 
    vector<int> primes;

    isPrime[0] = isPrime[1] = false; 

 
    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int i= p * p; i <= limit;i += p) {
                isPrime[i] = false; 
            }
        }
    }

 
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    int n;


    cout << "Enter a limit to generate prime numbers: ";
    cin >> n;

    vector<int> primes = sieveOfEratosthenes(n);
    cout << "Prime numbers up to " << n << ": ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
