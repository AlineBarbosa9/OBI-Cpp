#include <iostream>

using namespace std;

int main(){
    int N,R,P;
    int dias = 0;
    cin >> N >> R >> P;
    int inicio = N;
    while(inicio < P){
        N *= R;
        inicio+= N;
        dias++;
    }
    cout << dias;
    return 0;
}
