#include "relasi.h"

void connect(address_parent P, address_child &C) {
    if(P != NULL && C != NULL) {
        parent(C) = P;
    }
}

void disconnect(address_child &C){
    if(C != NULL){
        parent(C) = NULL;
    }
}

void printRelasi(List_parent LP, List_child LC){
    address_parent P;
    address_child C;

    P = first(LP);
    if (first(LP) != NULL) {
        do {
        cout << "Dosen "<<info(P).nama<<" mengajar di Prodi: "<<endl;
        cout << "============================"<< endl;
        C = first(LC);
        while(C != NULL){
            if(parent(C) == P){
                cout << info(C).nama_prodi << endl;
            }
            C = next(C);
        }
        cout << "============================"<<endl;
        cout << endl;
        P = next(P);
        } while (P != first(LP));
    }
    cout << endl;
}

void countChild(List_parent LP, List_child LC){
    address_parent P;
    address_child C;

    P = first(LP);

    if (first(LP) != NULL) {
        int i_c = 0;
        do {
        cout << "Dosen "<<info(P).nama<<" mengajar di: ";
        C = first(LC);
        while(C != NULL){
            if(parent(C) == P) {
                i_c++;
            } else {
                i_c;
            }
            C = next(C);
        }
        cout << i_c << " prodi" << endl;
        cout << endl;
        P = next(P);
        } while (P != first(LP));
    }
    cout << endl;
}

void searchChild(List_parent LP, List_child LC){
    address_parent P;
    address_child C;

    string nama_prodi;
    cout << "Masukkan data prodi yang ingin dicari: " ;
    cin >> nama_prodi;
    cout << endl;

    C = findElm_C(LC, nama_prodi);
    cout << "Prodi "<< info(C).nama_prodi << " meiliki dosen "<< info(parent(C)).nama << endl;
    cout << endl;
}

void deleteChild(List_parent LP, List_child LC) {
    string kode;
    cout << endl;
    cout << "Masukkan kode dosen yang ingin data prodinya dihapus: ";
    cin >> kode;
    cout << endl;

    address_parent P = findElm_P(LP, kode);
    address_child C = first(LC);

    C = first(LC);
    while(C != NULL){
        if(parent(C) == P){
            disconnect(C);
        }
        C = next(C);
    }
}

