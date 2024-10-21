// This file will contain c++ code for the linked list data structure
// we are to find and return the middle element of this linked list
#include <iostream>

using namespace std;

struct Node
{
    int num;
    Node *next;
};

int sz = 0;

void insert_Node(Node **head, int n)
{
    Node *new_node = new Node();
    new_node->num = n;
    new_node->next = *head;
    *head = new_node;
}

int get_Middle_Node(Node *head)
{
    if (!head)
    {
        return -1;
    }
    int pos = 0;
    Node *middle = head;
    while (head)
    {
        if (pos % 2 != NULL)
        {
            middle = middle->next;
        }
        pos++;
        head = head->next;
    }
    return middle->num;
}

void display_All_Nodes(Node *node)
{
    while (node != NULL)
    {
        cout << node->num << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    insert_Node(&head, 1);
    insert_Node(&head, 3);
    insert_Node(&head, 5);
    insert_Node(&head, 7);

    cout << "Regular linked list: \n";
    display_All_Nodes(head);

    cout << "The middle node of this linked list: \n";
    cout << get_Middle_Node(head) << endl;

    return 0;
}