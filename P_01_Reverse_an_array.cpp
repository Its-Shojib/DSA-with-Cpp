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
    ll a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    reverse(a, a + t);
    for (int i = 0; i < t; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}