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
    string s;
    cin >> s;
    int n = s.size();
    string target = "hello";
    ll k=0;
    for(int i = 0; i < n;i++){
        if(s[i] == target[k])k++; 
    }
    if(k == 5)cout << "YES\n";
    else cout << "NO\n";
    return 0;
}