//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

long long ArraySum(long long n, long long a[]){
    if(n < 0) return 0;
    return ArraySum(n-1, a) + a[n]; 


}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    ll sum = ArraySum(n-1, a);
    cout << sum << endl;
    return 0;
}