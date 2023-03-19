#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include "list_parent.h"
#include "list_child.h"

void connect(address_parent P, address_child &C);
void disconnect(address_child &C);
void printRelasi(List_parent LP, List_child LC);
void countChild(List_parent LP, List_child LC);
void searchChild(List_parent LP, List_child LC);
void deleteChild(List_parent LP, List_child LC);

#endif // RELASI_H_INCLUDED
