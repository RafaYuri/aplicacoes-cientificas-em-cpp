/*
Enunciado:
Elabore um programa para calcular a média de um aluno que possui duas notas de mesmo peso. O programa não deve aceitar notas inferiores a zero ou 
superiores a dez. Ao final do calculo, verifique se o usuário deseja efetuar novo cálculo. Repita o cálculo enquanto a resposta do usuário for afirmativa.
*/

#include <iostream>

double setNota ()
{
    double nota;
    do{
        std::cout << "Digite a nota: ";
        std::cin >> nota;

        if (nota < 0 or nota >10)
        {
            std::cerr << "Nota inválida! Digite uma nota entre 0 e 10." << std::endl;
        }
    } while (nota < 0 or nota > 10);

    return nota;
}

double calculateMedia (double nota1, double nota2)
{
    return (nota1 + nota2) / 2;
}

int main (int argc, char *argv[])
{
    // Declaração de variáveis
    char resposta;
    double nota1, nota2, media;

    // Loop do programa
    do
    {
        nota1 = setNota ();
        nota2 = setNota ();
        media = calculateMedia (nota1, nota2);
        std::cout << "Média: " << media << std::endl;
        std::cout << "Deseja calcular outra média? (s/n): ";
        std::cin >> resposta;
    } while (resposta == 's' or resposta == 'S');

    return 0;
}