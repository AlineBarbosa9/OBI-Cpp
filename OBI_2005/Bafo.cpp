#include <iostream>

using namespace std;


int main()
{
    int R,A,B,cont = 0,Aldo,Beto;
    while(true){
        cin >> R;
        Aldo = 0;
        Beto = 0;
        ++cont;
        if(R == 0){
            break;
        }
        for(int i = 0; i < R; i++){
            cin >> A >> B;
            Aldo += A;
            Beto += B;
      }   
      cout << "Teste " << cont << endl;
      if(Aldo > Beto){ 
          cout << "Aldo" << endl;
      }else{
          cout << "Beto" << endl;
      }
      cout << endl;
    
    }
    return 0;
}
