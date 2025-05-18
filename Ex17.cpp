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

Node *insert(Node *head, int value){
    Node *element=createNode(value);
    if(!head) return element;
    bool ascending=true;
    Node *temp=head;
    while(temp->next){
        if(temp->value > temp->next->value){
            ascending=false;
            break;
        }
        temp=temp->next;
    }
    if(ascending){
        if(value < head->value){
            element->next=head;
            return element;
        }
        temp=head;
        while(temp->next && temp->next->value < value){
            temp=temp->next;
        }
        element->next=temp->next;
        temp->next=element;
        if(!temp->next){
            temp->next=element;
            element->next=nullptr;
        }
    }
    else{
        if(value>head->value){
            element->next=head;
            return element;
        }
        temp=head;
        while(temp->next && temp->next->value>value){
            temp=temp->next;
        }
        element->next=temp->next;
        temp->next=element;
        if(!temp->next){
            temp->next=element;
            element->next=nullptr;
        }
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
    int value; cin>>value;
    list=insert(list, value);
    printList(list);
    return 0;
}