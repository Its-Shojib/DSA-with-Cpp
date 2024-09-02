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
long long n;
void deQueue(vector<ll> &Q, ll k)
{
    while (k--)
    {
        ll value = Q[0];
        for (ll i = 0; i < n - 1; i++)
        {
            Q[i] = Q[i + 1];
        }
        Q[n - 1] = value;
    }
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
        ll x, k;
        cin >> x >> k;
        n = x;
        vector<ll> queue;
        for (int i = 0; i < x; i++)
        {
            ll z;
            cin >> z;
            queue.push_back(z);
        }
        deQueue(queue, k);
        for(int i=0; i<x; i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}