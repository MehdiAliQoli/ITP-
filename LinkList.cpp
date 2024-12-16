#include<iostream>
using namespace std;

struct Node{
    int data ;
    Node* next;
};


void add(Node* &head ,Node* &top, int value ){
Node* temp = new Node();

temp->data=value;
temp->next=nullptr;
if(top == nullptr){
    top=temp;
    head = temp;
    return;
}
Node* current = top;
while(current->next!=nullptr){
    current=current->next;
}
current->next=temp;
head = temp;

}

void insertat(Node* &head , Node* top , int value , int position){

Node* temp = new Node;
temp->data = value;
temp->next = nullptr;
Node* current = top;
for(int i=1; i<position-1; i++){
current = current->next;
}
temp->next = current->next;
current->next=temp;


}

void Delete(Node* &head , Node* top , int value){

Node* current = top;
for(int i=1; i<value-1;i++){
    current = current->next;
}
Node* todelete = current->next;
current->next=current->next->next;
delete[] todelete;

}
void print(Node* top){
    Node* current = top;
    while(top!=nullptr){
        cout<<top->data<<" ";
        top=top->next;
    }
}
int main()
{

Node* head =new Node();
Node* top = nullptr;


   add(head , top , 12); 
   add(head , top , 14);
   add(head , top , 18); 
   add(head , top , 20);
insertat(head , top ,16 , 3 );
insertat(head , top ,13 , 2 );
insertat(head , top ,15 , 4 );
insertat(head , top ,17 , 6 );
insertat(head , top ,19 , 8 );
    Delete(head , top ,2 );
   print(top);
 return 0;
}
