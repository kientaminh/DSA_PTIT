#include <bits/stdc++.h>

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

void Insert(node *&head, int x, int k)
{
    if(k == 1)
    {
        pushFront(head, x);
    }
    else
    {
        node *temp = head;
        for(int i = 1; i <= k - 2; i++)
            temp = temp -> next;
        node *newNode = makenode(x);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}

void popFront(node *&head)
{
    if(head == NULL)
        return;
    node *temp = head;
    head = head -> next;
    delete temp;
}

void popBack(node *&head)
{
    if(head == NULL) return;
    node *temp = head;
    if(temp -> next == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }
    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    node *last = temp -> next;
    temp -> next = NULL;
    delete last;
}

void irase(node *&head, int k)
{
    if(head == NULL) return;
    if(k == 1)
    {
        popFront(head);
        return;
    }
    node *temp = head;
    for(int i = 1; i <= k - 2; i++)
        temp = temp -> next;
    // temp: k - 1
    node *era = temp -> next;   //k
    temp -> next = era -> next;
    delete era;
}

int main() {
//    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    node *head = NULL;
//    for(int i = 1; i <= 2; i++)
//    {
//        pushFront(head, i);
//    }
    while(1)
    {
        cout << "------------------------------------\n";
		cout << "1. Them vao dau\n";
		cout << "2. Them vao cuoi\n";
		cout << "3. Them vao giua\n";
		cout << "4. Xoa dau\n";
		cout << "5. Xoa cuoi\n";
		cout << "6. Xoa node o giua DSLK\n";
		cout << "7. Duyet\n";
		cout << "0. Thoat !\n";
		cout << "------------------------------------\n";
		cout << "Nhap lua chon :";
		int lc;
		cin >> lc;
		if(lc == 1)
        {
			int x; cout << "Nhap x :"; cin >> x;
			pushFront(head, x);
		}
		else if(lc == 2)
        {
			int x; cout << "Nhap x :"; cin >> x;
			pushBack(head, x);
		}
		else if(lc == 3)
		{
			int x; cout << "Nhap x :"; cin >> x;
			int k; cout << "Nhap k :"; cin >> k;
			Insert(head, x, k);
		}
		else if(lc == 4)
        {
			popFront(head);
		}
		else if(lc == 5)
		{
			popBack(head);
		}
		else if(lc == 6){
			int k;
			cout << "Nhap vi tri can xoa :";
			cin >> k;
			irase(head, k);
		}
		else if(lc == 7){
			duyet(head);
			cout << endl;
		}
		else
        {
			break;
		}
    }

    return 0;
}
