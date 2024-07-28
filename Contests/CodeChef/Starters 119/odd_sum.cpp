// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
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
        ll n, k;
        cin >> n >> k;
        for (ll i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        ll i, j;
        i = k + 2;
        while (i <= n)
        {
            cout << i << " ";
            i += 2;
        }
        j = k + 1;
        while (j <= n)
        {
            cout << j << " ";
            j += 2;
        }
        cout << "\n";
    }

    return 0;
}