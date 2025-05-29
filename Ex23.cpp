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

class LinkedList {
    Node *head;
    public:
        LinkedList() : head(nullptr){}
        LinkedList(int a[], int n) {
            for(int i=n-1; i>=0; i--){
                insertHead(a[i]);
            }
        }
        void insertHead(int value){
            Node *temp=new Node(value);
            temp->next=head;
            head=temp;
        }
        void print(){
            if(!head) return;
            Node *temp=head;
            while(temp){
                cout<<temp->value<<" ";
                temp=temp->next;
            }
        }
};

int main(){
    LinkedList list;
    list.insertHead(3);
    list.insertHead(4);
    list.print();

    return 0;
}