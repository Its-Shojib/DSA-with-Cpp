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
    ll t, x;
    cin>>t>>x;
    ll bend = 0;
    while(t--){
        ll m;
        cin>>m;
        if(m<=x) bend++;
        else bend +=2;
    }
    cout << bend<<endl;
    return 0;
}