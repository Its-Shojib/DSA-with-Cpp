//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        ll first_leaf = n - k + 1;
        ll sum = (first_leaf + n) * k / 2;
        
        if (sum % 2 == 0) yes;
        else no;
    }
    return 0;
}