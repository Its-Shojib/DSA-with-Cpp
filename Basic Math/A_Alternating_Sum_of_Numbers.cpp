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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i = 0; i < n; i++){
            cin>>a[i];
            if(i%2==0){
                sum+=a[i];
            }else{
                sum-=a[i];
            }
        }

        cout<< sum <<endl;


    }
    return 0;
}