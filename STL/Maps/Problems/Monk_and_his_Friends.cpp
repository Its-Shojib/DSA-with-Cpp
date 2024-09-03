// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n, m;
        cin >> n >> m;
        map<ll, ll> mp;

        for (ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            mp[x]++;
        }
        for(ll j = 0; j < m; j++){
            ll y;
            cin >> y;
            if(mp[y]>0){
                yes;
                mp[y]++;
            }else{
                no;
                mp[y]++;
            }
        }
    }
    return 0;
}