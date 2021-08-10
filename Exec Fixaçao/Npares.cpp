# include <iostream>

using namespace std;

// Funçao somatoria
int Pares_de_N(int N){
    int cont = 0 ;
    int vet[N];
    int soma = 0;
    cout << "Digite os valores: \n";
    while(cont < N){
        cin >> vet[cont];
        if(vet[cont]%2 == 0)
            soma += vet[cont];
        cont++; 
    }
    return soma;
}

int main()  {
    int N;
    int soma;
    cout << "Total de N casos: \n";
    cin >> N;
    soma = Pares_de_N(N);
    cout << "Somatoria dos pares eh: " << soma << "\n";
}