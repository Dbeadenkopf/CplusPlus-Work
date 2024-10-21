// This file will contain the c++ syntax for a linked list
// we will be inserting data to the end of a already singly linked list
#include <iostream>

using namespace std;

struct Node
{
    int num;
    Node *next;
};

struct Node *head = NULL;

void insert_Node(int n)
{
    struct Node *new_node = new Node;
    new_node->num = n;
    new_node->next = head;
    head = new_node;
}

void insert_at_End(int newElement)
{
    Node *new_node = new Node();
    new_node->num = newElement;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }
}

void display_All_Nodes()
{
    struct Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->num << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    for (int i = 1; i <= 11; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            insert_Node(i);
        }
    }

    cout << "The singly linked list: \n";
    display_All_Nodes();

    insert_at_End(10);
    cout << "The singly linked list with new node at end: \n";
    display_All_Nodes();

    insert_at_End(12);
    cout << "The singly linked list with new node at end: \n";
    display_All_Nodes();

    return 0;
}
