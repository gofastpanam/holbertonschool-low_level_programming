#include <stdio.h>

// Prototype de la fonction
void convertirMinutesEnHeuresEtMinutes(int minutes);

// Définition de la fonction
void convertirMinutesEnHeuresEtMinutes(int minutes) {
    int heures = minutes / 60;
    int minutesRestantes = minutes % 60;
    printf("%d heures et %d minutes.\n", heures, minutesRestantes);
}

// Fonction principale
int main(void) {
    int minutes = 10535052;
    convertirMinutesEnHeuresEtMinutes(minutes);
    return 0;
}
