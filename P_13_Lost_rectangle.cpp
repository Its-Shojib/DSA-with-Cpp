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
    ll t;
    cin>>t;
    ll a =1;
    ll b =1;
    ll  sum = 1+t;
    for(ll i=1; i*i<=t; i++){
        if(t%i==0){
            a=i;
            b=t/i;
            if(a+b<sum){
                sum=a+b;
            }
        }
    }
    cout<<2*sum<<endl;
    return 0;
}