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
    vector<int> v = {0,1,2,3,4};

    vector<int> ::iterator it = v.begin();
    // cout<<(*it);
    
    for(it=v.begin(); it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    vector<pair<int, int>> vp = {{0,1},{1,2},{3,4}};
    vector<pair<int, int>> ::iterator itt;

    for(itt=vp.begin(); itt!=vp.end();++itt){
        // cout<<(*itt).first<<" "<<(*itt).second<<endl;
        cout<<(itt->first)<<" "<<(itt->second)<<endl;
    }

    for(int &value: v){ //we can also use reference by "&value"
        cout<<++value<<" ";
    }
    cout<<endl;

    for(pair<int, int> value: vp){ //we can also use "auto" insted of "pair<int,int>"
        cout<<value.first<<" "<<value.second<<endl;
    }

    auto a = 2;
    cout<<a<<endl;

    //Auto keyword as iterator
    for(auto iit: vp){
        cout<<iit.first<<" "<<iit.second<<endl;
    }
    return 0;
}