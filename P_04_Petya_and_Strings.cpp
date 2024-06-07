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
    string s1, s2;
    cin >> s1 >> s2;
    int res = strcasecmp(s1.c_str(), s2.c_str());
    if (res > 0)
        cout << 1;
    else if (res < 0)
        cout << -1;
    else
        cout << 0;

        
    return 0;
}