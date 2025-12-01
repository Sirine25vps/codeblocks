#include <stdio.h>

#define VALEUR 3
#define AUTRE 1

int main()
{
    printf("La valeur est %d\n", VALEUR);
    printf("et %d est bien la valeur.\n", VALEUR);
    printf("ce n'est pas %d, \n", VALEUR+AUTRE);
    printf("ni %d non plus.\n", VALEUR-AUTRE);
    printf("Non la valeur reste %d.\n", VALEUR);
    return(0);
}
