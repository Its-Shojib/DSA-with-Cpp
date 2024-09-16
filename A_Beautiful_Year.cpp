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
    ll y;
    cin>>y;
    while(true){
        y++;
        ll a = y/1000;
        ll b = y/100%10;
        ll c = y/10%10;
        ll d = y%10;
        if(a !=b && a !=c && a !=d && b != c && b !=d && c !=d){
            break;
        }
    }
    cout<<y<<endl;
    return 0;
}