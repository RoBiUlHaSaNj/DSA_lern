
#include <bits/stdc++.h>
using namespace std;


long long modularExponentiation(long long base, long long exponent, long long mod) {
    long long result = 1;
    base = base % mod;
    
    while (exponent > 0) {
        if (exponent % 2 == 1) { 
            result = (result * base) % mod;
        }
        exponent >>= 1; 
        base = (base * base) % mod; 
    }
    return result;
}


bool millerRabin(long long n, int k) {
    if (n <= 1 || n == 4) return false; 
    if (n <= 3) return true; 

    long long d = n - 1;
    int r = 0;
    while (d % 2 == 0) {
        d /= 2;
        r++;
    }

    for (int i = 0; i < k; i++) {
        long long a = 2 + rand() % (n - 4); 
        long long x = modularExponentiation(a, d, n);
        
        if (x == 1 || x == n - 1) continue;

        bool composite = true;
        for (int j = 0; j < r - 1; j++) {
            x = modularExponentiation(x, 2, n);
            if (x == n - 1) {
                composite = false;
                break;
            }
        }

        if (composite) return false; 
    }
    return true; 
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    long long number;
    int k = 10; 

    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    if (millerRabin(number, k)) {
        cout << number << " is probably prime." << endl;
    } else {
        cout << number << " is composite." << endl;
    }

    return 0;
}
