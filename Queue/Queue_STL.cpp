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
    queue<string> q;
    q.push("hello");
    q.push("world");

    while(!q.empty()){
        cout << q.front() <<endl;
        q.pop();
    }


    return 0;
}