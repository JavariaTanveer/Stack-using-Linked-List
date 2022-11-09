#include"Node.h"
class LinkedList
{
    private:
    Node* head;
    Node*tail;
    public:
    LinkedList()
    {
        head=nullptr;
        tail=nullptr;
    }
    void push(int data)
{
    Node* N=new Node;
    N->setdata(data);
    N->setnext(head);
    if(head==nullptr)
{
    tail=N;
}
head=N;
}
void pop()
{
    if(head==nullptr)
   {
        cout<<"List is empty"<<endl;
   }
    Node* temp=head;
    if(head==tail)
    {
        head=tail=nullptr;
        delete temp;
       //return temp;
    }
    else
    {
        head=head->getNext();
        delete temp;
        //return temp;
    }
}
void display()
{
if(head==nullptr)
cout<<"Linked list is empty"<<endl;
Node*temp=head;
cout<<"Data----is ";
while(temp!=nullptr)
{
    cout<<temp->getdata()<<"  ";
    temp=temp->getNext();
}
}
void top()
{
    cout<< head->getdata();
}
};