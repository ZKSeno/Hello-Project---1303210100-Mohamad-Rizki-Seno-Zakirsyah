#include "list_parent.h"

void createList_P(List_parent &Lp) {
    first(Lp) = NULL;
}

address_parent alokasi_P(infotype_parent x) {
    address_parent P;
    P = new elmlist_parent;
    info(P) = x;
    next(P) = P;
    return P;
}

void insertFirst_P(List_parent &Lp, address_parent P) {
    address_parent Q = first(Lp);
    if(first(Lp) == NULL) {
        first(Lp) = P;
        next(P) = first(Lp);
    } else {
        while(next(Q) != first(Lp)) {
            Q = next(Q);
        }
        next(P) = first(Lp);
        next(Q) = P;
        first(Lp) = P;
    }
}

void deleteFirst_P(List_parent &Lp, address_parent &P){
    if(first(Lp)==NULL){
        cout<<"Tidak ada data dosen!"<<endl;
    } else if(next(first(Lp))==NULL){
        P = first(Lp);
        first(Lp) = NULL;
    }else{
        P = first(Lp);
        first(Lp) = NULL;
        next(P) = P;
    }
}

void deleteLast_P(List_parent &Lp, address_parent P) {
    address_parent Q = first(Lp);
    P = first(Lp);
    if (first(Lp) == NULL) {
        cout<<"Tidak ada data dosen!"<<endl;
    } else {
        while (next(P) != first(Lp)) {
            Q = P;
            P = next(P);
        }
        next(Q) = first(Lp);
        next(P) = NULL;
    }
}

void deleteAfter_P(List_parent &Lp, address_parent Prec, address_parent &P){
     P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void printInfo_P(List_parent Lp) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    address_parent P = first(Lp);
    int i = 0;
    if(first(Lp)!=NULL) {
        do {
            cout << endl;
            cout << "Data Dosen ke-" << i + 1 << endl;
            cout << "===================" << endl;
            cout<<"Nama Dosen: "<< info(P).nama << endl;
            cout << "Kode Dosen: "<< info(P).kode << endl;
            cout << "Nomor Induk Dosen: "<<info(P).noinduk << endl;
            cout << "====================" << endl;
            P = next(P);
            i++;
        } while((P)!=first(Lp));
    }
}

address_parent findElm_P(List_parent Lp, string kode) {
    address_parent P = first(Lp);
    do {
        if(info(P).kode == kode) {
            return P;
        }
        P = next(P);
    } while(P != first(Lp));
    return NULL;
}


