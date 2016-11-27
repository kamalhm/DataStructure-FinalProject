#include "menu.h"
void menus(listInduk &l)
{
    int menu;
    string opsi;
    system("cls");
    cout << "========================" << endl;
    cout << "|----------------------|" << endl;
    cout << "|   EEEE      EEEEEEEE |" << endl;
    cout << "| EE    EE    EE       |" << endl;
    cout << "| EE          EE       |" << endl;
    cout << "|   EEEE      EEEEEEEE |" << endl;
    cout << "|       EE    EE       |" << endl;
    cout << "| EE    EE    EE       |" << endl;
    cout << "|   EEEE      EEEEEEEE |" << endl;
    cout << "|----------==----------|" << endl;
    cout << "|  System  ||  ESaP    |" << endl;
    cout << " ==========--========== " << endl;
    cout << "&      MENU UTAMA      &" << endl;
    cout << "&======================&" << endl;
    cout << "&  1.  Insert Data     &" << endl;
    cout << "&  2.  Delete Data     &" << endl;
    cout << "&  3.  Find Data       &" << endl;
    cout << "&  4.  View Data       &" << endl;
    cout << "&  5.  Laporan         &" << endl;
    cout << "&  6.  Sort(ID)        &" << endl;
    cout << "&======================&" << endl;
    cout << "&  0.  Exit            &" << endl;
    cout << "&======================&" << endl;
    cout << "Your Choice : ";
    cin>>menu;
    switch (menu)
    {
    case 1:
        menuinsert(l);
        menus(l);
        break;

    case 2:
        menudelete(l);
        menus(l);
        break;

    case 3:
        menufind();
        menus(l);
        break;
    case 4:
        printInfoInduk(l);
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menus(l);
            break;
        }
        break;

    case 5:
        printInfoAnak(l);
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menus(l);
            break;
        }
        break;

    case 6:
        //sortid();
        menus(l);
        break;

    case 0:
        menuexit();
        break;

    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        menus(l);
        break;
    }
}







void menuinsert(listInduk &l)
{
    int menu;
    string opsi;
    system("cls");
    cout << "========================" <<endl;
    cout << "&     MENU  INSERT     &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Insert Ruangan  &" <<endl;
    cout << "&  2.  Insert Tutor    &" <<endl;
    cout << "&                      &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
        case 2:
            menuinsertchoicestutor(l);
            break;

        case 1:
            menuinsertchoicesruangan(l);
            break;

        case 9:
            break;

        default :
            system("cls");
            cout<<"Yang diinputkan belum cocok"<<endl;
            cout<<"Coba lagi"<<endl;
            cout<<"Type in any key to continue"<<endl;
            cin>>menu;
            if(menu != NULL)
            {
                menuinsert(l);
            }
            break;
    }
}

void menuinsertchoicestutor(listInduk &l)
{
    int menu;
    string opsi;
    system("cls");
    cout << "========================" <<endl;
    cout << "&    PILIHAN INSERT    &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Insert First    &" <<endl;
    cout << "&  2.  Insert Last     &" <<endl;
    cout << "&  3.  Insert After    &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        while(opsi != "n")
        {
            infotypeinduk x;
            infotypeanak y;
            adrInduk p;
            adrAnak q;
            cout<<"Tugaskan di ruangan  (ID): "<<endl; cin>>x.kode;
            p = findElmInduk(l, x);

            if(p == NULL)
            {
                cout<<"Tidak Ada Ruangan semacam itu"<<endl<<endl;
            }
            else
            {
                if(p->listAnakIsi.first  == NULL)
                {
                    listAnak a;
                    cout << "Masukkan data tutor:"<<endl;
                    cout << "ID Tutor = "; cin >> y.fakultas; cout << endl;
                    cout << "No. Tutor = "; cin >> y.jurusan; cout << endl;
                    cout << "Nama = "; cin >> y.id; cout << endl;
                    cout << "Fakultas = "; cin >> y.namaT; cout << endl;
                    cout << "Jurusan = "; cin >> y.nomorT; cout << endl;
                    cout << "Jenis kelamin = "; cin >> y.sex; cout << endl<<endl;
                    q = alokasiAnak(y);
                    createListAnak(a);
                    insertFirstAnak(a,q);
                }
                else
                {
                    listAnak a;
                    insertFirstAnak(a,q);
                }
            }
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menuinsert(l);
                break;
            }
            else if(opsi == "n")
                break;
        }
        break;
    case 2:
        //inserttutorlast
        while(opsi != "n")
        {
            //inserttutorlast;
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menuinsert(l);
                break;
            }
            else if(opsi == "n")
                break;
        }
        break;

    case 3:
        while(opsi != "n")
        {
            //inserttutorafter;
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menuinsert(l);
                break;
            }
            else if(opsi == "n")
                break;
        }
        break;
    case 9:
        break;
    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menuinsertchoicestutor(l);
        }
        break;
    }

}

