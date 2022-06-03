#include <iostream>
using namespace std;

class Cachorro{
    private:
        //atributos
        string nome;
        string raca;
        char porte;
        int idade;

    public:
        //métodos
        void mostrardetalhes();
        void latir();
        string GetNome();
        void SetNome(string n);
        string GetRaca();
        void SetRaca(string r);
        char GetPorte();
        void SetPorte(char p);
        int GetIdade();
        void SetIdade(int i);

};
