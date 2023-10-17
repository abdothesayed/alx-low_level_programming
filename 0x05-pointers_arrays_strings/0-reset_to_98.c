#include <stdio.h>

void Update(int *pointer) {

    *pointer = 98;
}

int main() {
    int num = 354;
    printf("\n%d\n\n", num);
    Update(&num);
    printf("\n%d\n\n", num);
    return 0;
}   
