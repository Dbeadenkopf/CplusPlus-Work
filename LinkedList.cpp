// This file will contain the linked list data structure using a struct
// it will add odd numbers into the linked list and then display them

#include <iostream>

using namespace std;

struct Node
{
    int num;
    Node *next;
};

struct Node *head = NULL;

int sz = 0; // variable to keep track of the size of the list

void insert_Node(int n)
{
    struct Node *new_node = new Node;
    new_node->num = n;
    new_node->next = head;
    head = new_node;
    sz++;
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

    cout << "The regular singly linked list: \n";
    display_All_Nodes();

    return 0;
}