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

int lengthOfList(Node *head){
    if(!head) return 0;
    int count=0;
    Node *temp=head;
    while(temp){
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

void printLast(Node *head, int k){
    int len=lengthOfList(head)-k;
    Node *temp=head;
    while(temp){
        if(len>0) {
            temp=temp->next;
            len--;
        }
        else{
            cout<<temp->value<<" ";
            temp=temp->next;
        }
    }
}

int main(){
    int n; cin>>n;
    int x; cin>>x;
    Node *list=createNode(x);
    for(int i=1; i<n; i++){
        cin>>x;
        list=addLast(list, x);
    }
    int k; cin>>k;
    printList(list);
    cout<<endl;
    printLast(list, k);
    return 0;
}
