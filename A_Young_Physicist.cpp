// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    ll xSum = 0, ySum = 0, zSum = 0;
    while (t--){
        ll x, y, z;
        cin >> x >> y >>z;
        xSum += x; 
        ySum +=y; 
        zSum +=z;
    }
    if(xSum ==0 &&  ySum ==0 && zSum ==0){
        yes;
    }
    else no;
    return 0;
}