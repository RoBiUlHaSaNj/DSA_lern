#include <bits/stdc++.h>


using namespace std;
#define m 1000000007
typedef long long ll;
int rope(vector<int>&a,int k,double x)
{

    if(x==0)return true ;
    int ct =0;
    for(int i=0;i<a.size();i++)
    ct+=a[i]/x;
    return ct>=k;

}


int main() {
    int n, k;
    cin >> n >> k;

    vector<int> ropes(n);
    for (int i = 0; i < n; ++i) {
        cin >> ropes[i];
    }


double l=0,r=1e8,mid;
int lp=100;
while(lp--)
{
    mid=l+(r-l)/2;
    if(rope(ropes,k,mid)) l=mid;
    else
        r=mid;

}
cout << fixed << setprecision(6)  <<l<<endl;

}
