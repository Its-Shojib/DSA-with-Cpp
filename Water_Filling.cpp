//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "Water filling time\n"
#define no cout << "Not now\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll x,y,z;
    cin>>x>>y>>z;
    if((x ==0 && y ==0) || (x==0 && z ==0) || (y==0 && z==0))
    yes;
    else no;
    }
    return 0;
}