#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

node *makenode(int x)
{
    node *newNode = new node();
//    node *newNode = (node*)malloc(sizeof(node));
    newNode -> data = x;
    newNode -> next = NULL;
    return newNode;
}

void duyet(node *head)
{
    while(head != NULL)
    {
        cout << head -> data << " ";
        head = head -> next;
    }
}

int Count(node *head)
{
    int dem = 0;
    while(head != NULL)
    {
        dem++;
        head = head -> next;
    }
    return dem;
}

void pushFront(node *&head, int x)
{
    node *newNode = makenode(x);
    newNode -> next = head;
    head = newNode;
}

void pushBack(node *&head, int x)
{
    node *newNode = makenode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void sx(node *&head)
{
    for(node *i = head; i != NULL; i = i -> next)
    {
        for(node *j = i -> next; j != NULL; j = j -> next)
        {
            if(i -> data < j -> data)
            {
                int tmp = i -> data;
                i -> data = j -> data;
                j -> data = tmp;
            }
        }
    }
}

int main()
{
    node *head = NULL;
    int a[] = {1, 2 ,5 ,3 ,4 ,6 , 9, 7, 8, 10};
    for(int i = 0; i < 10; i++)
        pushBack(head, a[i]);
    sx(head);
    duyet(head);
    return 0;
}
