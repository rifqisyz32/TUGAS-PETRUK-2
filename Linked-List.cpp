#include <iostream>
#include <cstdlib>
#include <conio.h> 

using namespace std;

class angka
{
	
public:

  int urut;
  angka *next; 
}; 
  angka *pertama_ptr = NULL;
  angka *posisi;         
  int option = 0; 

void tambah_data_pertama_list()
{
  angka *baru;
  baru = new angka;
  cout << "Masukkan Data     : ";
  cin >> baru->urut;
  baru->next = NULL;
  if(pertama_ptr == NULL)
  {
    pertama_ptr=baru;
    pertama_ptr->next = NULL;
  }
  else
  {
    baru->next = pertama_ptr;
    pertama_ptr = baru;
  }
} 

void tambah_data_angka_di_akhir()
  {
  angka *temp, *temp2;   
  temp = new angka; 
  cout << "Masukkan Data     : ";
  cin >>   temp->urut;
  temp->next = NULL; 


  if (pertama_ptr == NULL)
  {
    pertama_ptr = temp;
    posisi = pertama_ptr;
  }
  else
  {
    temp2 = pertama_ptr;

    while (temp2->next != NULL)
    {
      temp2 = temp2->next; 
      
    }
  temp2->next = temp;
  }
} 

void display_list()
{
  angka *temp;
  temp = pertama_ptr;
  cout << endl;
  cout << "DATA [";  
  if (temp == NULL)
    cout << "Data kosong" << endl;
  else
  {
    while (temp != NULL)
    {  
     
     cout << "" << temp->urut << ",";
     
     if (temp == posisi)
        cout << "     <<posisi angka";

     temp = temp->next; 
    }
    cout << "] ";  
    cout << "list" << endl;
  }
  
} 
void hapus_pertama_angka()
{
  angka *temp;
  temp = pertama_ptr;
  pertama_ptr = pertama_ptr->next;
  delete temp;
} 

void hapus_akhir_angka()
{
  angka *temp1, *temp2;
  if (pertama_ptr == NULL)
    cout << "Data tidak ada" << endl;
  else
  {
    temp1 = pertama_ptr;
    if (temp1->next == NULL)
    {
      delete temp1;
      pertama_ptr = NULL;
    }
    else 
    {
      while (temp1->next != NULL)
      {
        temp2 = temp1;
        temp1 = temp1->next;
      }
      delete temp1;
      temp2->next = NULL;
    }

   }
}
void pindah_posisi_sebelumnya()
{
  if (posisi->next == NULL)
  cout << "Anda berada pada akhir data." << endl;
  else
  posisi = posisi->next; 
} 

void pindah_posisi_berikutnya()
{
  if (posisi == pertama_ptr)
    cout << "Anda berada pada pertama data" << endl;
  else
  {
   angka *previous;     
    previous = pertama_ptr; 
    while (previous->next != posisi) 
    { 
      previous = previous->next;
    }
    posisi = previous;
  }
}

void tambah_data_yang_akan_disisipkan_list()
{
  angka *baru, *bantu;
  int posisi_sisip;
  if(pertama_ptr != NULL)
  {
  
   
    cout<<"Akan disisip sebelum Data Ke ? : ";
    cin>>posisi_sisip;
    baru =new angka;
   bantu=pertama_ptr;
     
    for(int i=1;i<posisi_sisip-1;i++) {
      if(bantu->next != NULL)
        bantu=bantu->next;
      else
        break; 
    }
  cout << "Masukkan Data     : ";
  cin >> baru->urut;
  baru->next=bantu->next;
  bantu->next=baru;
  }
  else
  {
    cout<<"Maaf data anda belum ada, isi data terlebih dulu";
    getch();
  } 
} 
void Hapus_data_yang_telah_disisipkan_list()
{
  int banyakdata,posisi_hapus,poshapus;
  angka *hapus, *bantu;
  if(pertama_ptr != NULL)
  {
    cout<<" Data yang akan dihapus  : ";
    cin>>posisi_hapus;
    banyakdata=1;
    bantu=pertama_ptr;
    while(bantu->next != NULL)
    {
      bantu=bantu->next;
      banyakdata++;
    }
    if((posisi_hapus<1)||(posisi_hapus>banyakdata))
    {
      cout<<"Belum ada data, isi data terlebih dahulu \n";
    }
    else
    {
      bantu=pertama_ptr;
      poshapus=1;
      while(poshapus<(posisi_hapus-1))
      {
        bantu=bantu->next;
        poshapus++;
      }
      hapus=bantu->next;
      bantu->next=hapus->next;
      delete hapus;
    }
 }
 else 
    cout<<"Maaf data anda belum ada, isi data terlebih dulu ";
 getch();
}

int init(int nilai){
 angka *baru;
  baru = new angka;
  baru->urut=nilai;
  baru->next = NULL;
  if(pertama_ptr == NULL)
  {
    pertama_ptr=baru;
    pertama_ptr->next = NULL;
  }
  else
  {
    baru->next = pertama_ptr;
    pertama_ptr = baru;
  }
}

int main()
{
  cout<<"\t\t\t\t\t    ------------------------ \n";
	cout<<"\t\t\t\t\t   |  PROGRAM LINKED LIST  |\n";
	cout<<"\t\t\t\t\t    ------------------------ \n";
	cout<<"\n\t\t\t\t\t              Oleh\n\n";
	cout<<"\n\n\t\t\t\t\t     Rifqi Syamsu Zulkarnain\n\t\t\t\t\t\t    1817051032\n\n";
	cout<<"\n\n\t\t\t\t\t         Rifqi Adiyatma\n\t\t\t\t\t\t    1817051055\n";
	cout<<"\n\n\t\t\t\t\t      Tommy Ferdiansyah A \n\t\t\t\t\t\t    1817051072\n\n";
	cout<<"\n\n\t\t\t\t\t     Gilang Rahman Affandi\n\t\t\t\t\t\t    1817051075\n";
	system ("pause");
	system ("cls");
	cout<<"\t\t\t\t\t\t    ----------- \n";
	cout<<"\t\t\t\t\t\t   | LINKED LIST |\n";
	cout<<"\t\t\t\t\t\t    ----------- \n";
  pertama_ptr = NULL;
  
  init(1);
  init(8);
  init(7);
  init(5);
  init(3);
  init(9);
  init(0);
  do
  {

    display_list();
    cout << endl;
    cout << "MENU PILIHAN : " << endl;
    cout << "0. Keluar program." << endl;
    cout << "1. Tambah data pertama" << endl;
    cout << "2. Tambah data akhir" << endl;
    cout << "3. Tambah data yang akan disisipkan "<< endl;
    cout << "4. Hapus data pertama" << endl;
    cout << "5. Hapus data akhir" << endl;
    cout << "6. Hapus data yang telah disisipkan" << endl;
    cout << endl << " Pilihan >> ";
    cin >> option; 
