#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *pLeft;
    struct node *pRight;
};

typedef struct node Node;
typedef Node* Tree;

void khoitao(Tree &t)
{
    t = NULL;
}

void themnode(Tree &t, int x)
{
    if(t == NULL)
    {
        Node *p = new Node;
        p -> data = x;
        p -> pLeft = NULL;
        p -> pRight = NULL;
        t = p;
    }
    else
    {
        if(t -> data > x)
        {
            themnode(t -> pLeft, x);
        }
        else if(t -> data < x)
        {
            themnode(t -> pRight, x);
        }
    }
}

void duyetNLR(Tree t)
{
    if(t != NULL)
    {
        cout << t -> data << " ";
        duyetNLR(t -> pLeft);
        duyetNLR(t -> pRight);
    }
}

void Menu(Tree t)
{
    while(1)
    {
        cout << "------------------------------------\n";
		cout << "1. Them vao\n";
		cout << "2. Duyet\n";
		cout << "0. Thoat !\n";
		cout << "------------------------------------\n";
		cout << "Nhap lua chon :";
		int lc;
		cin >> lc;
		if(lc == 1)
        {
			int x;
			cout << "Nhap x :";
			cin >> x;
			themnode(t, x);
		}
		else if(lc == 2)
        {
			duyetNLR(t);
			cout << "\n";
		}
		else
        {
			break;
		}
    }
}

int main()
{
    Tree t;
    khoitao(t);
    Menu(t);
    return 0;
}
