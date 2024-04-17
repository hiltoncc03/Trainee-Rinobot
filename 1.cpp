#include <iostream>

using namespace std;

bool verificaPar(int n){
    if(n%2==0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    verificaPar(n) ? cout << "False" : cout << "True" ;
    return 0;
}