#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int Vetor[6] = {0,400,800,1200,1600,2000};
    int N;
    cin >> N;
    int menor = N;
    for(int i = 0; i < 6; i++){
        if(abs(N - Vetor[i]) < menor){
            menor = abs(N - Vetor[i]);
        }
    }
    cout << menor << endl;
    return 0;
}
