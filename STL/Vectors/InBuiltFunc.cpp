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
    ll n;
    cin>>n;
    vector<ll> v(n);

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    ll min = *min_element(v.begin(), v.end());
    ll max = *max_element(v.begin(), v.end());
    ll sum = accumulate(v.begin(), v.end(), 0LL);
    ll avg = sum / n;
    cout<<min<<" "<<max<<" "<<avg<<endl;

    ll cnt = count(v.begin(), v.end(), 2);
    cout<<cnt<<endl;

    reverse(v.begin(), v.end());
    for(auto x: v) cout<<x<<" ";
    cout<<endl;
    return 0;
}