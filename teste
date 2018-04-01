#include <iostream>
#include <locale.h>

using namespace std;

struct Opera{
    float soma;
    float subtrai;
    float multiplica;
    float divide;
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    Opera op;
    float a, b, c, d;
    
    cout << "Operações com frações\n\n";
    cout << "Numerador 1: "; cin >> a;
    cout << "Denominador 1: "; cin >> b;
    cout << "Numerador 2: "; cin >> c;
    cout << "Denominador 2: "; cin >> d;
    
    op.soma = (a*d + b*c)/(b*d); 
    op.subtrai = (a*d - b*c)/(b*d);
    op.multiplica = (a*c)/(b*d);
    op.divide = (a*d)/(b*c);
    
    cout << "Soma: " << a << "/" << b << " + " << c << "/" << d << " = " << op.soma << endl;
    cout << "Subtração: " << a << "/" << b << " - " << c << "/" << d << " = " << op.subtrai << endl;
    cout << "Multiplicação: " << a << "/" << b << " * " << c << "/" << d << " = " << op.multiplica << endl;
    cout << "Divisão: " << a << "/" << b << " / " << c << "/" << d << " = " << op.divide << endl;
    
    return 0;
}