void menuinsertchoicesruangan(listInduk &l)
{
    string opsi;
    int menu;
    system("cls");
    cout << "========================" <<endl;
    cout << "&    PILIHAN INSERT    &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Insert First    &" <<endl;
    cout << "&  2.  Insert Last     &" <<endl;
    cout << "&  3.  Insert After    &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        while(opsi != "n")
        {
            infotypeinduk q;
            adrInduk p;
            cout<<"Datanya :"<<endl;
            cout << "Kode Ruangan = " << endl; cin>> q.kode ;
            cout << "Nomor Ruangan = " << endl; cin>> q.nomorR ;
            cout << "Nama Ruangan = " << endl; cin>> q.namaR;
            cout << "Fasilitas Ruangan = "<< endl ; cin>> q.fasilitas;
            cout << "Lokasi Ruangan = " << endl ; cin>> q.gedung;
            cout << "Aktivitas Ruangan = " << endl; cin>> q.aktivitas;
            p = alokasiInduk(q);
            insertFirstInduk(l,p);
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menuinsert(l);
                break;
            }
            else if(opsi == "n")
                break;
        }
        break;

    case 2:
        while(opsi != "n")
        {
            infotypeinduk q;
            adrInduk p;
            cout<<"Datanya :"<<endl;
            cout << "Kode Ruangan = " << endl; cin>> q.kode ;
            cout << "Nomor Ruangan = " << endl; cin>> q.nomorR ;
            cout << "Nama Ruangan = " << endl; cin>> q.namaR;
            cout << "Fasilitas Ruangan = "<< endl ; cin>> q.fasilitas;
            cout << "Lokasi Ruangan = " << endl ; cin>> q.gedung;
            cout << "Aktivitas Ruangan = " << endl; cin>> q.aktivitas;
            p = alokasiInduk(q);
            insertLastInduk(l,p);
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menuinsert(l);
                break;
            }
            else if(opsi == "n")
                break;
        }
        break;

    case 3:
        while(opsi != "n")
        {
            infotypeinduk x;
            infotypeinduk q;
            adrInduk p;
            cout << "Datanya :"<<endl;
            cout << "Kode Ruangan = " << endl; cin>> q.kode ;
            cout << "Nomor Ruangan = " << endl; cin>> q.nomorR ;
            cout << "Nama Ruangan = " << endl; cin>> q.namaR;
            cout << "Fasilitas Ruangan = "<< endl ; cin>> q.fasilitas;
            cout << "Lokasi Ruangan = " << endl ; cin>> q.gedung;
            cout << "Aktivitas Ruangan = " << endl<<endl; cin>> q.aktivitas;
            p = alokasiInduk(q);
            cout << "Setelah Ruangan ke : "<<endl; cin>> x.kode;
            adrInduk r = findElmInduk(l,x);
            insertAfterInduk(l,p,r);
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menuinsert(l);
                break;
            }
            else if(opsi == "n")
                break;
        }
        break;

    case 9:
        break;

    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menuinsertchoicesruangan(l);
        }
        break;
    }

}




