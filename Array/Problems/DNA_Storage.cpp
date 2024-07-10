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
        string str;
        cin>>str;
        for(int i=0; i<n; i+=2){
            if(str[i]=='0' && str[i+1]=='0'){
                cout<<"A";
            }
            else if(str[i]=='0' && str[i+1]=='1'){
                cout<<"T";
            }
            else if(str[i]=='1' && str[i+1]=='0'){
                cout<<"C";
            }else if(str[i]=='1' && str[i+1]=='1'){
                cout<<"G";
            }
        }
        cout<<endl;
    }
    return 0;
}