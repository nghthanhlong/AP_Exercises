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

int compareList(Node *head1, Node *head2){
    int len1=lengthOfList(head1), len2=lengthOfList(head2);
    if (len1!=len2) return 0;
    Node *temp1=head1, *temp2=head2;
    while(temp1 && temp2){
        if(temp1->value!=temp2->value) return 0;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return 1;
}

int main(){
    int n1, n2; cin>>n1>>n2;
    int x1; cin>>x1;
    Node *list1=createNode(x1);
    for(int i=1; i<n1; i++){
        cin>>x1;
        list1=addLast(list1, x1);
    }
    int x2; cin>>x2;
    Node *list2=createNode(x2);
    for(int i=1; i<n2; i++){
        cin>>x2;
        list2=addLast(list2, x2);
    }
    cout<<compareList(list1, list2);
    return 0;
}
