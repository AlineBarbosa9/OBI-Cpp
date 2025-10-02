#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool Tipo1(string s){
    if(s.length() != 8){
        return false;
    }
    for(int i = 0; i <= 2;i++){
        if(!isalpha(s[i])){
            return false;
        }
    }
    if(s[3] != '-'){
        return false;
    }
    for(int i = 5; i <= 7;i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    return true;
}

bool Tipo2(string s){
    if(s.length() != 7){
        return false;
    }
    for(int i = 0; i <= 2;i++){
        if(!isalpha(s[i])){
            return false;
        }
    }
    if(!isdigit(s[3])){
        return false;
    }
    if(!isalpha(s[4])){
        return false;
    }
    for(int i = 5;i <=6;i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    return true;
}


int main(){
    string S;
    cin >> S;
    if(Tipo1(S)){
        cout << 1;
    }else if(Tipo2(S)){
        cout << 2;
    }else{
        cout << 0;
    }
    

    return 0;
}
