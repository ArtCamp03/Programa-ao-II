# include <iostream>

using namespace std;

bool pares(int x){
    if(x%2 == 0){
        return true;
    }else{
        return false;
    }
}

int main()  {
    int vet[10];

    for(int i = 0 ; i < 10 ;i++){
        cin >> vet[i];
    }

    for(auto y : vet){
        if(pares(y))
            cout << y << "\n";
    }
        
}