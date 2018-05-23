#include <iostream>

using namespace std;

void criaVetor(int arr[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        cout << "Índice " << i << ": "; cin >> arr[i];
    }

    cout << "\nVetor: [ ";
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

void minimo(int arr[], int tamanho) {
    
    int atual, min = arr[0]; 
    for (int i = 0; i < tamanho; i++) {
        atual = arr[i]; 
        if (atual < min) min = atual;
    }
    cout << "\nMínimo: " << min;
}

void maximo(int arr[], int tamanho) {
    
    int atual, max = arr[0];
    for (int i = 0; i < tamanho; i++) {
        atual = arr[i];
        if (atual > max) max = atual;
    }
    cout << "\nMáximo: " << max;
}

