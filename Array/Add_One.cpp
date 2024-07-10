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
    ll t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        bool carry = true; 
        for (int i = n.length() - 1; i >= 0 && carry; i--) {
            if (n[i] == '9') {
                n[i] = '0';
            } else {
                n[i] = n[i] + 1; 
                carry = false;
            }
        }
        if (carry) {
            n = "1" + n;
        }
        cout << n << endl;

    }
    return 0;
}