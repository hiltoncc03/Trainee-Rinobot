#include <iostream>

using namespace std;

bool verificaPotencia(int n){
    while(n>2){
        if(n%2==0){
            n = n/2;
        }
        else
        break;
    }
    if(n==2 || n==0) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    verificaPotencia(n) ? cout << "true" : cout << "false"; 
    return 0;
}