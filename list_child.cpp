#include "list_child.h"

void createList_C(List_child &Lc) {
    first(Lc) = NULL;
    last(Lc) = NULL;
}

address_child alokasi_C(infotype_child x) {
    address_child C = new elmlist_child;
    info(C) = x;
    next(C) = NULL;
    prev(C) = NULL;
    return C;
}

void insertFirst_C(List_child &Lc, address_child C) {
    if(first(Lc) == NULL) {
        last(Lc) = C;
        first(Lc) = C;
    } else {
        next(C) = first(Lc);
        prev(first(Lc)) = C;
        first(Lc) = C;
    }
}

void printInfo_C(List_child Lc) {
    address_child C = first(Lc);
    int i = 0;
    while(C != NULL) {
        cout << endl;
        cout << "Data Prodi ke-" << i + 1 << endl;
        cout << "===================" << endl;
        cout<<"Prodi: "<< info(C).nama_prodi << endl;
        cout << "Fakultas: "<< info(C).fakultas << endl;
        cout << "====================" << endl;
        C = next(C);
        i++;
    }
}


address_child findElm_C(List_child Lc, string nama_prodi) {
    address_child C = first(Lc);
    while(C != NULL) {
        if(info(C).nama_prodi == nama_prodi) {
            return C;
        }
        C = next(C);
    }
    return NULL;
}


void insertAfter_C(address_child &Prec, address_child C) {
    prev(next(Prec)) = C;
    next(C) = next(Prec);
    prev(C) = Prec;
    next(Prec) = C;
}

void insertLast_C(List_child &Lc, address_child C){
    if(first(Lc)==NULL){
        first(Lc) = C;
        last(Lc) = C;
        next(C) = C;
        prev(C) = C;
    }else{
        next(C) = first(Lc);
        prev(first(Lc)) = C;
        next(last(Lc)) = C;
        prev(C) = last(Lc);
        last(Lc) = C;
    }
}

void deleteFirst(List_child &Lc, address_child &C){
     if(first(Lc) == NULL) {
        cout<<"data tidak ada"<<endl;
    } else {
        next(C) = first(Lc);
        prev(first(Lc)) = NULL;
        next(C) = NULL;
    }
}

void deleteLast(List_child &Lc, address_child &C){
    if(last(Lc) == NULL){
        cout<<"data tidak ada"<<endl;
    }else if(first(Lc) == last(Lc)){
        C = first(Lc);
        first(Lc) = NULL;
        last(Lc) = NULL;
    }else{
        C = last(Lc);
        last(Lc) = prev(C);
        next(last(Lc)) = NULL;
        prev(C) = NULL;
    }
}

void deleteAfter(address_child Prec, address_child &C){
    C = next(Prec);
    prev(next(C)) = prev(C);
    next(Prec) = next(C);
    next(C) = NULL;
}
