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
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll sum = 0;
        while(x>0){
            sum += x%10;
            x /= 10;
        }
        cout<<sum<<endl;
    }
    return 0;
}