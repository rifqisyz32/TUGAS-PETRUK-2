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
