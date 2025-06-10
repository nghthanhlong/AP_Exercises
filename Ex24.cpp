#include<iostream>

using namespace std;

class Node{
    int value;
    public:
        Node *next;
        Node *prev;

        Node(int val) : value(val), next(nullptr), prev(nullptr){}

        int getValue(){
            return value;
        }
};

void append(Node *&head, int val){
    Node *newNode=new Node(val);
    if(!head){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}

void printList(Node *head){
    while(head){
        cout<<head->getValue()<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node *insertionSort(Node *head){
    if(!head) return head;
    Node *sort = nullptr;
    Node *current =head;
    while(current){
        Node *next=current->next;
        current->next=nullptr;
        current->prev=nullptr;
        
        if(!sort || current->getValue() <= sort->getValue()){
            current->next=sort;
            if(sort){
                sort->prev=current;
            }
            sort=current;
        }
        else {
            Node *current_sort=sort;
            while(current_sort->next && current_sort->next->getValue() < current->getValue()){
                current_sort=current_sort->next;
            }
            current->next=current_sort->next;
            if(current_sort->next){
                current_sort->next->prev=current;
            }
            current_sort->next=current;
            current->prev=current_sort;
        }
        current=next;
    }
    return sort;
}

int main(){
    Node *head=nullptr;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        append(head, x);
    }
    head=insertionSort(head);
    printList(head);
}
