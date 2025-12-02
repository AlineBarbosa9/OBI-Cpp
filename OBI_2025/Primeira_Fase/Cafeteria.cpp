#include <iostream>
using namespace std;

int main(){
    int A,B,C,D,cont = 1,qtd;
    cin >> A >> B >> C >> D;
    int maximo = C - A;
    int minimo = C - B;

    while(true){
        qtd = cont*D;
        if(qtd >= minimo && qtd <= maximo){
            cout << "S" << endl;
            return 0;
        }else if(qtd > maximo){
            break;
        }else{
            cont++;
        }
    }

    cout << "N" << endl;

    return 0;
}