void menudelete(listInduk &l)
{
    int menu;
    string opsi;
    system("cls");
    cout << "========================" <<endl;
    cout << "&     MENU  DELETE     &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Delete Ruangan  &" <<endl;
    cout << "&  2.  Delete Tutor    &" <<endl;
    cout << "&                      &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        menudeletechoicesruangan(l);
        break;
    case 2:
        menudeletechoicestutor(l);
        break;
    case 9:
        break;
    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menudelete(l);
        }
        break;
    }

}

void menudeletechoicestutor(listInduk &l)
{
    int menu;
    system("cls");
    cout << "========================" <<endl;
    cout << "&    PILIHAN DELETE    &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Delete First    &" <<endl;
    cout << "&  2.  Delete Last     &" <<endl;
    cout << "&  3.  Delete After    &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        //deletetutorfirst
        break;
    case 2:
        //deletetutorlast
        break;
    case 3:
        //deletetutorafter
        break;
    case 9:
        break;
    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menudeletechoicestutor(l);
        }
        break;
    }
}

void menudeletechoicesruangan(listInduk &l)
{
    string opsi;
    int menu;
    system("cls");
    cout << "========================" <<endl;
    cout << "&    PILIHAN DELETE    &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Delete First    &" <<endl;
    cout << "&  2.  Delete Last     &" <<endl;
    cout << "&  3.  Delete After    &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        while(opsi != "n")
        {
            infotypeinduk x;
            infotypeinduk q;
            adrInduk p;
            deleteFirstInduk(l,p);
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menudelete(l);
                break;
            }
        }
        break;

    case 2:
        while(opsi != "n")
        {
            infotypeinduk x;
            infotypeinduk q;
            adrInduk p;
            deleteLastInduk(l,p);
            cout<<"Lanjutkan ( y/n ) ?"<<endl;
            cout<<" Your Choice :    ";cin>>opsi;
            if(opsi == "y")
            {
                menudelete(l);
                break;
            }
        }
        break;

    case 3:
        while(opsi != "n")
        {
        infotypeinduk p;
        adrInduk q,r;
        cout << "Data setelah yang ingin dihapus :"<<endl;
        cout << "Kode Ruangan = " << endl; cin>> p.kode ;
        q = findElmInduk(l,p);
        deleteAfterInduk(l,r,q);
        cout<<"Lanjutkan ( y/n ) ?"<<endl;
        cout<<" Your Choice :    ";cin>>opsi;
        if(opsi == "y")
        {
             menudelete(l);
             break;
        }
        else if(opsi == "n")
            break;
        }
        break;

    case 9:
        break;

    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menudeletechoicesruangan(l);
        }
        break;
    }
}




void menufind()
{
    int menu;
    system("cls");
    cout << "========================" <<endl;
    cout << "&      MENU  FIND      &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Find Ruangan    &" <<endl;
    cout << "&  2.  Find Tutor      &" <<endl;
    cout << "&                      &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        menufindchoicesruangan();
        break;
    case 2:
        menufindchoicestutor();
        break;
    case 9:
        break;
    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menufind();
        }
        break;
    }

}

void menufindchoicestutor()
{
    int menu;
    system("cls");
    cout << "========================" <<endl;
    cout << "&     PILIHAN FIND     &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Find & View     &" <<endl;
    cout << "&  2.  Find & Delete   &" <<endl;
    cout << "&  3.  Find & Edit     &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        //findandviewtutor
        break;
    case 2:
        //findanddeletetutor
        break;
    case 3:
        //findandedittutor
        break;
    case 9:
        break;
    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menufindchoicestutor();
        }
        break;
    }
}

