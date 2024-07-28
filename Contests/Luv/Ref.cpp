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

//call by ref, and call by value
void increment(int &a, int b){
    a++;
    b++;

}
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a = 4;
    int b = 10;
    increment(a,b);
    cout<<"Before Swaping : "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swaping : "<<a<<" "<<b<<endl;
    return 0;
}