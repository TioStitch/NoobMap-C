#include <stdint.h>
#include "NoobMap.h"

#define MAP_SIZE 100

struct Map {
    int mapa[MAP_SIZE];
};

int main() {

    struct Map map;

    initialize(map.mapa);
    add(map.mapa, 10);

    printf("\nIndice do Mapa: %i", getValue(map.mapa, 0));
    return 0;
}