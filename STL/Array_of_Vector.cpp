//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
// #define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N; 
    cin >> N;
    vector <int> v[N];
    for(int i = 0; i < N; i++){
        ll n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }

    }
    //this will print the vecor fo array
    for(int i = 0; i < N; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}