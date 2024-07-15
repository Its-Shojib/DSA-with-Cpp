//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

void printVectorPair(vector<pair<int , int>> &vp){
    cout<< vp.size()<<endl;
    for(int i=0; i<vp.size(); i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector <pair<int, int>> vp;
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int x, y;
        cin>>x>>y;
        // vp.push_back({x, y});
        vp.push_back(make_pair(x, y));
    }
    printVectorPair(vp);

    return 0;
}