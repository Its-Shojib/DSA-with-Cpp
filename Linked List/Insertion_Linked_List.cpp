//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert_at_Position(int pos, int data){
    Node* newNode = new Node();
    newNode->data = data;
    if(pos == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        cout << "Invalid Position" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_End(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    insert_at_End(4);
    insert_at_End(5);
    insert_at_End(6);
    insert_at_Position(1, 10);
    insert_at_Position(4, 7);
    insert_at_Position(5, 8);
    printList();
    return 0;
}