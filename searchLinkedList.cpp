// This file will contain the c++ code for searching a linked
// list for a given node position that is finding the nth nod
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
    sz++;
}

int get_Nth_Node(Node *head, int target)
{
    Node *current = head;
    int length = 0;
    while (current != NULL)
    {
        if (length == target)
        {
            return current->num;
        }
        length++;
        current = current->next;
    }
    return -1;
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

    int pos = 1;
    cout << "\n\nPosition: " << pos << endl;
    int result = get_Nth_Node(head, pos - 1);
    cout << "\nValue : " << result << endl;

    pos = 2;
    cout << "\n\nPosition: " << pos << endl;
    result = get_Nth_Node(head, pos - 1);
    cout << "\nValue : " << result << endl;

    return 0;
}