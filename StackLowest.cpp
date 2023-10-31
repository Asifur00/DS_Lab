#include<iostream>
using namespace std;
#define size 5
int Arr[size],top=-1;
bool isempty()
{
  if(top==-1)
    return true;
  else
    return false;
}
void push(int value)
{
  if(top==size-1)
  {
    cout<<"Stack is full!"<<endl;
  }
  else
  {
    top++;
    Arr[top]=value;
  }
}
void pop()
{
  if(isempty())
  {
    cout<<"Stack is empty!"<<endl;
  }
  else
    top--;
}
void show_top()
{
  if(isempty())
  {
    cout<<"Stack is empty!"<<endl;
  }
  else
    cout<<"Element at top is: "<<Arr[top]<<endl;
}
void displayStack()
{
  if(isempty())
  {
    cout<<"Stack is empty!"<<endl;
  }
  else
  {
    for(int i=top;i>=0;i--)
    {
      cout<<Arr[i]<<endl;
    }
  }
}
int removeSmallestElement()
{
  if(isempty())
  {
    cout<<"Stack is empty!"<<endl;
  }
  else
  {
    int smallestElement = Arr[0];
    int smallestElementIndex = 0;

    for (int i = 1; i <= top; i++) {
      if (Arr[i] < smallestElement) {
        smallestElement = Arr[i];
        smallestElementIndex = i;
      }
    }

    for (int i = smallestElementIndex; i < top; i++) {
      Arr[i] = Arr[i + 1];
    }

    top--;

    return smallestElement;
  }
}

int main()
{

push(5);
push(10);
push(11);
push(12);
removeSmallestElement();
displayStack();

  return 0;
}
