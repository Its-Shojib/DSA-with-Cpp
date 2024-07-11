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
    ll n, temp;
    cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];

    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}