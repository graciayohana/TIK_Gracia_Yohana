//P – NISN Genap = Program Aritmatika (Penambahan, Pengurangan, Perkalian, Pembagian) biner menggunakan pemilihan dan input output

#include <iostream>
using namespace std;
int main()
{
    int a,b,kali,bagi,tambah,kurang;
    cout<<"Program Operasi Aritmatika"<<endl;
    cout<<"Masukkan nilai A = ";
    cin>>a;
    
    cout<<"Masukkan Nilai B = ";
    cin>>b;
    cout<<endl;
    cout<<endl;
    
    tambah = a + b;
    kurang = a - b;
    kali = a * b;
    bagi = a / b;
    
    cout<<"Hasil a + b adalah "<<tambah<<endl;
    cout<<"Hasil a - b adalah "<<kurang<<endl;
    cout<<"Hasil a * b adalah "<<kali<<endl;
    cout<<"Hasil a / b adalah "<<bagi<<endl;
    

    return 0;
}
