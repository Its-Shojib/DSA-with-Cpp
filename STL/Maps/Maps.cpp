//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

void DisplayMap(map<int, string> &m){
    cout<<m.size()<<endl;

    for(auto &pr: m){
        cout << pr.first << " " << pr.second << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    map<int, string> m;
    m[1] = "January";
    m[5] = "February";
    m[3] = "March";
    m.insert({4, "April"});

    // map<int, string> ::iterator it;
    // for(it = m.begin(); it!= m.end(); it++){
    //     cout << it->first << " " << it->second << endl;
    // }

    auto it = m.find(3);
    if(it== m.end()){
        cout<<"No Value"<<endl;
    }else{
        cout << it->first << " " << it->second << endl;
        m.erase(it);
    }
    // m.clear(); //it will clear the map
    DisplayMap(m);
    


    return 0;
}