void menufindchoicesruangan()
{
    int menu;
    system("cls");
    cout << "========================" <<endl;
    cout << "&     PILIHAN FIND     &" <<endl;
    cout << "&======================&" <<endl;
    cout << "&  1.  Find & View     &" <<endl;
    cout << "&  2.  Find & Delete   &" <<endl;
    cout << "&  3.  Find & Edit     &" <<endl;
    cout << "&______________________&" <<endl;
    cout << "&  9.  Kembali         &" <<endl;
    cout << "========================" <<endl;
    cout << "Your Choice : ";
    cin >> menu;
    switch(menu)
    {
    case 1:
        //findandviewruangan
        break;
    case 2:
        //findanddeleteruangan
        break;
    case 3:
        //findandeditruangan
        break;
    case 9:
        break;
    default :
        system("cls");
        cout<<"Yang diinputkan belum cocok"<<endl;
        cout<<"Coba lagi"<<endl;
        cout<<"Type in any key to continue"<<endl;
        cin>>menu;
        if(menu != NULL)
        {
            menufindchoicesruangan();
        }
        break;
    }
}


void menuexit()
{
    system("cls");
    cout<< "&======================&"<<endl;
    cout<< "&= = = = KELUAR = = = =&"<<endl;
    cout<< "&======================&"<<endl;
    cout<< "&----------------------&"<<endl;
    cout<< "&= = |Terima Kasih| = =&"<<endl;
    cout<< "&======================&"<<endl;
}


bool isEmptyInduk(listInduk l) //induk doublylinked
{
    if (l.first == NULL)
        return true;
    else
        return false;
}
bool isEmptyAnak(listAnak l)//anak singlylinked
{
    if(l.first == NULL)
        return true;
    else
        return false;
}
void createListInduk(listInduk &l)
{
    l.first = NULL;
    l.last = NULL;
}
void createListAnak(listAnak &l)
{
    l.first = NULL;
}
adrInduk alokasiInduk(infotypeinduk xI)
{
    adrInduk p = new elmlistInduk;
    p->info = xI;
    p->next = NULL;
    p->prev = NULL;
    return p;
}
adrAnak alokasiAnak(infotypeanak xA)
{
    adrAnak p = new elmlistAnak;
    p->info = xA;
    p->next = NULL;
    return p;

}
void dealokasiInduk(adrInduk p)
{
    delete p;
}
void dealokasiAnak(adrAnak p)
{
    delete p;
}
adrInduk findElmInduk(listInduk l, infotypeinduk x)
{
    adrInduk p = l.first;
    while(p != NULL)
    {
        if (p->info.kode == x.kode)
            return p;
        else
        {
            p = p->next;
        }
    }
}
adrAnak findElmAnak(listAnak l, adrAnak p)
{
    adrAnak q = l.first;
    while((q->info.id != p->info.id) && (q->next != NULL))
    {
        q=q->next;
        if(q->info.id == p->info.id)
            return q;
        else
            return NULL;
    }
}

