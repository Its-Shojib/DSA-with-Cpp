//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "CHAT WITH HER!\n"
#define no cout << "IGNORE HIM!\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    ll n = s.size();
    sort(s.begin(), s.end());
    ll count = 0;

    for(ll i = 0; i < n-1; i++){
        if(s[i] != s[i+1]) 
            count++;
    }

    if(count%2==0) no;
    else yes;

    return 0;
}