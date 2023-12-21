#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class linklist{
    public:
    node* head;
    linklist(){
        head=nullptr;
    }
    void inserter(int data){
        node* newNode= new node(data);
        // newNode->next=head;
        // head=newNode;
        if(head==nullptr){
            head=newNode;
            head->next=nullptr;
        }else{
            node* temp=head;
            while (temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newNode;
            
        }
    }
    void displayer(){
        node* temp=head;
        while(head!=nullptr){
            cout<< temp->data<<" -> ";
            temp=temp->next;
        }
        cout <<"nullptr"<<endl;
    }
    ~linklist() {
        node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main(){
    linklist li;
    li.inserter(5);
    li.inserter(6);
    li.inserter(8);
    li.inserter(8);
    li.inserter(9);
    li.displayer();
    li.displayer();
    return 0;
}