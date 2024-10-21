// This file will contain code for a regular linked list
// but instead of just displaying it , it will insert a peice
// of data to the beginning of the linked list
#include <iostream>

using namespace std;

struct Node
{
    int num;
    Node *next;
};

int size = 0;

struct Node *head = NULL;

void insert_Node(int n)
{
    struct Node *new_node = new Node;
    new_node->num = n;
    new_node->next = head;
    head = new_node;
}

void insert_At_Beginning(int newElement)
{
    Node *new_node = new Node();
    new_node->num = newElement;
    new_node->next = head;
    head = new_node;
}

void display_all_Nodes()
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
    for (int i = 1; i <= 13; i++)
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

    cout << "Singly linked list: \n";
    display_all_Nodes();

    cout << "Inserting element at the beginning of the linked list: \n";
    insert_At_Beginning(10);
    display_all_Nodes();

    return 0;
}