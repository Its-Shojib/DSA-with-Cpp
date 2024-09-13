//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin >> n>>k;
        multiset <ll> bags;
        for(ll i = 0; i <n;i++){
            ll candy;
            cin>>candy;
            bags.insert(candy);
        }
        ll candy_eat = 0;
        for(ll i = 0; i <k;i++){
            auto last_it = bags.end();
            --last_it;
            ll candy_ct = *last_it;
            candy_eat+=candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }

        cout<< candy_eat << endl;

    }
    return 0;
}