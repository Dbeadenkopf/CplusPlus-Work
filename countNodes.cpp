// This file will contain code that will display a linked list and
// count the amount of nodes that are in the linked list
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

int count_all_Nodes()
{
    struct Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void display_all_Nodes()
{
    struct Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->num << " ";
        tmp = tmp->next;
    }
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

    cout << "The singly linked list: \n";
    display_all_Nodes();

    cout << "The amount of nodes in this linked list: \n";
    cout << count_all_Nodes() << endl;

    return 0;
}