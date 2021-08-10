# include <iostream>

using namespace std;

int main()  {
    float temp;

    cout << "digite a temperatura em fahrenheit:  \n";
    cin >> temp;

    cout << "Temperatura em Celsius: "  << ((temp-32) * 5) /9 << "\n";
}