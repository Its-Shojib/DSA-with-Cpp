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
        ll n;
        cin>>n;
        string a, b;
        cin >> a >> b;

        for (ll i=0; i < n; i++)
        {
            ll cnt = b[i] - a[i];
            if (cnt < 0)
            {
                cnt += 26;
            }
            if(cnt%3!=0){
                cnt+=26;
            }
            if(cnt%3!=0){
                cnt+=26;
            }
            cout<<cnt/3<<" ";
        }
        cout<<endl;
    }
    return 0;
}