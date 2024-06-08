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
    string s;
    cin >> s;
    int n = s.size();
    string ans;
    for (int i = 0; i < n; i++){
        if (s[i] >= 'a' && s[i] <= 'z') ans.push_back(s[i]);

        if (s[i] >= '0' && s[i] <= '9'){
            if(!ans.empty()) ans.pop_back();
        }
    }
    cout << ans << endl;
    return 0;
}