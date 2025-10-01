#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int V,A,contador = 0;
    vector <int> Contas;
    cin >> V;
    for(int i = 0; i < 3; i++){
        cin >> A;
        Contas.push_back(A);
    }
    sort(Contas.begin(),Contas.end());
    
    for(int i = 0; i < 3;i++){
        if(V >= Contas[i]){
            contador++;
            V -= Contas[i];
        }
    }
    cout << contador;

    return 0;
}
