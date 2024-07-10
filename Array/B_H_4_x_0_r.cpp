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
    string s;
    cin >> s;
    int n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            s[i] = '4';
        if (s[i] == 'i')
            s[i] = '1';
        if (s[i] == 'e')
            s[i] = '3';
        if (s[i] == 'o')
            s[i] = '0';
        if (s[i] == 's')
            s[i] = '5';
    }
    cout << s << endl;
    return 0;
}