#include "cachorro.hpp"

int main(){
    int i;
    string tempstring; //string temporária
    int tempint; //int temporária
    char tempchar; //char temporário
    Cachorro cachorros[5];


    for(i = 0; i <= 5; i++){
        cout << "Digite o nome do cachorro " << endl;
        cin >> tempstring;
        cachorros[i].SetNome(tempstring);

        cout << "Digite a raca do cachorro" << endl;
        cin >> tempstring;
        cachorros[i].SetRaca(tempstring);

        cout << "Digite a idade do cachorro" << endl;
        cin >> tempint;
        cachorros[i].SetIdade(tempint);

        cout << "Digite o porte do cachorro (G/M/P)" << endl;
        cin >> tempchar;
        cachorros[i].SetPorte(tempchar);
    }

    for(i = 0; i <= 5; i++){
        cachorros[i].mostrardetalhes();
        //cachorros[i].latir();
    }

    return 0;
}