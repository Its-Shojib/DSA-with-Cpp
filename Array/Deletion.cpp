//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
// #define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long fact[N];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int array [10], n, x;
    cout<<"Enter the array size:"<<endl;
    cin >> n;
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i < n; i++) cin >> array[i];

    cout<<"Enter the position you want to delete"<<endl;
    cin >> x;
    if(x < 1 || x > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }else{
        for(int i = x - 1; i < n - 1; i++) array[i] = array[i + 1];
        n--;
        cout << "Array after deletion: ";
        for(int i = 0; i < n; i++) cout << array[i] << " ";
        cout << endl;
    }
    return 0;
}