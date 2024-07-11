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
    ll n, x;
    cin >> n >> x;  
    ll a [n];
    bool found = false;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);  // O(n log n) time complexity for sorting.
    ll low = 0;
    ll high = sizeof(a)/ sizeof(a[0])-1;
    while(low <= high){
        ll mid = (low + high) / 2;
        if(a[mid] == x){
            found = true;
            break;
        }else if(a[mid]<x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    if(found) yes;
    else no;
    return 0;
}