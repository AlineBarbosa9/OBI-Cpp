#include <iostream>

using namespace std;

int main(){
    int N,P,contador = 0;
    cin >> N;
    int chinelos[N];
    for(int i = 0; i < N; i ++){
        cin >> chinelos[i];
    }
    cin >> P;
    int tamanhos[P];
    for(int i2 = 0; i2 < P; i2++){
        cin >> tamanhos[i2];
        if(chinelos[tamanhos[i2]-1] > 0){
            contador ++;
            chinelos[tamanhos[i2]-1]--;
        }
        
    }
    cout << contador;
    

    return 0;
}
