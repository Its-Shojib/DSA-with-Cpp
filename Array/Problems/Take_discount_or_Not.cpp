//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "COUPON\n"
#define no cout << "NO COUPON\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,y,z, previousSum=0,current=0;
        cin>>x>>y>>z;
        ll a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
            previousSum+=a[i];
            if(a[i]-z >0){
                current+=a[i]-z;
            }
        }
        // cout<<y<<current<<previousSum<<endl;
        if(y+current<previousSum) yes;
        else no;
    }
    return 0;
}