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
int s [5], n = 5;
int top = -1;
void Push(ll x){
    if(top == n-1){
        cout << "Stack Overflow\n";
        return;
    }else{
        top++;
        s[top] = x;
    }
}

void Pop(){
    if(top == -1){
        cout << "Stack Underflow\n";
        return;
    } else{
        top--;
    }
}

int Peek(){
    if(top == -1){
        cout << "Stack is empty\n";
        return -1;
    } else{
        return s[top];
    }
}

void Display(){
    if(top == -1){
        cout << "Stack is empty\n";
        return;
    } else{
        for(int i=top; i>=0; i--){
            cout<<s[i]<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Pop();
    ll topElement = Peek();
    cout<<"Top Element : "<<topElement<<endl;
    Display();

    return 0;
}