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
    int array[10], x;
    for(int i=0; i<10; i++) cin >> array[i];
    
    cout<<"Enter the number you want to search: "<<endl;
    cin >> x;
    bool found = false;
    int index;
    for(int i=0; i<10; i++){
        if(array[i] == x){
            index = i;
            found = true;
            break;
        }
    }
    if(found) 
        cout << "Element found at index: " << index << endl;
    else 
        cout << "Element not found in the array."<<endl;
    return 0;
}