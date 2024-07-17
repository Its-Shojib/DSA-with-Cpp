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
    string s;
    cin >> s;
    ll Anton =0, Danik = 0;
    for(auto st : s){
        if(st == 'A') Anton++;
        else Danik++;
    }
    if(Anton>Danik) cout<<"Anton"<<endl;
    else if(Danik>Anton) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    
    return 0;
}