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
            system("pause");
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
            system("pause");
            system("CLS");
        break;
        case 3:
            printInfoH(LH);
            system("pause");
            system("CLS");
        break;
        case 4:
            cout<< "Cari rumah : ";cin>>searchHouse;
            PH = searchAddressH(LH,searchHouse);
            if(PH != NULL){
                printInfoP(lpeople(PH));
            } else cout<< "Rumah tidak ditemukan"<<endl;
            system("pause");
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
            system("pause");
            system("CLS");
        break;
        case 6:
            cout<< "Nama penduduk yang ingin dihapus : ";cin>>deletePeople.nama_ppl;
            PH = first(LH);
            while(PH != NULL){
                PP = searchAddressP(lpeople(PH),deletePeople);
                if(PP == first(lpeople(PH))){
                    cout<< "pler";
                    deleteFirstP(lpeople(PH),PP);
                }
                else{
                    cout<< "pler";
                    PrecP = prev(PP);
                    deleteAfterP(lpeople(PH),PrecP,PP);
                }
                PH = next(PH);
            }
            cout<< "Penduduk berhasil di hapus"<<endl;
            system("pause");
            system("CLS");
        break;

        case 7:
            cout<<"Jumlah rumah : ";
            jmlH = countHouse(LH);
            cout<<jmlH<<endl;
            system("pause");
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
                jmlP = countPeople(LH,lpeople(PH));
                cout<<"Jumlah penduduk : "<<jmlP<<endl;
                jmlP = 0;
            }
            system("pause");
            system("CLS");
        break;
        }
    }
    }while(pil != 0);

    return 0;
}
