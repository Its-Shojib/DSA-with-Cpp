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
    ll cheapest = 999999999;
    ll index;

    for(ll i = 0; i < n;i++){
        cin >> a[i];
        if(a[i] < cheapest){
            cheapest = a[i];
            index = i;
        }
    }
    cout << index <<endl;
    return 0;
}