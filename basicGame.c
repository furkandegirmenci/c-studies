#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int zar1;
    int zar2;
    int zartop;
    int zartop2;
    int deneme;

    srand(time(NULL));

    zar1 = 1 + rand()%6;
    zar2 = 1 + rand()%6;
    printf("%d %d", zar1, zar2);
    zartop = zar1 + zar2;
    switch(zartop) {
        case 7: case 11:
            printf("\n%d attiniz\nKAZANDINIZ.", zartop);
            break;
            case 2: case 3: case 12:
                printf("\n%d attiniz\nAHAHAH KAYBETTI", zartop);
                break;
        default:
            do {
                zar1 = 1 + rand() % 6;
                zar2 = 1 + rand() % 6;
                zartop2 = zar1 + zar2;
                printf("\nToplam 1 = %d, Toplam 2 = %d", zartop, zartop2);
                deneme++;
            }
            while(!(zartop == zartop2));
            printf("\n\nDeneme sayiniz : %d", deneme);
    }
}
