#include <stdio.h>

void ajouter(float *a, float *b, float *resultat) {
    *resultat = *a + *b;
}

void soustraire(float *a, float *b, float *resultat) {
    *resultat = *a - *b;
}

void multiplier(float *a, float *b, float *resultat) {
    *resultat = *a * *b;
}

void diviser(float *a, float *b, float *resultat) {
    if (*b != 0) {
        *resultat = *a / *b;
    } else {
        printf("Erreur : Division par zéro !\n");
    }
}

int main() {
    float a, b, resultat;
    char operateur;
    float *p_a = &a, *p_b = &b, *p_resultat = &resultat;

    printf("Entrez deux nombres : ");
    scanf("%f %f", p_a, p_b);

    printf("Entrez l'opérateur (+, -, *, /) : ");
    scanf(" %c", &operateur);

    switch(operateur) {
        case '+':
            ajouter(p_a, p_b, p_resultat);
            break;
        case '-':
            soustraire(p_a, p_b, p_resultat);
            break;
        case '*':
            multiplier(p_a, p_b, p_resultat);
            break;
        case '/':
            diviser(p_a, p_b, p_resultat);
            break;
        default:
            printf("Opérateur invalide !\n");
            return 1;
    }

    printf("Résultat : %.2f\n", *p_resultat);
    
    return 0;
}
