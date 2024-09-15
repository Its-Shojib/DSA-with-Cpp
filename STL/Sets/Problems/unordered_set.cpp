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
    unordered_set <string> s;
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    ll x;
    cin >> x;
    for(ll i = 0; i < x; i++){
        string err;
        cin >> err;
        auto it = s.find(err);
        if(it == s.end()){
            no;
        }else{
            yes;
        }
    }
    return 0;
}