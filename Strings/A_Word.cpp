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
    string s;
    cin >> s;
    int n = s.length();
    ll upper = 0;

    for(int i = 0; i < n; i++){
        if(s[i] >= 65 && s[i] <=90){
            upper++;
        }
    }
    ll lower = n-upper;
    if(upper > lower){
        for(ll i = 0; i <n; i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(ll i=0; i < n; i++) 
          s[i] = tolower(s[i]);
    }

    cout << s << endl;
    return 0;
}