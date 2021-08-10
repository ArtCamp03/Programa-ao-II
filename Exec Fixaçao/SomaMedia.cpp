# include <iostream>

using namespace std;

// Funçao somatoria
int Somatoria(int N){
    int cont = 0 ;
    int vet[N];
    int soma = 0;
    cout << "Digite os valores: \n";
    while(cont < N){
        cin >> vet[cont];
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
    soma = Somatoria(N);
    cout << "Somatoria eh: " << soma << "\n";
    cout << "Media:" << soma/N << "\n";

}