#include <stdio.h>
#include <math.h>

    int main(){

        double A, B, C, raiz1, raiz2, delta, raizDelta;
        scanf("%lf %lf %lf", &A, &B, &C);

        delta = (B*B) - (4 * (A*C));
        raizDelta = sqrt(delta);
        raiz1 = ((-B) + raizDelta);
        raiz2 = ((-B) - raizDelta);

        if (A == 0 || delta < 0) {

            printf("Impossivel calcular\n");

        } else {
            printf("R1 = %.5lf\n", raiz1/(2*A));
            printf("R2 = %.5lf\n", raiz2/(2*A));
        };



        return 0;
    }