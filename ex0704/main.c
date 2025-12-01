#include <stdio.h>

int main()
{
    int a, b, c;

    printf("J'attends trois lettres:");
    a = getchar();
    b = getchar();
    c = getchar();

    printf("Les trois lettres sont '%d', '%d', '%d'\n", a, b, c);
    return 0;
}
