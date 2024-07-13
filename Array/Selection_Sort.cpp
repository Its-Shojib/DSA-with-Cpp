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
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++){
        ll minIndex = i;
        for(ll j = i+1; j < n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }


    return 0;
}