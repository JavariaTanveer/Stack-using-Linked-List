#include"LinkedList.h"
int main()
{
LinkedList l;
l.push(99);
l.push(344);
l.push(11);
l.push(76);
l.push(445);
l.pop();
l.pop();
cout<<"Top Data is :";
l.top();
cout<<endl;
l.display();
}