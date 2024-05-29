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
        cin >> x;
        for (int i = 1; i <= x; i++){
            cout << i << " ";
        }
        cout <<endl;
        for(int i = x; i > 0; i--){
            cout << i << " ";
        }
        cout <<endl;
    }
    return 0;
}