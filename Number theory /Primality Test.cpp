#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n <= 3) return true;  
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int number;

    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is a composite number." << endl;
    }

    return 0;
}
