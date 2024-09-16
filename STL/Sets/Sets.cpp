//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

void printSet(set<string>&s){
    for(auto x : s){
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    set<string> s;
    s.insert("Shojib");
    s.insert("Islam");
    s.insert("Rahman");
    
    auto it = s.find("Shojib");
    if(it!= s.end()){
        s.erase(it);
    }
    printSet(s);

    return 0;
}