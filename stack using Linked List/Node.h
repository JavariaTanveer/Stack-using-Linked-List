#include<iostream>
using namespace std;
class Node
{
private:
    int data;
    Node* next;
public:
Node()
{
    data=0;
    next=nullptr;
}
Node(int data)
{
    this->data=data;
    next=nullptr;
}
void setdata(int data)
{
    this->data=data;
}
int getdata()
{
    return data;
}
void setnext(Node* next)
{
  this->next=next;  
}
Node* getNext()
{
return next;
}
};