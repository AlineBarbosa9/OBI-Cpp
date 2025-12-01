#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N;
    cin >> S;
    int num = 1;
    for(int i = 0; i < N; i++){
        if(S[i] == 'D'){
            num = (num * 2) + 1;
        }else{
            num *= 2;
        
        }
    }
    
    cout << num << endl;
    return 0;
}
