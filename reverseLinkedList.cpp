// this file will contain the code for a linked list
// but instead of display the nodes we will display them in reverse order
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

void reverseList()
{
    Node *current = head;
    Node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;

        current = next;
    }
    head = prev;
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

    cout << "Regular linked list: \n";
    display_All_Nodes();

    cout << "Reversed linked list: \n";
    reverseList();
    display_All_Nodes();

    return 0;
}