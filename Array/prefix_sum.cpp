#include<bits/stdc++.h>
using namespace std;
/* only  for gcd
// Function to compute GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);*/
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) { // Start from 0 for 0-based indexing
        cin >> a[i];
    }

    // Create prefix sum array
    vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i]; // Cumulative sum
        
       // pre[i] = pre[i - 1] + a[i]; // Cumulative sum  xor
       // pre[i] = max(pre[i - 1], a[i]);
       // pre[i] = min(pre[i - 1], a[i]);
       //pre[i] = gcd(pre[i - 1], a[i]);
       //pre[i] = pre[i - 1] * a[i]; // Cumulative product
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        // Adjust for 1-based input to 0-based indexing
        l--;
        r--;
        /*
        for(int i=0;i<n;i++){
            sum+=a[i];
            cout<<sum <<" "
        }*/

        if (l == 0)
            cout << pre[r] << endl;
        else
            cout << pre[r] - pre[l - 1] << endl;
    }
}
