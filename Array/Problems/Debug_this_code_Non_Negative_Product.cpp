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
        ll n;
        cin>>n;
        ll a[n];
        ll mul = 1;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mul = mul*a[i];
        }
        if(mul>0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}