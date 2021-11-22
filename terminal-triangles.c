#include <stdio.h>

int main() {
    /* User inputs */
    int triangleSize;
    int repetitions;
    char choosedChar;

    /* Loop helper variables */
    /* Needed since while must be used */
    int trianglesDrawn = 0;

    /* Set how large the triangle will be*/
    do {
        printf("Qual o tamanho dos catetos do triangulo?\n");
        scanf("%d", &triangleSize);
    } while (triangleSize < 1);

    /* Set how much triangles will be drawn */

    do {
        printf("Quantos triangulos deseja desenhar na tela?\n");
        scanf("%d", &repetitions);
    } while (repetitions < 1);

    /* Set wich character will be used to draw on the terminal */

    printf(
        "Com qual caractere você gostaria que fosse desenhado o "
        "triangulo?\n");

    scanf(" %c", &choosedChar);

    printf("%c", -254);

    /* This script is far from ideal, his complexity is O(n^3) */
    while (repetitions > trianglesDrawn) {
        int lineSize = 0;

        while (triangleSize >= lineSize) {
            int charDraw = 0;

            while (lineSize > charDraw) {
                printf("%c", choosedChar);

                charDraw++;
            }
            printf("\n");

            lineSize++;
        }

        trianglesDrawn++;
    }

    return 0;
}