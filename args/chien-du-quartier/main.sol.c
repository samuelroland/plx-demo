#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 2)
        printf("Le chien %s est sympa\n", argv[1]);
    else if (argc > 2)
        printf("Trop d'info\n");
    else
        printf("Pas de chien...\n");
    return 0;
}
