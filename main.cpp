#include <iostream>

#include "list_child.h"
#include "list_parent.h"
#include "relasi.h"

using namespace std;


int selectMenu_1303210100();
void introduction();

int main() {
    List_parent LP;
    List_child LC;
    address_child C;
    address_parent P;

    createList_P(LP);
    createList_C(LC);

    string nama, kode, nama_prodi, fakultas;
    int noinduk, n, i;
    infotype_child data_prodi;
    infotype_parent data_dosen;
    char menu_confirm;
    char invalid;
    address_parent p;
    address_child c;

    introduction();

    int pilihan = selectMenu_1303210100();

    while (pilihan != 0) {
        switch(pilihan) {
        case 1:
            cout<<"Masukkan jumlah data dosen yang akan ditambahkan: ";
            cin>> n ;
            for (i = 1; i <= n; i++) {
                cout << endl;
                cout << "Data ke-" << i << endl;
                cout << "=================" << endl;
                cout << "Nama Dosen: ";
                cin >> data_dosen.nama;
                cout << "Kode Dosen: ";
                cin >> data_dosen.kode;
                cout << "Nomor Induk Dosen: ";
                cin >> data_dosen.noinduk;
                cout << endl;
                p = alokasi_P(data_dosen);
                insertFirst_P(LP, p);
            }
            cout<<endl;
            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        case 2:
            printInfo_P(LP);
            cout<<endl;
            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        case 3:
            cout<<"Masukkan jumlah data prodi yang akan ditambahkan: ";
            cin >> n ;
            for (i = 1; i <= n; i++) {
                cout << endl;
                cout << "Data ke-" << i << endl;
                cout << "=================" << endl;
                cout << "Prodi: ";
                cin >> data_prodi.nama_prodi;
                cout << "Fakultas: ";
                cin >> data_prodi.fakultas;
                cout << "=================" << endl;
                cout << endl;
                c = alokasi_C(data_prodi);
                insertFirst_C(LC, c);
            }
            cout<<endl;
            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        case 4:
            printInfo_C(LC);
            cout<<endl;
            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        case 5:
            int gabung;
            cout << "Masukkan jumlah aksi pencocokan data yang akan dilakukan: ";
            cin >> gabung;
            i = 0;
            while (i < gabung) {
                cout<<endl;
                cout << "Masukkan kode dosen yang ingin dicocokan: ";
                cin >> kode;
                cout << endl;
                cout << "Masukkan prodi yang ingin dicocokan dengan data dosen: ";
                cin >> nama_prodi;
                cout << endl;
                P = findElm_P(LP, kode);
                C = findElm_C(LC, nama_prodi);
                connect(P, C);
                i++;
            }

            cout << "Menampilkan data prodi yang telah dicocokan dengan data dosen" << endl;
            printRelasi(LP, LC);

            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        case 6:
            countChild(LP, LC);
            cout<<endl;
            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        case 7:
            searchChild(LP, LC);
            cout<<endl;
            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        case 8:
            deleteChild(LP, LC);
            cout << "Menampilkan data yang diperbaharui: "<<endl;
            printRelasi(LP, LC);
            cout<<endl;
            cout<<"Kembali ke menu utama? (Y/N): ";
            cin>>menu_confirm;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            } else {
                invalid = menu_confirm;
                while ((invalid != 'Y') && (invalid != 'N')) {
                cout<<"Pilihan yang dimasukkan tidak valid!"<<endl;
                cout<<"Kembali ke menu utama? (Y/N): ";
                cin>>invalid;
            }
            menu_confirm = invalid;
            if (menu_confirm == 'Y') {
                pilihan = selectMenu_1303210100();
                break;
            } else if (menu_confirm == 'N') {
                pilihan = 0;
                break;
            }
        }
        default:
            cout<<"Masukkan anda tidak valid!"<<endl;
            cout<<endl;
            cout<<"Menampilkan kembali Menu"<<endl;
            pilihan = selectMenu_1303210100();
            break;
        }
    }

    cout<<endl;
    cout<<"ANDA TELAH KELUAR DARI PROGRAM"<<endl;
    return 0;
}


int selectMenu_1303210100(){
    cout << endl;
    cout << "======= MENU =======" <<endl;
    cout << "[1] Menambahkan data dosen (parent)"<< endl;
    cout << "[2] Menampilkan data dosen (parent)" << endl;
    cout << "[3] Menambahkan data prodi (child)" << endl;
    cout << "[4] Menampilkan data prodi (child)" << endl;
    cout << "[5] Menghubungkan data dosen (parent) dengan data prodi (child)"<<endl;
    cout << "[6] Menghitung jumlah prodi (child) per dosen (parent)"<<endl;
    cout << "[7] Mencari data prodi dan menampilkan dosen yang mengajar" << endl;
    cout << "[8] Menghapus data prodi pada data dosen tertentu" << endl;
    cout << "[0] Exit"<<endl;
    int input = 0;
    cout << endl;
    cout << "Masukkan menu: ";
    cin >> input;
    return input;
}

void introduction() {
    cout << "Tugas Besar MK Struktur Data | MLL 1-N"<<endl;
    cout << "Topik: Prodi (child) Memiliki Dosen (parent)" << endl;
    cout << endl;
    cout << "============================"<<endl;
    cout << "     ANGGOTA KELOMPOK      " << endl;
    cout << "     ----------------      " << endl;
    cout << "Mohamad Rizki Seno Zakirsyah"<< endl;
    cout << "        1303210100         "<<endl;
    cout << "     ----------------      "<<endl;
    cout <<"    Rifki Pratama Khoir    "<<endl;
    cout <<"        1303190001         "<<endl;
    cout <<"============================"<<endl;

}
