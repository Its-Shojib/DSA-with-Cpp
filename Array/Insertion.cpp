// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
// #define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long fact[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[10], n;
    cout<< "Enter The Number Of arrays: "<<endl;
    cin >> n;
    cout << "Enter The Elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cout << "Enter the Specific element: "<<endl;
    cin >> x;
    //=================Shift in the first position:======================
    // for (int i = n; i > 0; i--){
    //     a[i] = a[i - 1];
    // }
    // a[0] = x;



    //=========================Shift in the last position:================
    // a[n] = x;



    //=====================Shift in the index position=====================
    int pos;
    cout << "Enter the index position: "<<endl;
    cin >> pos;
    for (int i = n; i >= pos; i--){
        a[i] = a[i - 1];
    }
    a[pos] = x;


    cout << "Array after shifting: ";
    for (int i = 0; i <= n; i++)
        cout << a[i]<<" ";
    return 0;
}