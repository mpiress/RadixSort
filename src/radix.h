#ifndef RADIX_H 
#define RADIX_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAXSIZE 10


typedef struct Vector Vector;

struct Vector{
	int *itens;
};

void Initialize(Vector *v);
void Imprime(Vector *v);

int  GetDecimal(int value, int exp);
void Contagem(Vector *v, int exp);
void RadixSort(Vector *v);

#endif