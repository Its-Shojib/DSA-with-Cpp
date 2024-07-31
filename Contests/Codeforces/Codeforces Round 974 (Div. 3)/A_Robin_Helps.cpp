//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ans = 0;
        ll takes = 0;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>=k) takes+=v[i];
                else if(v[i]==0 && takes>0){
                    ans++;
                    takes--;
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}