void insertFirstInduk(listInduk &l, adrInduk p)//induk menggunakan doubly linked list
{
    if (l.first == NULL)
    {
        l.first = p;
        l.last = p;
    }
    else
    {
        p->next = l.first;
        l.first->prev = p;
        l.first = p;
    }
}
void insertAfterInduk(listInduk &l, adrInduk p, adrInduk prec)
{
    p->next = prec->next;
    p->prev = prec;
    prec->next = p;
    p->next->prev = p;
}
void insertLastInduk(listInduk &l, adrInduk p)
{
    if(l.first == NULL)
    {
        l.first = p;
        l.last = p;
    }
    else
    {
        p->prev = l.last;
        l.last->next = p;
        l.last = p;
        p->next = NULL;
    }
}
void insertFirstAnak(listAnak &l, adrAnak p)
{

    if(l.first == NULL)
        l.first = p;
    else
    {
        p->next = l.first;
        l.first = p;
    }
}
void insertAfterAnak(listAnak &l, adrAnak p, adrAnak prec)
{
    if(l.first != NULL)
    {
        p->next = prec->next;
        prec->next = p;
    }
}
void insertLastAnak(listAnak &l, adrAnak p)
{
    if(l.first == NULL)
    {
        l.first = p;
    }
    else
    {
        adrAnak p = l.first;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next = NULL;
    }
}
void deleteFirstInduk(listInduk &l, adrInduk &p)
{
    if(l.first == NULL)
    {
        cout << "List kosong." << endl;
    }
    else if(l.first == l.last)
    {
        adrInduk p = l.first;
        l.first = NULL;
        l.last = NULL;
        delete p;
    }
    else
    {
        adrInduk p = l.first;
        l.first = p->next;
        p->next = NULL;
        p->prev = NULL;
        delete p;
    }
}
void deleteAfterInduk(listInduk &l, adrInduk &p, adrInduk prec)
{
    p = prec->next;
    p->next->prev = p->prev;
    p->next = NULL;
    p->prev = NULL;
    delete p;
}
void deleteLastInduk(listInduk &l, adrInduk &p)
{
    if(l.first = l.last)
    {
        adrInduk p = l.first;
        l.first = NULL;
        l.last = NULL;
    }
    else
    {
        adrInduk p =l.last;
        l.last = p->prev;
        p->next = NULL;
        p->prev = NULL;
    }
    delete p;
}
void deleteFirstAnak(listAnak &l, adrAnak &p)
{
    if(l.first != NULL)
    {
        p = l.first;
        if(p->next == NULL)
        {
            l.first = NULL;
        }
        else
        {
            l.first = p->next;
            p->next = NULL;
        }
    }
}
void deleteAfterAnak(listAnak &l, adrAnak &p, adrAnak prec)
{
    if(l.first != NULL)
    {
        if(l.first->next == l.first)
        {
            p = l.first;
            l.first = NULL;
        }
    }
    else
    {
        p = prec->next;
        if(prec->next == l.first)
        {
            l.first = l.first;
        }
        prec->next = p->next;
    }
}

void deleteLastAnak(listAnak &l, adrAnak &p)
{
    if(l.first != NULL)
    {
        adrAnak q = l.first;
        if(q->next == NULL)
        {
            l.first = NULL;
        }
        else
        {
            while((q->next)->next != NULL)
            {
                q = q->next = NULL;
            }
            p = q->next;
            q->next = NULL;
        }
    }
}
void printInfoInduk(listInduk l)
{
    system("cls");
    if(l.first == NULL)
    {
        cout << "List kosong." << endl;
    }
    else
    {
        adrInduk q = l.first;
        cout << "Kode Ruangan \t|| Nomor Ruangan \t|| Nama Ruangan \t|| Fasilitas Ruangan \t|| Lokasi Ruangan \t|| Aktivitas Ruangan"<<endl;
        while(q != NULL)
        {
            cout <<q->info.kode <<"             \t|| "<<q->info.nomorR <<"            \t|| "<< q->info.namaR<< "             \t|| " << q->info.fasilitas <<"              \t|| " << q->info.gedung << "            \t|| "<< q->info.aktivitas <<endl;
            q = q->next;
        }
    }
}
void printInfoAnak(listInduk l)
{
    system("cls");
    if(l.first == NULL)
    {
        cout<<"List kosong."<<endl<<endl;
    }
    else
    {
        adrAnak p = l.first->listAnakIsi.first;
        while(p != NULL)
        {
                cout << "ID Tutor = " << p->info.fakultas<< endl;
                cout << "No. Tutor = " << p->info.nomorT << endl;
                cout << "Nama = " << p->info.namaT << endl;
                cout << "Fakultas = " << p->info.fakultas << endl;
                cout << "Jurusan = " << p->info.jurusan << endl;
                cout << "Jenis kelamin = " << p->info.sex << endl;
                p = p->next;
        }
    }
}
