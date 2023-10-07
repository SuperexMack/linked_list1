#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};

void insertAtBegin(node *&head, int n)
{

    node *temp = new node(n);
    temp->next = head;
    head = temp;
}

void insertAtEnd(node *&tail, int n)
{

node* temp = new node(n);
tail-> next = temp;
tail = temp;   


}

void print(node *&head)
{

    node *temp = head; 

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    node *first = new node(10);
    cout << "The first element of your first node is :" << first->data << endl;

    node *head = first; 
    node *tail = first;

    insertAtEnd(tail, 20);
    insertAtEnd(tail, 33);
    insertAtEnd(tail, 26);
    insertAtEnd(tail, 11);
    insertAtEnd(tail, 12);
    insertAtEnd(tail, 13);
    print(head);
}