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
    ll m,n;
    cin >> m >> n;
    ll a[m];
    ll b[n];
    vector <ll> index;
    for(ll i=0;i<m;i++){
        cin >> a[i];
        index[a[i]]++;
    }
    for(ll i=0;i<n;i++){
        cin >> b[i];
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(b[i]>=a[j]){
                ans++;
            }
        }
        cout<<ans<<" ";
        ans=0;
    }
    return 0;
}