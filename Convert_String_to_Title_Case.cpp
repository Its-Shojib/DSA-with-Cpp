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
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        ll n = str.size();
        if(str[0]>=97 && str[0]<= 122){
            str[0] = str[0]-32;
        }
        
        for(int i=1; i<n; i++){
            if(str[i]>=97 && str[i+1]<= 122 && str[i+1]>=65 && str[i+1]<=90){
                str[i+1] = str[i+1]+32;
            }
        }
        for(int i=1; i<n; i++){
            if(str[i]==' ' && str[i+1]>=97 && str[i+1]<= 122){
                str[i+1] = str[i+1]- 32;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}