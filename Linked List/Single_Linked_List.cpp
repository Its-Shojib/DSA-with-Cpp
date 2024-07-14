//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

struct Single_Linked_List
{
    int data;
    Single_Linked_List *next;
};

Single_Linked_List *head = NULL;

void insert(int value){
    Single_Linked_List *newNode = new Single_Linked_List();
    newNode-> data = value;
    newNode-> next = head;
    head = newNode;
}

void printList(){
    Single_Linked_List *temp = head;
    while(temp!= NULL){
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    // Creating a Singly Linked List with 6 nodes
    insert(0);
    printList();
    insert(1);
    printList();
    insert(2);
    printList();
    insert(3);
    printList();
    insert(4);
    printList();
    insert(5);
    printList();

    return 0;
}