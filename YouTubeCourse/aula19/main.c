#include <stdio.h>
#include <stdlib.h>
int main(){
    long long int x = 2147483647;//increase to 8 bytes
    printf("Size of x in bytes: %d\n", sizeof x);
    printf("Value of x: %lld\n", x);
    x++;
    printf("Value of x: %lli\n", x);//%lld or %lli
    return 0;
}
