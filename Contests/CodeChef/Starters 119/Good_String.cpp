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

pair<int, int> GoodString(string s, ll n)
{
    int cnt = 1;
    int var = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            var++;
        }
        else
        {
            var = 1;
        }
        cnt = max(cnt, var);
    }
    cout << cnt<<" ";
    return {cnt, var};
}

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
        string s;
        cin >> s;
        pair<int, int> p = GoodString(s, n);
        ll cnt = p.first;
        ll var = p.second;

        for (int i = 0; i < k; i++)
        {
            char car;
            cin>>car;
            s.push_back(car);
            if (s[n+i] == s[n+i - 1])
            {
                var++;
            }
            else
            {
                var = 1;
            }
            cnt = max(cnt, var);
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
    return 0;
}