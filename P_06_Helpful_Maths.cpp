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
    ll plus = 0;
    cin >> str;
    ll n = str.size();
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '+')
        {
            arr.push_back(str[i]);
        }
        else
        {
            plus++;
        }
    }
    sort(arr.begin(), arr.end());
    if (plus)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (i < arr.size() - 1)
            {
                cout << arr[i] - '0' << '+';
            }
            else
            {
                cout << arr[i] - '0' << endl;
            }
        }
    }
    else
    {
        cout << arr[0] - '0' << endl;
    }
    return 0;
}