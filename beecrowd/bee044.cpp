#include <stdio.h>
int main(){
    int A, B;
    bool multiplos;
    scanf("%d %d", &A, &B);

    if(A%B==0 || B%A==0){
        multiplos = true;
    } else {
        multiplos = false;
    }

    if (multiplos==true)
    {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    


    return 0;
}