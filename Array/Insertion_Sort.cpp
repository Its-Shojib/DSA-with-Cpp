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
long long a [] = {7,4,5,1,8,9,0,2,3};
long long n = 9;

void insertionSort(){
    for(int i=1; i<n; i++){
        long long key = a[i];
        int j = i-1;
        while(j >=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void Display(){
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    Display();
    insertionSort();
    Display();
    
    return 0;
}