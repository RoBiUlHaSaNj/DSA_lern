/*If p is a prime number and 𝑝 divides the product a⋅b, then  p must divide at least one of the factors a or 𝑏

p is a prime number,

p∣(a⋅b) (meaning p divides a⋅b),
Then: p∣a or p∣b.*/


#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


bool checkDivisibility(int a, int b, int p) {
    return (a % p == 0 || b % p == 0);
}

int main() {
    int a, b, p;

    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;
    cout << "Enter a prime number (p): ";
    cin >> p;

    if (isPrime(p)) {
        if ((a * b) % p == 0) {
            if (checkDivisibility(a, b, p)) {
                cout << "Euclid's Lemma holds: " << p << " divides " << a << " or " << b << "." << endl;
            } else {
                cout << "Euclid's Lemma does not hold." << endl;
            }
        } else {
            cout << p << " does not divide the product " << a << " * " << b << "." << endl;
        }
    } else {
        cout << p << " is not a prime number." << endl;
    }

    return 0;
}
