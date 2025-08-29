# Le chien du quartier
Afficher le message du **chien du quartier** en fonction des arguments fournis.

Les 4 cas suivants doivent être supportés.
```
chien-sympa> ./main
Pas de chien...
chien-sympa> ./main Dogy
Le chien Dogy est sympa
chien-sympa> ./main Dogy wooowww
Le chien Dogy est sympa et dit 'wooowww'
chien-sympa> ./main Dogy wooowww 234
Trop d'info
```

Code de départ

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // TODO
    return 0;
}
```

<details>
<summary>Solution</summary>

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 2)
        printf("Le chien %s est sympa\n", argv[1]);
    else if (argc == 3)
        printf("Le chien %s est sympa et dit '%s'\n", argv[1], argv[2]);
    else if (argc > 3)
        printf("Trop d'info\n");
    else
        printf("Pas de chien...\n");
    return 0;
}
```
</details>
