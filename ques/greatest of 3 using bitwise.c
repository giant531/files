#include <stdio.h>

int getMax(int x, int y, int z) {
    int r  =  (x + ~((x+~y+1) & ((x+~y+1) >> 31))+1); // if possible use sizeof(int)*sizeof(char)+~0 instead of 31
    int r2 =  (z + ~((z+~r+1) & ((z+~r+1) >> 31))+1); // if possible use sizeof(int)*sizeof(char)+~0 instead of 31
    return  r2;
}

int main(void) {
    unsigned int a = 5, b = 7, c = 1;

    printf("%d", getMax(a,b,c));
    return 0;
}
