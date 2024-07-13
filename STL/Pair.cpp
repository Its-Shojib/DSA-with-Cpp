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

    pair<int, string> p;
    p.first = 1;
    p.second = "It's_Shojib";

    pair<int,string> q;
    q = make_pair(2, "Shojib_It's");

    pair<int,string> r;
    r = {3,"Its_Shojib"};

    ll a[] = {1,2,3,4};
    ll b[] = {5,6,7,8};

    pair<ll, ll> s[4];
    s[0] ={1,5};
    s[1] ={2,6};
    s[2] ={3,7};
    s[3] ={4,8};

    swap(s[0], s[1]);
    
    // for(int i=0; i<4; i++){
    //     s[i].first = a[i];
    //     s[i].second = b[i];
    // }
    for(int i=0; i<4; i++){
        cout << s[i].first << " " << s[i].second << endl;
    }




    return 0;
}