/*
======================
List and its primitive
======================



*/

#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

node* new_list()
{
    node* head = NULL;
    return head;
}

bool is_list_empty(node* list)
{
    return list == NULL;
}

int main()
{
    node* list1 = new_list();
    cout << 
}