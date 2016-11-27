#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;




struct ruangan
{
    string kode;
    string nomorR;
    string namaR;
    string fasilitas;
    string gedung;
    string aktivitas;
};
struct tutor
{
    string id;
    string nomorT;
    string namaT;
    string fakultas;
    string jurusan;
    string sex;
};

typedef ruangan infotypeinduk;
typedef tutor infotypeanak;
typedef struct elmlistInduk* adrInduk; //induk doubly linked list
typedef struct elmlistAnak* adrAnak; //anak singly linked list



struct elmlistAnak
{
    infotypeanak info;
    adrAnak next;
} ;

struct listAnak
{
    adrAnak first;
};

struct elmlistInduk
{
    infotypeinduk info;
    listAnak listAnakIsi;
    adrInduk next;
    adrInduk prev;
};

struct listInduk
{
    adrInduk first;
    adrInduk last;
};


bool isEmptyInduk(listInduk l);
bool isEmptyAnak(listAnak l);

void createListInduk(listInduk &l);
void createListAnak(listAnak &l);

adrInduk alokasiInduk(infotypeinduk);
adrAnak alokasiAnak(infotypeanak);

void dealokasiInduk(adrInduk p);
void dealokasiAnak(adrAnak p);

adrInduk findElmInduk(listInduk l, infotypeinduk x);
bool fFindElmInduk(listInduk l, adrInduk p);
adrInduk findBeforeInduk(listInduk l, adrInduk prec);

adrAnak findElmAnak(listAnak listAnak, adrAnak p);
bool fFindElmAnak(listAnak listAnak, adrAnak p);
adrAnak findBeforeAnak(listAnak listAnak, infotypeanak x, adrAnak prec);

void insertFirstInduk(listInduk &l, adrInduk p);
void insertAfterInduk(listInduk &l, adrInduk p, adrInduk prec);
void insertLastInduk(listInduk &l, adrInduk p);

void insertFirstAnak(listAnak &l, adrAnak p);
void insertAfterAnak(listAnak &l, adrAnak p, adrAnak prec);
void insertLastAnak(listAnak &l, adrAnak p);

void deleteFirstInduk(listInduk &l, adrInduk &p);
void deleteAfterInduk(listInduk &l, adrInduk &p, adrInduk prec);
void deleteLastInduk(listInduk &l, adrInduk &p);

void deleteFirstAnak(listAnak &l, adrAnak &p);
void deleteAfterAnak(listAnak &l, adrAnak &p, adrAnak prec);
void deleteLastAnak(listAnak &l, adrAnak &p);

void printInfoInduk(listInduk l);
void printInfoAnak(listInduk l);

int nblistInduk(listInduk l);
int nblistAnak(listAnak l);

void delAll(listInduk &l);

void menus(listInduk &l);
void menuexit();

void menuinsert(listInduk &l);
void menuinsertchoicestutor(listInduk &l);
void menuinsertchoicesruangan(listInduk &l);

void menudelete(listInduk &l);
void menudeletechoicestutor(listInduk &l);
void menudeletechoicesruangan(listInduk &l);

void menufind();
void menufindchoicestutor();
void menufindchoicesruangan();

#endif // MENU_H_INCLUDED
