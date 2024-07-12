//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll x;
    cin >> x;
    string s;
    cin >> s;
    ll count = 0;
    for(int i = 0; i <x-1; i++){
        if(s[i] == s[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}