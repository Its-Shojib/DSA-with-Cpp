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
    ll n;
    cin >> n;
    // ll a[n] = {0};

    // for (ll i = 1; i <= n; i++)
    // {
    //     ll cnt = 0;
    //     for (ll j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             cnt++;
    //         }
    //     }
    //     if (cnt == 2)
    //     {
    //         a[i] = 1;
    //     }
    // }

    // ll ans = 0;
    // vector <ll> answer;
    // for (ll i = 1; i <= n; i++){
    //     if(a[i] == 1){
    //         answer.push_back(i);
    //         ans++;
    //     }
    // }
    // cout << ans << endl;
    // for (ll i = 0; i < answer.size(); i++){
    //     cout << answer[i] << " ";
    // }

    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    vector <ll> primes;
    for(ll j = 0; j <is_prime.size(); j++){
        if(is_prime[j] == true){
            primes.push_back(j);
        }
    }
    cout<<primes.size()<<endl;
    for(ll i = 0; i < primes.size(); i++){
        cout<<primes[i]<<" ";
    }

    return 0;
}