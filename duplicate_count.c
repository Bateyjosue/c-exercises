#include <stddef.h>
#include <stdio.h>

size_t duplicate_count(const char *text) {

    //  <----  hajime!
    int i;
    int j;
    size_t count;
    
    i = 0;
    count = 1;
    while (text[i])
    {
        j = i + 1;
        while (text[j])
        {
        if (text[i] == text[j])
            count ++;
        }
        i++;
    }
    return (count);
}

int main(void)
{
    printf("\t|%ld|\t", duplicate_count("indivisibility"));
    return (0);
}