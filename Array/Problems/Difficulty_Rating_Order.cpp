//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll count = 0;
        for(ll i=0;i<n;i++){
            if(a[i] > a[i+1]) count++;
        }
        if(count) no; else yes;
    }
    return 0;
}