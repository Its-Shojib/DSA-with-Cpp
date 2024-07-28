//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "Yes\n"
#define no cout << "No\n"
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll countZero = 0;
        ll countOne = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'&& i>0 && s[i-1]=='0'){
                countZero++;
            }
            if(s[i] =='1') countOne++;
        }
        if(s[n-1]=='0') countZero++;
        
        if(countZero<countOne)yes;
        else no;


    }
    return 0;
}