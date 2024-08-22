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
long long Q[5], n = 5, front = -1, tail = -1;

void enQueue()
{
    ll x;
    if (tail == n - 1){
        cout<<"Queue is Full"<<endl;
        return;
    }
    else
    {
        if (front == -1)
            front++;
        cout << "Enter The value in Insertion: " << endl;
        cin >> x;
        tail++;
        Q[tail] = x;
    }
}
void Display()
{
    if (front == -1)
        cout << "Queue is Empty\n";
    else
    {
        cout << "Queue is: ";
        for (int i = front; i <= tail; i++)
            cout << Q[i] << " ";
        cout << endl;
    }
}

void deQueue()
{
    if (front == -1 || front > tail){
        cout << "Queue is Empty, can't delete" << endl;
        return;
    }else{
        cout << "Deleted element is: " << Q[front] << endl;
        if(front == tail){
            front = -1;
            tail = -1;
        }else{
            front++;
        }
    }
}

int Peek(){
    if (front == -1){
        cout << "Queue is Empty, can't Peek" << endl;
    }
    else
        return Q[front];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    enQueue();
    Display();
    deQueue();
    Display();
    cout << "Peeked element is: " << Peek() << endl;
    deQueue();
    deQueue();
    deQueue();
    Display();
    deQueue();
    deQueue();
    Display();

    return 0;
}