
// Linked list insertion operation (insertBeginning ,insertEnding,insertAfter in C++

#include<bits/stdc++.h>
using namespace std;

/// Create a node
struct node
{
    int data;
    node* next;
};

void insertAtBeginning(node **head_ref, int new_data)     ///data will be passed
{

    /// Allocate memory to a node
    ///struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  /// syntax in C
    node *new_node = new node();

    /// insert the data
    new_node->data = new_data;
    new_node->next = (*head_ref);

    /// Move head to new node
    (*head_ref) = new_node;
}

/// Insert a node after a node
void insertAfter(node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "the given previous node cannot be NULL";
        return;
    }

    ///struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    node *new_node=new node();

    new_node->data = new_data;       /// 1->2->3
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Insert at the end
void insertAtEnd(node **head_ref, int new_data)
{
    //struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    node *new_node=new node();
    node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) last = last->next;

    last->next = new_node;
    return;
}
/// Print the linked list
void printList(node *cur)
{
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

// Driver program
int main()
{
    node *head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    cout << "Linked list: ";
    printList(head);
}

///Alhamdulillah...
