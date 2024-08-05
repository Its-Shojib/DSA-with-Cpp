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
    stack<ll> stack;
    stack.push(2);
    stack.push(3);
    while(!stack.empty()){
        ll temp = stack.top();
        stack.pop();
        cout << temp << " "; //top element
    }

    return 0;
}