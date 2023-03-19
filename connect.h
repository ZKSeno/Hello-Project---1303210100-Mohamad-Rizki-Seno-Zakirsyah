#ifndef CONNECT_H_INCLUDED
#define CONNECT_H_INCLUDED

#include "parent.h"
#include "child.h"

void delete_kelas(list_P &L, adr_P &P);
void delete_dataMhs(list_P &Lp, list_C &L);
void input_Ch(list_C &L, list_P &Lp);
void data_kelas(list_P &L, adr_P P);
void data_Mhs(list_C &L, list_P Lp);
bool isFull_sks(list_C L);

#endif // CONNECT_H_INCLUDED
