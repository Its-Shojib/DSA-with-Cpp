//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll eight = 0;
    for(int i = 0; i < n;i++){
        if(str[i] == '8'){
            eight++;
        }
    }
    ll number = n/11;
    if(number> eight){
        cout<<eight<<endl;
    }else if(number<eight){
        cout<<number<<endl;
    }else{
        cout<<number<<endl;
    }
    
    return 0;
}