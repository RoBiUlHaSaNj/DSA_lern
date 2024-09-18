#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int t;
    cin >> t;


    sort(arr.begin(), arr.end());

    while (t--) {
        int l, r;
        cin >> l >> r;

     /*  int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= l && arr[i] <= r) {
                count++;
            }
        }*/
        auto low = lower_bound(arr.begin(), arr.end(), l);
        auto high = upper_bound(arr.begin(), arr.end(), r);

        int count = high - low;
        cout << count << endl;
    }

    return 0;
}
