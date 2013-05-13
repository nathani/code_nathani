/*
   Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: 
date: Sat May 11 03:22:32 IST 2013
 */
#include<iostream>
#include "list.h"
#include<stdlib.h>
using namespace std;
struct Node {
    int Element;
    struct Node* next;
};
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position; 
//int main()
//{
int IsEmpty(List L)
{
    return L->next == NULL;
}
int IsLast(Position P,List L)
{
    return P->next == NULL;
}
    template <class T>
Position Find(T x,List L)
{
    Position P;
    P = L->next;
    while(P != NULL && P->Element != x)
        P = P->next;
    return P;
}
void PrintList(List L)
{
    Position P;
    P = L->next;
    while(P!= NULL)
    {
        cout << P->Element;
        P = P->next;
    }
}
/* faad delete */
    template <class T>
void Delete(T x,List L)
{
    Position P, temp;
    if(L->next->Element==x)
    {
        P = L->next->next;
        temp = L->next;
        L->next = P;
        free(temp);
    }
    else
    {
        P = L->next;
        while(P != NULL && P->Element !=x)
        {
            temp = P;
            P = P->next;
        }
        temp->next = P->next;
        free(P);
    }
}
    template <class T>
Position FindPrevious(T x,List L)
{
    Position P;
    P = L;
    while( P->next !=NULL && P->next->Element != x)
        P = P->next;
    return P;
}
    template <class T>
void Insert(T x,List L,Position P)
{
    Position temp;
    temp = (struct Node*)malloc( sizeof( struct Node));
    if(temp == NULL)
    {
        cout << "out of space baby" << "\n";
        exit(1);
    }
    temp->Element = x;
    temp->next = P->next;
    P->next = temp;

}
int main()
{
    List L = NULL;
    L = (struct Node* )malloc(sizeof(struct Node));
    L->Element = 0;
    L->next = NULL;
    cout  << IsEmpty(L);
    //P = malloc( sizeof(struct Node));
    Position P = L;
    Insert<int>(1,L,P);
    Insert<int>(2,L,P);
    PrintList(L);
    return 0;
} 
//return 0;
//}

