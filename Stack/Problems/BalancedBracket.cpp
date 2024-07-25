//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3},{']', 1}, {')', 2}, {'}', 3}};
string isBalanced(string s){
    stack<char> st;
    for(char bracket: s){
        if(symbols[bracket]< 0){
            st.push(bracket);
        }else{
            if(st.empty() || symbols[st.top()] + symbols[bracket]!= 0) return "NO";
            st.pop();
        }
    }
    return st.empty()? "YES" : "NO";
 }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }

    return 0;
}