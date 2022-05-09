#include <stdio.h>
void main(){
    int a =10;
    int *pointer = &a;
    printf("|%d\t     | %d     |\n", *pointer,a);
    
}