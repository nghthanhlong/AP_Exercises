#include<iostream>

using namespace std;

struct Node{
    int value;
    Node *next;

    Node (int newValue){
        this->value=newValue;
        this->next=nullptr;
    }
    Node (): value(0), next(nullptr){}
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

int lengthOfList(Node *head){
    int count=1;
    Node *temp=head;
    if(head->next==nullptr) return count;
    if(!head) return 0;
    while(temp->next){
        count++;
        temp=temp->next;
    }
    return count;
}

void printList(Node *head){
    if(!head) return;
    Node *temp=head;
    while(temp){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}

Node *deleteSingle(Node *head){
    Node *dummy = new Node(0);
    dummy->next=head;
    Node *current=head;
    Node *previous=dummy;
    while(current){
        if( (previous->value != current->value || previous==dummy) && 
            (current->next==nullptr || current->value != current->next->value)){
            previous->next=current->next;
            delete current;
            break;
        }
        previous=current;
        current=current->next;
    }
    head=dummy->next;
    delete dummy;
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
    list=deleteSingle(list);
    printList(list);
    return 0;
}

/*
Make a dummy node for checking previous, then check adjacent nodes value
Them move previous and current node to the left
*/