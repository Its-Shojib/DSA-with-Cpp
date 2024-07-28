//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,y,z;
        cin>>x>>y>>z;

        ll cnt=0;
        for(ll i=1;i<=y;i++)
        {
            ll a=(cnt+1+x-2)/(x-1);
            cnt+=max(a,1ll);
        }
        ll b=z-cnt;
        b*=x;
        if(b>z) yes;
        else    no;
    }
    return 0;
}