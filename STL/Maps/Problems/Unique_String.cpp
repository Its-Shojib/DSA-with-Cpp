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

    map<string,int> m;
    int n; 
    cin >> n;

    for(ll i=0; i<n; i++){
        string s; 
        cin >> s;
        m[s]++;
    }
    for(auto pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
        
    return 0;
}