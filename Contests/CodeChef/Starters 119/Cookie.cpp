//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll out = 10000000000;
        for(ll i=0;i<n;i++){
            if(a[i]>= k){
                ll out2 = a[i]%k;
                if(out2<out){
                    out=out2;
                }
            }
        }
        if(out == 10000000000){
            cout<<-1<<endl;
        }else{
            cout<<out<<endl;
        }
        
    }
    return 0;
}