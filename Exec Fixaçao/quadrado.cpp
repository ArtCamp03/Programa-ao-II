# include <iostream>

using namespace std;

int main()  {
    int N;
    cout << "Valor de N: \n";
    cin >> N;

    if(N > 10)
        cout << "Valor invalido \n";
    else
        cout << "N quadrados: \n";
        while(N > 0 && N <= 10){
            cout << N * N << "\n";
            N--;
        }
    
}