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
        set<string> st;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            st.insert(s);
        }
        for(auto &name: st){
            cout<<name<<endl;
        }
    }
    return 0;
}