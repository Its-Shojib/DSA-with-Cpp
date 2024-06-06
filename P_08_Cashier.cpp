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
        ll n, l, a;
        cin >> n >> l >> a;

        if (n == 0){
            cout << l/a << endl;
        }
        else{
            ll sum = 0;
            ll left = 0;
            for (ll i = 0; i < n; i++){
                ll x, y;
                cin >> x >> y;
                ll d = x-left;
                sum += d/a;
                left = x+y; 
            }
            ll extra =l-left;
            cout<<sum+extra/a<<endl;
        }
    return 0;
}