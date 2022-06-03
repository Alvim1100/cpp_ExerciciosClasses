#include "cachorro.hpp"

Cachorro::Cachorro(){
    
}
void Cachorro::mostrardetalhes(){
    cout << nome << " - " << idade << " - " << raca << " - " << porte << endl;
}

void Cachorro::latir(){
    cout << nome << " esta latindo.";
}

string Cachorro::GetNome(){
    return nome;
}

void Cachorro::SetNome(string n){
    nome = n;
}

string Cachorro::GetRaca(){
    return raca;
}

void Cachorro::SetRaca(string r){
    raca = r;
}

int Cachorro::GetIdade(){
    return idade;
}

void Cachorro::SetIdade(int i){
    idade = i;
}

char Cachorro::GetPorte(){
    return porte;
}

void Cachorro::SetPorte(char p){
    porte = p;
}
