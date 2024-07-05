//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a*b<=x*y) yes;
        else no;
    }
    return 0;
}