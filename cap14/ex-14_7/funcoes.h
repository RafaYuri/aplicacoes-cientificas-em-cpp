#ifndef FUNCOES_H
#define FUNCOES_H

// Distância entre dois pontos no plano
double distancia2D (double x1, double y1, double x2, double y2);

// Distância entre dois pontos no espaço
double distancia3D (double x1, double y1, double z1, double x2, double y2, double z2);

// Módulo de um valor real
double modulo (double x);

// Lados de um triângulo
void ladosTriangulo (double x1, double y1, double x2, double y2, double x3, double y3, double &a, double &b, double &c);

// Área de um triângulo
double areaTriangulo (double x1, double y1, double x2, double y2, double x3, double y3);

#endif // FUNCOES_H