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

Node *addFirst(Node *head, int x){
    Node *element = new Node(x);
        /*
        Node *element = new Node;
        element->value = x;
        element->next = head;
        */
    element->next=head;
    head=element;
    return head;
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

int main(){
    int n; cin>>n;
    int x; cin>>x;
    Node *list=createNode(x);
    for(int i=1; i<n; i++){
        cin>>x;
        list=addLast(list, x);
    }
    int k; cin>>k;
    list=addFirst(list, k);
    printList(list);
    return 0;
}