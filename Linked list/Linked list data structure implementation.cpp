#include<bits/stdc++.h>
using namespace std;

class node  ///struct node in C
{
    public :
    int data;
    /// struct node *next;       syntax in C..
    node *next;
};

int main()
{
    ///Initialize nodes
    /*struct node *head;     syntax in C
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;
    */
    node *head;
    node *one=NULL;
    node *two=NULL;
    node *three=NULL;


    ///Allocate memory
    /*one = malloc(sizeof(struct node));        syntax in C
     two = malloc(sizeof(struct node));
     three = malloc(sizeof(struct node));
     */

    one=new node();
    two=new node();
    three=new node;


    ///Assigning data values;
    one->data=1;
    two->data=2;
    three->data=3;

    ///Connect nodes

    one->next=two;
    two->next=three;
    three->next=NULL;

    ///saving address of first node in head;
    head=one;


    ///printing the linked list value
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
///Alhamdulillah...

