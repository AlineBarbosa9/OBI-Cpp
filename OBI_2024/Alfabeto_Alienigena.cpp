#include <iostream>
#include <vector>
using namespace std;

vector<char>Alfabeto;

bool Verifica(char c){
    for(int i = 0; i < Alfabeto.size(); i++){
        if(c == Alfabeto[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int K,N;
    cin >> K >> N;
    string S;
    cin >> S;
    for(int i = 0; i < S.length(); i++){
        Alfabeto.push_back(S[i]);
    }
    cin >> S;
    bool testa = true;
    for(int i = 0; i < S.length(); i++){
        if(!Verifica(S[i])){
           testa = false;
           break;
        }
    }
    if(testa){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}
