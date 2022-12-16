#include <stdio.h>

int main() {
    int i=0;
    int numero=30;
    while (i<=numero){
        if(i%2==0){
            if(i%4==0){
                printf("%d\n",i);
            }
        }
        i++;
    }
    return (0);
}


