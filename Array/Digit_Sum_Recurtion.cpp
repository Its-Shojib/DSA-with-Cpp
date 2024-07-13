//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

int DigitSum(ll n){
    if(n==0) return 0;
    return  DigitSum(n/10) + n%10;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    ll ans = DigitSum(n);
    cout << ans << endl;  // Print the sum of digits of the given number.

    return 0;
}