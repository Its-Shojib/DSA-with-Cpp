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
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum = 0;
        ll ex = 0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%3==1){
                ex = 1;
            }
        }
        if(sum%3==0){
            cout<<"0"<<endl;
        }
        else if(sum%3==2){
            cout<<"1"<<endl;
        }
        else if(ex){
            cout<<"1"<<endl;
        }
        else {
            cout<<"2"<<endl;
        }
    }
    return 0;
}