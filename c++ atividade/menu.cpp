#include <iostream>


// function pra o exercicio 1
void exibirTabuada(int numero) {
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << "\n";
    }
}
void exercicio1() {
    int numero;

    std::cout << "Digite um número para exibir a tabuada: ";
    std::cin >> numero;
if (numero == 0) {
    for (int n = 1; n <= 10; ++n) {
        std::cout << "Tabuada do " << n << ":\n";
        exibirTabuada(n);
    }
}
else if (numero >=1 && numero <= 10) {
    std::cout << "Tabuada do " << numero << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << "\n";
    }
} else {
    std::cout << "Digite um numero de 1 a 10.\n";
}
}


// function pra o exercicio 2

void exercicio2() {
    int numero;
    long long fatorial = 1;

    std::cout << "Digite um número para calcular o fatorial: ";
    std::cin >> numero;

    std::cout << numero << "! = ";

    for (int i = numero; i >= 1; i--) {
        fatorial *= i;
        std::cout << i;
        if (i > 1) std::cout << " x ";
    }

    std::cout << " = " << fatorial << "\n";
}


// function pra o exercicio 3
void exercicio3() {
    int a, b, resultado = 0;
    std::cout << "Digite o primeiro número: ";
    std::cin >> a;
    std::cout << "Digite o segundo número: ";
    std::cin >> b;
// verifica se numero e negativo 
bool negativo = false;

if ((a < 0 && b >= 0) || (a >= 0 && b < 0)) {
    negativo = true;
}

a = abs(a);
b = abs(b);


int i = 0;
        while (i < b)
{
    resultado += a; // Mult sem usar '*'
    i++;
}

if (negativo) {
        resultado = -resultado; // Se um dos números era negativo, o resultado também é negativo
    }


    std::cout << "Resultado da multiplicação: " << resultado << "\n";
}


// function pra o exercicio 4
void exercicio4() {
    double salarioJoaquim = 1700.0; // Salário de Joaquim
    double salarioJoaquina = 1100.0; // Salário de Joaquina

    double aumentoJoaquim = 20.0; 
    double aumentoJoaquina = 30.0;

    int anos = 0;
    while (salarioJoaquina <= salarioJoaquim) {
        salarioJoaquim += aumentoJoaquim;
        salarioJoaquina += aumentoJoaquina;
        anos++;
    }

    std::cout << "Joaquina levará " << anos << " anos para ganhar mais que Joaquim.\n";
    std::cout << "Salário de Joaquim após " << anos << " anos: R$ " << salarioJoaquim << "\n";  
    std::cout << "Salário de Joaquina após " << anos << " anos: R$ " << salarioJoaquina << "\n";
    std::cout << "---------------------\n";
}



void mostrarMenu() {
    std::cout << "Menu de Opções:\n";
    std::cout << "1. Exercicio 1(Exibir tabuada)\n";
    std::cout << "2. Exercicio 2(Mult sem *)\n";
    std::cout << "3. Exercicio 3(fatorial)\n";
    std::cout << "4. Exercicio 4(Salario)\n";
    std::cout << "5. Sair\n";
    std::cout << "---------------------\n";
}

int main() {
    int escolha;

    do {
        mostrarMenu();
        std::cout << "Escolha uma opção: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                 exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 3:
                exercicio3();
                break;
            case 4:
                exercicio4();
                break;
            case 5:
                std::cout << "Saindo do programa...\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    } while (escolha != 5);

    return 0;
}