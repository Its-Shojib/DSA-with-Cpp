//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

long long fact(ll n){
    if(n==0) return 1;

    return fact(n-1) * n;  
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll factorial = fact(5);
    cout<<factorial<<endl;
    return 0;
}