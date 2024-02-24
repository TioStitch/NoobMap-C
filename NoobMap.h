#include <stdio.h>


    void add(int map[], int dado) {

       int ALLOW_ADD = 0;
       int ADDED_SLOT = 0;

       for (int i = 0; i <= 100; i++) {
            if (map[i] == -1) {
                ALLOW_ADD = 1;
                ADDED_SLOT = i;
                break;
            }
       }

        if (ALLOW_ADD == 1) {
            map[ADDED_SLOT] = dado;
            printf("Dado adicionado! Slot atual: %i\n", ADDED_SLOT);
            return;
        }

        printf("Limite do Mapa atingido!");
    }

    int getValue(int map[], int index) {
        if (map[index] == -1) {
            printf("Indice vazio!\n");
            return -1;
        }

        if (map[index] > 100) {
            printf("Este indice ultrapassa o limite do mapa!\n");
        }

        return map[index];
    }

    void initialize(int map[]) {
        
        for (int i = 0; i <= 100; i++) {
            map[i] = -1;
        }
    }