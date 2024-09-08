//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
vector <pair<ll, string>> vp;


bool compareFn(pair<ll, string> vp, pair<ll, string> vp2){
    if(vp.first == vp2.first){
        return vp.second < vp2.second;
    }
    return vp.first > vp2.first;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        string str;
        ll n;
        cin>>str>>n;
        vp.push_back({n, str});
    }
    sort(vp.begin(), vp.end(), compareFn);
    for(auto value : vp){
        cout<<value.second<<" "<<value.first<<endl;
    }
    return 0;
}