#include <iostream>

using namespace std;

int main(){
    int P,D,B,Pontos = 0;;
    
    cin >> P;
    cin >> D;
    cin >> B;

    Pontos += P + 2 * D + 3 * B;

    if(Pontos >= 150){
        cout << "B";
        
    }else if(Pontos >= 120){
        cout << "D";
        
    }else if(Pontos >= 100){
        cout << "P";
        
    }else{
        cout << "N";
        
    }

    return 0;
}
