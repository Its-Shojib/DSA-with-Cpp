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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n-1; i++){
        for(ll j = 0; j < n; j++){
            if(a[j] > a[j+1]){
                ll temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}