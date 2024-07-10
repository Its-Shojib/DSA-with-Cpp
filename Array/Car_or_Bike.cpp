//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "BIKE\n"
#define no cout << "CAR\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x>y) no;
        else if(x<y) yes;
        else cout<<"SAME"<<endl;
    }
    return 0;
}