#include<stdio.h>
int main(){
    int choixMenu  = 0;
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n2. MC Deluxe\n3.MC Bacon\n4. Big Mac");
    printf("\nVotre choix?>");
    scanf("%d", &choixMenu);
    switch(choixMenu){
        case 1: printf("\ntu as choisi le menu Royal Cheese\n"); break;
        case 2: printf("\ntu as choisi le menu MC Deluxe\n"); break;
        case 3: printf("\ntu as choisi le menu MC Bacon\n"); break;
        case 4: printf("\ntu as choisi le menu Big Mac\n"); break;
        default: printf("\nTu choix ne pas precis\n");
    }

    return 0;
}