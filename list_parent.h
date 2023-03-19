#ifndef LIST_PARENT_H_INCLUDED
#define LIST_PARENT_H_INCLUDED

#include <iostream>
using namespace std;

// List Parent menggunakan Single Circular Linked List

#define first(Lp) Lp.first
#define next(P) P->next
#define info(P) P->info

struct dosen {
    string nama;
    int noinduk;
    string kode;
};

typedef dosen infotype_parent;

typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    address_parent next;
};

struct List_parent {
    address_parent first;
};

void createList_P(List_parent &Lp);
void insertFirst_P(List_parent &Lp, address_parent P);
void insertAfter(List_parent &Lp, address_parent Prec, address_parent P);
void insertLast(List_parent &Lp, address_parent P);
void deleteFirst_P(List_parent &Lp, address_parent &P);
void deleteLast_P(List_parent &Lp, address_parent &P);
void deleteAfter_P(List_parent &Lp, address_parent Prec, address_parent &P);

address_parent alokasi_P(infotype_parent x);
address_parent dealokasi_P(infotype_parent x);
address_parent findElm_P(List_parent L, string kode);
void printInfo_P(List_parent L);


#endif // LIST_PARENT_H_INCLUDED
