#include <iostream>
#include <locale.h>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    Data data;
    Data *nasc; //dereferência
    nasc = &data; //referência
    
    cout << "\tRegistrar data de Nascimento\nDia: "; cin >> nasc->dia;
    cout << "Mês: "; cin >> nasc->mes;
    cout << "Ano: "; cin >> nasc->ano;
    cout << "Data inserida: " << nasc->dia << "/" << nasc->mes << "/" << nasc->ano;
    
    return 0;
}
