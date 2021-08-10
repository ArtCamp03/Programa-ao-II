# include <iostream>

using namespace std;

int main()  {
    int v1, v2;

    cout << "digite o valor 1: \n";
    cin >> v1;

    cout << "digite o valor 2: \n";
    cin >> v2;

    if(v1 > v2){
        cout << "Onumero maior eh: " << v1 << "\n";
    }else if(v2 > v1){
        cout << "Onumero maior eh: " << v2 << "\n";
    }else{
        cout << "Sao iguais \n";
    }
    
}