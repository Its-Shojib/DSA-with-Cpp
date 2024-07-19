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
    ll mx = 0;
    ll total = 0;
    while(t--){
        ll x,y;
        cin>>x>>y;
        total = total - x + y;
        mx = max(mx, total);
    }
    cout<<mx<<endl;

    return 0;
}