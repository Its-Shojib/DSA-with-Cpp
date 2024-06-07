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
        string str;
        cin >> str;
        ll n = str.size();
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
            {
                ans++;
                if (ans == 3)
                    break;
            }
            else
            {
                ans = 0;
            }
        }
        if (ans == 3)
        {
            cout << "Happy" << endl;
        }
        else
        {
            cout << "Sad" << endl;
        }
    }

    return 0;
}