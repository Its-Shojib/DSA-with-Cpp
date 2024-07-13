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
    vector <ll> v(5,3); // 5 size and fill with 3
    ll n;
    cin >> n;
    for(ll i=1; i<=n; i++){
        ll x;
        cin >> x;
        v.push_back(x);
        //v.pop_back(); //remove the last value
    }

    vector<ll> v2 =v; //copy the vector v into vector v2
    // for(ll i=0; i<10; i++){
    //     cout<<v2[i]<<" ";
    // }

    reverse(v.begin(), v.end());
    cout<<v.size()<<endl;
    for(ll i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}