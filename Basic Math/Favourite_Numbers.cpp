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
        if(x%2==0 && x%7==0) cout<<"Alice"<<endl;
        else if(x%2==1 && x%9==0) cout<<"Bob"<<endl;
        else cout<<"Charlie"<<endl;


    }
    return 0;
}