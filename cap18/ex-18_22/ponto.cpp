#include "ponto.h"
#include <iostream>
#include <cmath>

void lerPonto(PONTO &p)
{
    std::cout << "Digite as coordenadas do ponto (x y): ";
    std::cin >> p.x >> p.y;
}

void exibirPonto(const PONTO &p)
{
    std::cout << "Ponto: (" << p.x << ", " << p.y << ")" << std::endl;
}

double distanciaPontos(const PONTO &p1, const PONTO &p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int lerQuantidadePontos()
{
    int n;
    std::cout << "Digite a quantidade de pontos: ";
    std::cin >> n;
    return n;
}

void alocarVetorPontos(vPONTOS &vetor, int quantidade)
{
    vetor = new PONTO[quantidade];
}

void desalocarVetorPontos(vPONTOS &vetor)
{
    delete[] vetor;
    vetor = nullptr;
}

void lerVetorPontos(vPONTOS &vetor, int quantidade)
{
    for (size_t i = 0; i < quantidade; i++)
    {
        std::cout << "Ponto " << (i + 1) << ":" << std::endl;
        lerPonto(vetor[i]);
    }
}

void exibirPontoMaisProximoOrigem(const vPONTOS &vetor, int quantidade)
{
    int indice = 0;

    double distanciaMinima = distanciaPontos(vetor[0], {0, 0});

    for (size_t i = 1; i < quantidade; i++)
    {
        double distanciaAtual = distanciaPontos(vetor[i], {0, 0});

        if (distanciaAtual < distanciaMinima)
        {
            distanciaMinima = distanciaAtual;
            indice = i;
        }
    }

    std::cout << "-- Ponto mais próximo da origem --" << std::endl;
    exibirPonto(vetor[indice]);
}



