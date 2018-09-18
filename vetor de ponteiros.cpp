#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int tamanho;
    cout << "\tDEFININDO UM VETOR DE PONTEIROS\n" << endl;
    cout << "Tamanho do vetor: "; cin >> tamanho;
    
    int vetor[tamanho];
    int *v = vetor; // vetor é ponteiro para int
    
    for (int i = 0; i < tamanho; i++) {
        cout << "Índice " << i << ": "; cin >> vetor[i]; 
        *(v + i) = vetor[i]; // conteúdo do índice é armazenado no endereço apontado por (v+i)
    }
    
    cout << "\nVetor: [ ";
    for (int i = 0; i < tamanho; i++) {
        cout << *(v + i) << " "; // retorna o conteúdo do índice apontado por (v+i)
    }
    cout << "]" << endl;
    
    for (int i = 0; i < tamanho; i++) {
        cout << "\nValor do índice " << i << ": " << *(v + i); // retorna o conteúdo do índice apontado por (v+i)
        cout << "\nEndereço da memória: " << &vetor[i] << endl; // retorna o endereço do índice
    }
    
    cout << "\nTamanho do vetor: " << sizeof(vetor)/sizeof(int); // 4(bytes-tamanho de "int") * n índices / 4(bytes) = n índices 

    return 0;
}
