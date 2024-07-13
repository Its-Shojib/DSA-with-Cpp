//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long a[N];

void Merge(ll l, ll r, ll mid){
    ll l_Size = mid - l + 1;
    ll L[l_Size+1];
    ll r_Size = r - mid;
    ll R[r_Size+1];
    for(int i = 0; i < l_Size; i++) 
        L[i] = a[l + i];

    for(int i = 0; i < r_Size; i++)
        R[i] = a[mid + 1 + i];

    L[l_Size] = R[r_Size] = INT_MAX;
    ll l_i = 0;
    ll r_i = 0;
    for(int i = l; i <= r; i++){
        if(L[l_i] <= R[r_i]){
            a[i] = L[l_i];
            l_i++;
        }
        else{
            a[i] = R[r_i];
            r_i++;
        }
    }

}

void MergeSort(ll l, ll r){
        if(l == r) return; 
        ll mid = (l + r) / 2;
        MergeSort(l, mid);
        MergeSort(mid + 1, r);
        Merge(l, r, mid);
    }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    MergeSort(0, n-1);

    for(int i = 0; i < n; i++) 
    cout << a[i] << " ";
    cout << endl;

    return 0;
}