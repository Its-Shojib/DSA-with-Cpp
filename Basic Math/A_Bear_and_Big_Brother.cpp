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
    ll x,y;
    cin >> x >> y;
    ll count = 0;

    do{
        x*=3;
        y*=2;
        count++;
    }while(x<=y);
    cout << count << endl;

    return 0;
}