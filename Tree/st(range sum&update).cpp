#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//range sum
// update value
//max
//min

vector<ll>tree;
vector<ll>arr;

void biuld(ll node,ll st, ll ed)
{
    if(st==ed)
    {
        tree[node]=arr[st];
    }
    else
    {

        ll mid =(st+ed)/2;
        biuld(2 * node + 1,st,mid );
        biuld(2 * node + 2,mid+1,ed);
        tree[node]=min(tree[2*node+1],tree[2*node+2]);
         //tree[node]=tree[2*node+1]+tree[2*node+2]);
               //tree[node]=max(tree[2*node+1],tree[2*node+2]);
    }
}

void update(ll node,ll st,ll ed,ll idx,ll val)
{

    if(st==ed)
    {
        arr[idx]=val;
        tree[node]=val;

    }
    else
    {

        ll mid = (st+ed)/2;
        if(st<=idx && idx <=mid)//left
        {
            update(2*node+1,st,mid,idx,val);
        }
        else{
            update(2*node+2,mid+1,ed,idx,val);
        }
         //tree[node]=tree[2*node+1]+tree[2*node+2];
         tree[node]=min(tree[2*node+1],tree[2*node+2]);
         //tree[node]=max(tree[2*node+1],tree[2*node+2]);
    }
}

ll querry(ll node,ll st, ll ed,ll L,ll R)
{
    if(R<st||ed<L) return 0;//out of world
    if(L<=st && ed<=R) return tree[node];
   ll mid =(st+ed)/2;
    ll ls=querry(2*node+1,st,mid,L,R);
   ll rs=querry(2*node+2,mid+1,ed,L,R);
    return ls+rs;

}
ll min_sum(ll node,ll st,ll ed,ll L,ll R)
{
    if(R<st||ed<L) return LLONG_MAX;//out of world
  //  if (R < st || ed < L) return LLONG_MIN; // Out of range
    if(L<=st && ed<=R) return tree[node];
   ll mid =(st+ed)/2;
    ll lsm=min_sum(2*node+1,st,mid,L,R);
   ll rsm=min_sum(2*node+2,mid+1,ed,L,R);
    return min(lsm,rsm);
     //return max(lsm,rsm);


}
int main() {
    int n, m;
    cin >> n >> m;
    arr.resize(n);
    tree.resize(4 * n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    biuld(0, 0, n - 1);

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;

        if (t == 1) {

            int idx, val;
            cin >> idx >> val;
            update(0, 0, n - 1, idx, val);
        } else if (t == 2) {

            int l, r;
            cin >> l >> r;
            cout <<min_sum(0, 0, n - 1, l, r-1) << endl;
        }
    }


}
