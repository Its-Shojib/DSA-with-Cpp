//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,freshness, total= 0;
        cin>>x>>freshness;
        ll a[x], b[x];
        vector<ll> index{};
        for(ll i=0;i<x;i++){
            cin>>a[i];
            if(a[i]>=freshness){
                index.push_back(i);
            }
        }
        for(ll i=0;i<x;i++){
            cin>>b[i];
        }
        for(ll i=0;i<index.size();i++){
            total+=b[index[i]];
        }
        cout<<total<<endl;
    }
    return 0;
}