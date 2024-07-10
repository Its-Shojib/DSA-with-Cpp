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
        ll x;
        string str;
        cin >> x >> str;
        ll n = str.size();
        ll charlsen = 0;
        ll chef = 0;
        for (ll i = 0; i < n; i++)
        {
            if (str[i] == 'C')
                charlsen += 2;
            else if (str[i] == 'N')
                chef += 2;
            else if (str[i] == 'D')
            {
                chef += 1;
                charlsen += 1;
            }
        }
        if (charlsen > chef)
        {
            cout << x * 60 << endl;
        }
        else if (chef > charlsen)
        {
            cout << x * 40 << endl;
        }
        else
        {
            cout << x * 55 << endl;
        }
    }
    return 0;
}