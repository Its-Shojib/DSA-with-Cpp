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
        ll l,r;
        cin>>l>>r;
        ll number = r-l;
        ll ans = (-1+ sqrt(1+8*number))/2;

        cout<<ans+1<<endl;
    }
    return 0;
}