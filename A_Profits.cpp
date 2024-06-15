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
    ll n,x;
    cin>>n>>x;
    ll a[n];
    ll day= 0;
    ll ans = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        day+=a[i];
        if(day>=x) {
            ans = i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}