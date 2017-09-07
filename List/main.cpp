#include <iostream>

#include<cstring>
#include <assert.h>
using namespace std;

struct ListNode
{
    int m_key;
    ListNode* next;
};


void createList(ListNode* &pHead)
{
    pHead = new ListNode;
    pHead->m_key= 0;
    pHead->next = NULL;
    ListNode* p = pHead;
    for(int i=1; i<10; i++)
    {
        ListNode* pNewNode = new ListNode;
        pNewNode->m_key = i;
        pNewNode->next = NULL;
        p->next = pNewNode;
        p = pNewNode;
    }
}

void destoryList(ListNode* pHead)
{
    assert(pHead!=NULL);
    ListNode* pNext = pHead->next;
    while(pNext != NULL)
    {
        delete pHead;
        pHead = pNext;
        pNext = pHead->next;
    }
    delete pHead;
    pHead = NULL;
    return;
}


int main()
{
    ListNode* head = NULL;
    createList(head);


    destoryList(head);
}