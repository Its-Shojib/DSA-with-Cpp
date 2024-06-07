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
    ll a[3000] = {0};
    for (ll i = 1; i <= 3000; i++)
    {
        ll cnt = 0;
        for (ll j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2)
        {
            a[i] = 1;
        }
    }
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        //Masum's Answer
        // vector <ll> divisor;
        // for(ll j=1;j*j<=i;j++)
        // {
        //     if(i%j==0)
        //     {
        //         divisor.push_back(j);
        //         if(j!=i/j)  divisor.push_back(i/j);
        //     }
        // }

        // ll count=0;
        // for(ll j=0;j<divisor.size();j++)
        // {
        //     if(a[divisor[j]]==1)
        //     {
        //         count++;
        //     }
        // }

        // if(count==2)  ans++;
        
        //My Answer
        ll count2=0;
        for (ll j = 1; j * j <= i; j++)
        {
            if (i % j == 0){
                if(a[j]==1){
                    count2++;
                } 
                if(j!=(i/j) && a[i/j]==1){
                    count2++;
                }
            }
        }
        if (count2 == 2){
            ans++;
        }
        
    }
    cout << ans << endl;
    return 0;
}