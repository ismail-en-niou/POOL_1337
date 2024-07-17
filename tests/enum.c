#include <stdio.h>

typedef enum {
    RED = 10,
    GREEN,
    BLUE
} colors;

int main() {
    colors myColor;
    myColor = RED;
        printf("The color is red. %d\n" , myColor);
    return 0;
}
