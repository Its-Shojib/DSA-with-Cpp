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
int main() {
    // your code goes here
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(n==2){
            if(arr[0]>arr[1]){
                no;
            }else{
                yes;
            }
            continue;
        }
        if(n==3){
            if(arr[1]<min(arr[2],arr[0]) || arr[1]>max(arr[2],arr[0])){
                no;
            }else
                yes;
                
            continue;
        }
        
        yes;
    }
}