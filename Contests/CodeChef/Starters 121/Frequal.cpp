#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll> sieve(ll n){ vector<bool> prime(n + 1, false); for (ll i = 4; i <= n; i += 2) {prime[i] = true;}for (ll i = 3; i * i <= n; i += 2) {if (!prime[i]) {for (int j = i * i; j <= n; j += 2 * i) {prime[j] = true;}}}vector<ll> ans;for (ll i = 2; i <= n; i++) {if (!prime[i]) ans.push_back(i);}return ans;}



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vector<ll> prime = sieve(1000000);
    // cout << prime.size() << "\n";
    while(t--){
        ll n; cin >> n;
        if(n & 1){
            cout << 1 << " ";
            n--;
        }
        int j = 0;
        for(int i = 0; j < n; i++){
            cout << prime[i] << " " << prime[i] << " ";
            j += 2;
        }
        cout << "\n";
    }
    return 0;
}
