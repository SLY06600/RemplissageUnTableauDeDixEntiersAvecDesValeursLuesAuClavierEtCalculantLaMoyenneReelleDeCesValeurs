#include <stdio.h>

typedef int TABINT[10];

int main(void)
{
  /* code */
  TABINT tabint; /* le tableau fournies par l'utilisateur */
  int i; /* l'indice pour parcourir le tableau */
  int somme; /* la somme des éléments du tableau */
  double moyenne; /* la moyenne des éléments du tableau */

  /* Demande et lecture des valeur du tableau */
  for (i = 0; i < 10; i++) {
    printf("Introduire tabint[%d]: ", i);
    scanf("%d", &(tabint[i]));
  }

  /* affichage des valeurs du tableau et cummul dans la somme */
  printf("Valeurs saisies\n");
  for (somme = i = 0; i < 10; i++) {
    printf("tabint[%d] = %d\n", i, tabint[i]);
    somme+=tabint[i];
  }

  /* calcul de la moyenne attention : il faut diviser par un double sinon, il s'agit de la division entiere */
  moyenne = somme / 10.0;

  /* alternative */
  moyenne = (double) somme / 10;

  /* affichage du resultat */
  printf("Moyenne: %f\n", moyenne);
  return 0;
}
