#include <iostream>
using namespace std;

int main(){
  int tugas;
  int uts;
  int uas;
  float nilaitugas;
  float nilaiuts;
  float nilaiuas;
  float akhir;
  
  cout<<"Masukkan nilai tugas = ";cin>>tugas;
  if (tugas > 100){
      cout<<"Nilai tidak melebihi 100"<<endl;
      cout<<"Ulangi kembali program";
      return 0;
  }
  cout<<"Masukkan nilai uts = ";cin>>uts;
  if (uts > 100){
      cout<<"Nilai tidak melebihi 100"<<endl;
      cout<<"Ulangi kembali program";
      return 0;
  }
  cout<<"Masukkan nilai uts = ";cin>>uas;
  if (uas > 100){
      cout<<"Nilai tidak melebihi 100"<<endl;
      cout<<"Ulangi kembali program";
      return 0;
  }
  
  nilaitugas = 0,3 * tugas;
  nilaiuts = 0,3 * uts;
  nilaiuas = 0,4 * uas;
  akhir = nilaitugas*0,3 + nilaiuts*0,3 + nilaiuas*0,4;
  cout<<akhir;
  }
