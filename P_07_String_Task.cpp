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
    string str;
    cin >> str;
    int n = str.size();
    vector<char> a;
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] + 32;
        }

        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'){
            a.push_back(str[i]);
        }
    }
    int m = a.size();
    for(int i = 0; i < m; i++){
        cout <<'.'<< a[i];
    }
    return 0;
}