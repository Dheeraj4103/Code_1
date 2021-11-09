#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    // cout << temp << "\n";
    cout << "\n";
}

void search(node *head, int k)
{
    while (head != NULL)
    {
        if (head->data == k)
        {
            cout << "Element found at " << head << "\n";
        }
        head = head->next;
    }
}
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertbefore(node *&head, int el, int val)
{
    node *n = new node(val);
    node *temp = head;
    node *prev = temp;
    while (temp->data != el)
    {
        prev = temp;
        temp = temp->next;
    }

    n->next = prev->next;
    prev->next = n;
}
void insertafter(node *&head, int el, int val)
{
    node *n = new node(val);
    node *temp = head;

    while (temp->data != el)
    {

        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;
}

void insertatlast(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    node *prev = temp;
    while (temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    n->next = temp;
    prev->next = n;
}

void deletion(node *&head, int val)
{
    node *temp = head;
    node *prev = temp;
    node *an = temp;
    while (temp->data != val)
    {
        prev = temp;
        temp = temp->next;
        an = temp->next;
    }
    if (temp == prev)
    {
        head = temp->next;
    }
    else
    {

        prev->next = temp->next;
    }
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head, x);
    }
    display(head);
    cout << "Enter element you want to add at front:- "
         << "\n";
    int el;
    cin >> el;
    insertathead(head, el);
    display(head);
    cout << "Enter element you want to insert:- "
         << "\n";
    int val, bef;
    cin >> val;
    cout << "Before which element you want to insert it:- ";
    cin >> bef;
    insertbefore(head, bef, val);
    display(head);
    cout << "Enter element you want to insert:- "
         << "\n";
    int v1, b1;
    cin >> v1;
    cout << "after which element you want to it:- ";
    cin >> b1;
    insertafter(head, v1, b1);
    display(head);
    cout << "Enter element you want add at last:- "
         << "\n";
    int l;
    cin >> l;
    insertatlast(head, l);
    display(head);
    cout << "Which element you want to delete:- "
         << "\n";
    int d;
    cin >> d;
    deletion(head, d);
    display(head);
    return 0;
}