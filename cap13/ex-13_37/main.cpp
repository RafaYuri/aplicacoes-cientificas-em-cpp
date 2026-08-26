/*
Enunciado:
Elaborar uma função para decrementar um número inteiro x da quantidade q. Se a quantidade for omitida na chamada, faça um decremento unitário. 
*/

#include <iostream>

void dec (int &x, int q = 1)
{
    x -= q;
}

int main (int argc, char *argv[])
{
    int x;
    std::cout << "Insira um número: ";
    std::cin >> x;

    std::cout << "Deseja definir a quantidade de decremento? (s/n): ";
    char resp;
    std::cin >> resp;
    if (resp == 's') 
    {
        int q;
        std::cout << "Insira a quantidade de decremento: ";
        std::cin >> q;
        dec(x, q);
    } 
    else if (resp == 'n') 
    {
        dec(x);
    }
    else
    {
        std::cerr << "Entrada inválida. Use 's' para sim ou 'n' para não." << std::endl;
        return 1;
    }
    std::cout << "O número decrementado é: " << x << std::endl;
    return 0;
}