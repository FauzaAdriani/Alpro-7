#include <iostream>
using namespace std;

class data{
public:
  void input();
  void proses();
  void output();
 
private:
  int i,n,j,k,pil,data,id,notelp;  
  string nama[30],jabatan[30];
};
void data::input(){
  cout<<"\tDATA KARYAWAN"<<endl;
  cout<<"-----------------------------"<<endl;
  cout<<"Masukkan banyak data : "; 
  cin>>n;
  
  for(int i=0; i<n; i++){
    cout<< i+1 <<"."<<endl;
    cout<<"Masukkan ID       : ";
    cin>>id;
    cout<<"Masukkan Nama     : ";
    cin>>nama[i];
    cout<<"Masukkan Jabatan  : ";
    cin>>jabatan[i];
    cout<<"Masukkan No. Telp : ";
    cin>>notelp;
  }  
  cout<<"=======================\n";
  cout<<"Pilihan :"<<endl;
  cout<<"=======================\n";
  cout<<"1. Ascending\n";
  cout<<"2. Descending\n";
  cout<<"Pilih angka : ";
  cin>>pil;
}

void data::proses(){
  if(pil==1){
  for(int i=0; i<n; i++){
    for(int i=n-1;j>=i; j--){
      if(id[j]<id[j-1]){
        k=ID[j];
        id[j]=id[j-1];
        id[j-1]=k
      }    
    }
  }
}
 else if (pil==2){
   for(int i=0; i<n; i++){
     for(int j=i+1;j<n;j++){
       if(id[j-1]<id[j]){
         k=id[j-1];
         id[j-1]=id[j];
         id[j]=k;
      }
    }
  }
}
  else{
    cout<<"Data tidak ditemukan!"<<endl;
  }
   cout << endl << "Hasil pengurutannya adalah : \n";
   for(int i=0;i<n;i++)
     {
       cout<< id[i] << "\n"
     }
   }

void data::output(){
  for(int i=0; i<=n; i++){
    cout<<"ID        : "<<id<<endl;
    cout<<"Nama      : "<<nama[i]<<endl;
    cout<<"Jabatan   : "<<jabatan[i]<<endl;
    cout<<"No. Telp  : "<<notelp<<endl;
  }
}

int main(){
  data a;
  a.input();
  a.proses();
  a.output();
}
