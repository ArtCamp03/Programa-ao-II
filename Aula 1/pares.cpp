# include <iostream>

using namespace std;

int main()  {
    int vet[10];
    int par;

    for(int i = 0 ; i < 10 ;i++){
        cin >> vet[i];
    }

    for(int i = 0 ; i < 10 ;i++){
        par = vet[i]%2;   
        if(par == 0){
            cout << vet[i] << "\n";
        }
    }

    /*
    for(auto y : vet){
        if(y % 2 == 0){
            cout << y << "\n";
        }
    }
    */
        
}