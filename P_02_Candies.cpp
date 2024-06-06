// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long fact[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    ll arr[t];
    for (ll i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    ll a, b;
    cin >> a >> b;
    ll sum = 0;
    for (ll i = a; i <= b; i++){
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}