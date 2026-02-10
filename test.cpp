#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){  //constructor
        data = val;
        next = nullptr;
    }
};

Node* head; // global variable, can be accessed everywhere

void insert(int x){ // inserting the number x into the linked list
    Node* temp = new Node(x); 
    Node* scout = head;
    while (scout -> next != nullptr){
        scout = scout -> next;
    }
    scout -> next = temp;
}

void print(){ // printing all the values of all the nodes in the list
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    head = nullptr;
    int n;
    cout << "how many numbers?: "; cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cout << "enter a number: "; cin >> x;
        insert(x);
        print();
    }
    return 0;
}