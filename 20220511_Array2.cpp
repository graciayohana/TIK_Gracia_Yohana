//array
//dimulai dari 0 

#include <iostream>
using namespace std;

int main(){
    string nama[7] = {  //kalau kosong berarti unlimited
        "David", 
        "Kabila", 
        "Bryan", 
        "Sidney",
        "Gracia",
        "Keysie",
        "Yoel"
    };
    
    //cara panggil semua
    for (int i = 0; i<7 ; i ++){
        cout<<nama[i]<<endl;
    }
    return 0;
  

}
