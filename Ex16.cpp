#include<iostream>

using namespace std;

struct Node{
    int value;
    Node *next;

    Node (int newValue){
        this->value=newValue;
        this->next=nullptr;
    }
};

Node *createNode(int x){
    Node *temp=new Node(x);
    temp->next=nullptr;
    return temp;
}

Node *addLast(Node *head, int x){
    Node *temp=head;
    Node *element=new Node(x);
    if(!head) return element;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=element;
    return head;
}

void printList(Node *head){
    if(!head) return;
    Node *temp=head;
    while(temp){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}

Node *convert(Node *head){
    Node *fast=head, *slow=head;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *current_B=slow->next;
    Node *current_A=head;
    slow->next=nullptr;
    while(current_A && current_B){
        Node *next_A=current_A->next;
        Node *next_B=current_B->next;
        current_A->next=current_B;
        current_B->next=next_A;
        current_A=next_A;
        current_B=next_B;
    }
    return head;
}

int main(){
    int n; cin>>n;
    int x; cin>>x;
    Node *list=createNode(x);
    for(int i=1; i<n; i++){
        cin>>x;
        list=addLast(list, x);
    }
    list=convert(list);
    printList(list);
    return 0;
}