#ifndef LIST_CHILD_H_INCLUDED
#define LIST_CHILD_H_INCLUDED

#include <iostream>
using namespace std;

#include "list_parent.h"

// List Child Menggunakan Double Linked List

#define next(C) C->next
#define prev(C) C->prev
#define first(Lc) Lc.first
#define last(Lc) Lc.last
#define info(C) C->info
#define parent(P) P->parent

struct prodi {
    string nama_prodi, fakultas;
};

typedef prodi infotype_child;
typedef struct elmlist_child *address_child;

struct elmlist_child{
    infotype_child info;
    address_child next;
    address_child prev;
    address_parent parent;
};

struct List_child{
    address_child first;
    address_child last;
};

void createList_C(List_child &Lc);
void insertFirst_C(List_child &Lc, address_child C);
void insertLast_C(List_child &Lc, address_child C);
void insertAfter_C(address_child Prec, address_child C);
void deleteFirst(List_child &Lc, address_child &C);
void deleteLast(List_child &Lc, address_child &C);
void deleteAfter(address_child Prec, address_child &C);

address_child alokasi_C(infotype_child x);
address_child findElm_C(List_child L, string nama_prodi);
void printInfo_C(List_child L);

#endif // LIST_CHILD_H_INCLUDED
