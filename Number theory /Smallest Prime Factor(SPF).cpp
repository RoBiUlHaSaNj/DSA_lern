//The smallest number greater than 1 that divides 𝑛 is also the smallest prime factor of
// 𝑛. Why? Because if it is not prime, then it can be divided into smaller prime factors.

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll n, k;
    cin >> n 
      //>> k;

    vector<ll> arr;


    for (ll i = 2; i * i <= n && k > 1; i++) {
        while (n % i == 0 && k > 1) {

            arr.push_back(i);
   
            n /= i;
    

            //k--;

           // for(int i=0;i<arr.size();i++)cout<<arr[i]<<endl;
        }
    }

    if (n > 1) {
        arr.push_back(n);
          //for(int i=0;i<arr.size();i++)cout<<arr[i]<<endl;
       // k--;

    }

  //  if (k > 0) {
        //cout << "-1" << endl;
    //} else {

        for (ll i : arr) {
            cout << i << " ";
        }
        cout << endl;
   // }


}
