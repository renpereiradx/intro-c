#include <stdio.h>
// Enum es un tipo de datos definido por el usuario al cual se le asigna un identificador (nombre)
// Consta de una lista de constantes con valores que pueden ser explicitos o implicitos.

enum weekDays {
    SATURDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SUNDAY
};

enum deek {
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15
} card;

int main() {
    enum weekDays day;
    day = TUESDAY;
    card = diamonds;
    
    printf(card);
    return 0;
}