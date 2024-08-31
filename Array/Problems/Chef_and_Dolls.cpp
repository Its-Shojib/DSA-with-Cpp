// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;

    while (t--){
        vector<ll> v(N,0);
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++){
            cin >> a[i];
            v[a[i]] ++;
        }

        ll ans = 0;
        for (ll i = 0; i < v.size(); i++){
            if (v[i]%2 == 1){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
























// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false); // Optimize IO operations
//     cin.tie(NULL); // Synchronize IO operations
    
//     int T;
//     cin >> T; // Read number of test cases
    
//     while (T--) {
//         int N;
//         cin >> N; // Read number of dolls
        
//         int result = 0; // Initialize result to store XOR of all doll types
//         for (int i = 0; i < N; i++) {
//             int type;
//             cin >> type; // Read doll type
//             result ^= type; // XOR the doll type with result
//         }
        
//         cout << result << "\n"; // Output the type of doll without a pair
//     }
    
//     return 0;
// }
