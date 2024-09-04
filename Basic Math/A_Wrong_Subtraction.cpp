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
    ll n,k;
    cin>>n>>k;
    while(k--){
       ll last_digit = n%10;
       if(last_digit != 0){
        n--;
       }else{
        n /=10;
       }
    }
    cout<<n<<endl;
    return 0;
}