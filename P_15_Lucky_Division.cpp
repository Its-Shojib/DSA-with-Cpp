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
    ll n;
    cin >> n;
    ll a[] = {4,7,44,47,74,77,444,447,474,477, 744,747,774,777};
    ll almostLucky = 0;
    for(int i = 0; i < 14; i++){
        if(n % a[i] == 0){
            almostLucky = 1;
            break;
        }
    }
    if(almostLucky) yes;
    else no;

    return 0;
}