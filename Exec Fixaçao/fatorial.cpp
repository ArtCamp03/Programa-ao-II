# include <iostream>

using namespace std;

int main()  {
    int N;
    int fat = 1;
    cout << "Valor de N: \n";
    cin >> N;
    cout << "Fatorial: \n";
    if(N == 0)
        cout << "1";
    else
        while(N > 0){
            fat = fat * N;
            N--;
        }
        cout << fat << "\n";
}