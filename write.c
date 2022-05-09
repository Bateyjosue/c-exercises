#include <unistd.h>
int main(){
    char *a;
    a = "Hello";
    write(1, &a[1ls], 1);
    return (0);
}