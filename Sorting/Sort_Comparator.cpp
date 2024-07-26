//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

bool cmp (pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        if(a.first < b.first) return true; //increading order > true
        return false;
    }else{
        if(a.second < b.second) return false; //decreading order > false
        return false;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    vector<pair<int, int>> a(t);
    for(int i=0;i<t;i++) cin>>a[i].first>>a[i].second;
    sort(a.begin(), a.end(), cmp);
    for(int i=0;i<t-1;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}