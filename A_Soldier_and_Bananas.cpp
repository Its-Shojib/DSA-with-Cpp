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
    ll x,y,z;
    cin >> x >> y >> z;
    ll totalDollar = x*(z*(z+1))/2;
    
    if(totalDollar<=y) cout<<0<<endl;
    else cout<<totalDollar-y<<endl;
    return 0;
}