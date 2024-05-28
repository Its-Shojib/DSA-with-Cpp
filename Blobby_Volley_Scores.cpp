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
        string str;
        cin>>n>>str;
        ll Alice = 0;
        ll Bob = 0;
        if(str[0] == 'A'){
            Alice++;
        }
        for(int i=0; i<n-1;i++){
            if(str[i] == 'A' && str[i+1] == 'A'){
                Alice++;
            }
            else if(str[i] == 'B' && str[i+1]=='B'){
                Bob++;
            }
        }
        cout<<Alice<<" "<<Bob<<endl;
    }
    return 0;
}