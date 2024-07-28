//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll m,n;
    cin>>m>>n;
    ll arr[m][n];
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }


    return 0;
}