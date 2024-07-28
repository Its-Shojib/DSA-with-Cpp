// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }

        ll sum = 0;
        for (int i = 0; i < n - 2; ++i){
            sum += a[i];
        }

        ll result = a[n - 1] - (a[n - 2] - sum);

        cout << result <<endl;
    }
    
    return 0;
}