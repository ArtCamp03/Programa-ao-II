#include <iostream>
#include <string>


using namespace std;
using std::string;
//inicializaçao do obejto string

int main()  {
    string s;
    string s1;
    string s2 = s1;
    string s3 = "Artur";
    string s4(10,'A') ;

    string s1,s2;
   
    /*cin >> s;
    cout << s << endl;
    */

    // lendo duas strings 
    cin >> s1 >> s2 ;
    cout << s1 << s2 << endl;

    // manipulaçao de strings
    os << s;
    is >> s;
    getline(is,s); //retorna toda a linha
    s.empty(); // retorna verdadeiro se a variavel estiver vazia
    s.size(); // retorna o tamanho da variavel
    s[n] ; // retorna a referencia sa posiçao de "n"
    s1 + s2; // concatena as duas strings
    s1 = s2; // copia s2 para s1
    s1 == s2; // verifica se os caracteres sao iguais
    s1 != s2; // iguais caso forem maiusculas ou minusculas
    >,<,>=,<=; // se comparam e ordena 

    // leitura de string separadas por espaço
    string line;
    while(getline(cin, line)){
        cout << line << endl;
    }

    // Acessando caracteres
    string str ("some string");

    for(auto c : str){
        cout << c << endl;
    }

    for(auto c : s){
        if(ispunct(c)){
            ++punct_cnt;
        }
    }
    cout << punct_cnt << "pontuaçao caracter em " << s << end;

    // Alterando caracter com range-for
    string s ("Ola Mundo");
    for(auto &c: s){
        c = toupper(c);
    }
    cout << s << endl;
}

