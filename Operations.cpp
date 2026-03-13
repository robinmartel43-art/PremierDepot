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

int estPremier(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int NombrePremier(int n) {
    int compteur = 0;
    int nombreTeste = 2;

    while (compteur < n) {
        if (estPremier(nombreTeste)) {
            compteur++;
        }
        if (compteur < n) {
            nombreTeste++;
        }
    }
    return nombreTeste;
}