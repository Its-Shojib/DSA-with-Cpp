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
        if(x<100) cout << x<<endl;
        else if(x>100 && x<=1000) cout << x-25<<endl;
        else if(x>1000 && x<=5000) cout << x-100<<endl;
        else if(x>5000) cout << x-500<<endl;
    }
    return 0;
}