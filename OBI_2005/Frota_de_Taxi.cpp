#include <iostream>

using namespace std;

int main(){
    double A,G,RA,RG;
    cin >> A >> G >> RA >> RG;
    if((double)RG / G >= (double)RA / A){
        cout << "G";
    }else{
        cout << "A"; 
    }

    return 0;
}
