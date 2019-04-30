#include "house.h"
using namespace std;

int main()
{
    adrHouse PH;
    adrPpl PP;
    listHouse LH;
    listPpl LP;
    int nomorRumah;
    infotypePpl x;
    int pil;
    createListHouse(LH);
    string yesno;
    int searchHouse;
    int deleteHouse;
    adrHouse PrecH;
    adrPpl PrecP;
    infotypePpl deletePeople;
    int jmlH;
    int jmlP;
    do{

    cout<<"1. Input daftar rumah dan penduduk "<<endl;
    cout<<"2. Lihat daftar rumah"<<endl;
    cout<<"3. Lihat daftar isi semua rumah"<<endl;
    cout<<"4. Lihat isi rumah tertentu"<<endl;
    cout<<"5. Hapus rumah"<<endl;
    cout<<"6. Hapus penduduk"<<endl;
    cout<<"7. Hitung jumlah rumah"<<endl;
    cout<<"8. Hitung jumlah penduduk"<<endl;
    cout<<"0. keluar program"<<endl<<endl;;
    cout<<"Masukkan Pilihan : ";cin>>pil;
    if(cin.fail()){
        cin.clear();
        cout<< "Tolong masukkan integer";
        cin.sync();
        cin.get();
        system("CLS");
    }
    else{
        switch(pil){
        case 0:
            return 0;
        case 1:
            cout<< "Masukkan nomor rumah : ";cin>>nomorRumah;
            PH = searchAddressH(LH,nomorRumah);
            if(PH == NULL){
                createNewElmHouse(nomorRumah,PH);
                insertLastH(LH,PH);
            }else {
                cout<< "Rumah tidak boleh sama"<<endl;
                break;
            }
            do{
            cout<< "Masukkan nama : ";cin>>x.nama_ppl;
            cout<< "Masukkan umur : ";cin>>x.umur_ppl;
            cout<< "Masukkan kelamin : ";cin>>x.kelamin_ppl;
            cout<< "Masukkan pekerjaan : ";cin>>x.pekerjaan_ppl;
            createNewElmPeople(x,PP);
            insertLastP(lpeople(PH),PP);
            cout<<endl<< "Input orang lagi?(yes/no) : ";cin>>yesno;
            }while(yesno != "no");
            system("CLS");
        break;
        case 2:
            PH = first(LH);
            cout<< "Daftar rumah : "<<endl;
            while(PH != NULL){
                cout<< "Rumah nomor "<<info(PH)<<endl;
                PH = next(PH);
            }
            cout<<endl;
            system("CLS");
        break;
        case 3:
            printInfoH(LH);
            system("CLS");
        break;
        case 4:
            cout<< "Cari rumah : ";cin>>searchHouse;
            PH = searchAddressH(LH,searchHouse);
            if(PH != NULL){
                printInfoP(lpeople(PH));
            } else cout<< "Rumah tidak ditemukan"<<endl;
            system("CLS");
        break;
        case 5:
            cout<< "Rumah yang ingin dihapus : ";cin>>deleteHouse;
            PH = searchAddressH(LH,deleteHouse);
            if(PH != NULL){
                PrecH = prev(PH);
                deleteAfterH(LH,PrecH,PH);
            } else cout<< "Rumah tidak ditemukan"<<endl;
            cout<< "Rumah berhasil di hapus"<<endl;
            system("CLS");
        break;
        case 6:
            cout<< "Nama penduduk yang ingin dihapus : ";cin>>deletePeople.nama_ppl;
            PH = first(LH);
            while(PH != NULL){
                PP = searchAddressP(lpeople(PH),deletePeople);
                PH = next(PH);
            }
            cout<< "Rumah berhasil di hapus"<<endl;
            system("CLS");
        break;

        case 7:
            cout<<"Jumlah rumah : ";
            jmlH = countHouse(LH);
            cout<<jmlH<<endl;
            system("CLS");
        break;

        case 8:
            cout<< "Cari rumah : ";
            cin>>searchHouse;
            PH = searchAddressH(LH,searchHouse);
            if(PH == NULL){
                cout<< "Tidak ditemukan"<<endl;
            }
            else{
               // jmlP = countPeople(lpeople(PH),LP);
                cout<<"Jumlah penduduk : "<<jmlP;
            }
            system("CLS");
        break;
        }
    }
    }while(pil != 0);
    /*
    createNewElmHouse(10,PH);
    insertLastH(LH,PH);

    createNewElmPeople(1,PP);
    PH = searchAddressH(LH,10);
    insertLastP(lpeople(PH),PP);
    createNewElmHouse(20,PH);
    insertLastH(LH,PH);
    printInfoH(LH);
    adrHouse P;
    listHouse LH;
    listPpl LP;
    createListHouse(LH);
    createNewElmHouse(2,P);
    insertFirstH(LH,P);


    createNewElmHouse(3,P);
    insertLastH(LH,P);

    createNewElmHouse(5,P);
    insertLastH(LH,P);

    createNewElmHouse(4,P);
    adrHouse Prec = next(first(LH));
    insertAfterH(LH,Prec,P);

    createNewElmHouse(6,P);
    insertLastH(LH,P);
    printInfoH(LH);

    Prec = searchAddressH(LH,1);
   // cout<< (Prec);
    deleteAfterH(LH,Prec,P);


    printInfoH(LH);

    adrHouse Q = first(LH);
    while(next(Q) != NULL){
        Q = next(Q);
    }
    while(Q != NULL){
        cout<< info(Q) << " ";
        Q = prev(Q);
    }*/
    //cout<<info(next(next(first(LH))));
    return 0;
}
