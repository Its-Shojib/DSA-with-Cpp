//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "READY FOR BATTLE\n"
#define no cout << "NOT READY\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    ll ready = 0;
    ll notReady = 0;
    ll array [n];
    for(int i=0; i<n; i++){
        cin >> array[i];
        if(array[i] % 2 == 0){
            ready++;
        }else{
            notReady++;
        }
    }
    if(ready>notReady) yes;
    else no;
    return 0;
}