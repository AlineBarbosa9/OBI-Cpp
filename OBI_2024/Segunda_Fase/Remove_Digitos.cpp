#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int num,maior,cont = 0;
    
    while(N > 0){
    string S = to_string(N);
    for(int i = 0; i < S.length();i++){
        num = S[i] - '0';
        if(i == 0){
            maior = num;
        }else{
            if(num > maior){
                maior = num;
            }
        }
    }
    N -= maior;
    cont++;
   }
   cout << cont << endl;
    return 0;
}
