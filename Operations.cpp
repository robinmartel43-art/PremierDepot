#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int multiplication(int a, int b);
{
	int resultat;
	
	resultat = a * b;
	
	return resultat;
}

int division(int a, int b);
{
	int resultat;
	
	resultat = a / b;
	
	return resultat;
}

int exposant(int nb, int exp)
{
	int resultat;
		
	resultat = exp(a, b);
		
	return resultat;

int factoriel(int nb)
{
    int resultat = 1;
    for (int i = 1; i <= nb; i++)
    {
        resultat *= i;
    }
    return resultat;

}