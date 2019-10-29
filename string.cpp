 /* #include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
   string s;
   struct nade *next;
};

struct node *start=NULL;

int main()
{
  string sa;
  int a;
  scanf("%s",sa);
  scanf("%d",a);
  printf("%s%d",sa,a);
  return 0;
} */

#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    string s;
    struct Node *next;
};

struct Node *start=NULL;

void insertNode()
{
    struct Node *temp;
    temp=new (struct Node);
    cout<<"\n Enter your Name:";
    cin>>temp->s;
    temp->next=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        temp->next=start;
        start=temp;
    }
}

void displayList() {
    struct Node *temp;
    if (start == NULL)
        cout << "\n list is empty";
    else {
        temp = start;
        while (temp != NULL) {
            cout << temp->s<<endl;
            temp = temp->next;
        }
    }
}

void menu()
{
    int ch;
        cout<<"\n1.Insert";
        cout<<"\n2.Display";
        cout<<"\n3.Exit";
        cout<<"\n Enter your choice :";
        cin>>ch;
        switch (ch)
        {
            case 1:
                insertNode();
                break;
            case 2:
                displayList();
                break;
           /* case 3:
                exit(0); */
            default:
                cout<<"\n invalid choice";
        }
}

int main()
{
    int n=1;
    while(n)
    {
        menu();
        cout<<"\n do you want contineu(0/1) :";
        cin>>n;
    }
    return 0;
}
