#include<stdio.h>
int triple(int nombre);
void main(){
    int nombre = 0;
    printf("Enter the number to be tripled>\t");
    scanf("%d", &nombre);
    printf("%d * 3 = %d\n", nombre, triple(nombre));
}
int triple(int nombre){
    return nombre * 3;
}