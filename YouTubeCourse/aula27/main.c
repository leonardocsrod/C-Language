#include <stdio.h>
#include <stdlib.h>
/*
        Class 27
        increment - ++
*/
int main(){
    int count = 10;
    printf("count: %d\n" , count);

    //count++;
    //count += 1;
    printf("count[after increment]: %d\n", count++);
    printf("count[after increment]: %d\n", count);
     printf("count[after increment]: %d\n", ++count);
    return 0;
}
