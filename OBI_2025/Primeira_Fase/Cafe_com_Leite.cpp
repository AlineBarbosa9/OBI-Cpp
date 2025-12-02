#include <iostream>
using namespace std;

int main(){
    int A,B,C,D,qtd;
    cin >> A >> B >> C >> D;
    qtd = C - D;
    if(qtd >= A && qtd <= B){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }


    return 0;
}
