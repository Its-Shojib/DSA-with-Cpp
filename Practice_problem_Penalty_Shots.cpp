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
    while (t--)
    {
        ll n = 10;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // sort(a,a+n);
        ll team1 = 0;
        ll team2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0 && a[i] == 1)
                team1++;
            else if (i % 2 == 1 && a[i] == 1)
                team2++;
        }
        if (team1 == team2)
            cout << 0 << endl;
        else if (team1 > team2)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}