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
        vector<ll>ans;
        string s;
        for(ll i=0;i<n;i++){
            cin>>s;
            for(ll j=0;j<4;j++){
                if(s[j]=='#'){
                    ans.push_back(j+1);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}