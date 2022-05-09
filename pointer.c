#include <stdio.h>
int main(){
    int tab[4] = {1,2,3,4};
    int i =0;
    for (i = 0; i < 4; i++){
        printf("%d\n",*tab+i);
    }
    return 0;
}