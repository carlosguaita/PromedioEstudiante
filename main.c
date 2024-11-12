#include <stdio.h>

int main (int argc, char *argv[]) {
    float n1;
    float n2;
    float promedio;
    int asistencia;

    //float n1, n2, promedio;

    printf("Ingrese la nota 1: ");
    scanf("%f",&n1);

    printf("Ingrese la nota 2: ");
    scanf("%f",&n2);

    printf("Ingrese la asistencia: ");
    scanf("%d",&asistencia);

    promedio=(n1+n2)/2;
    printf("El promedio es: %f\n",promedio);

    if (promedio>=6){
        printf("Aprobado\n");
    }else if(asistencia>=80){
        printf("Recuperacion\n");
    }else{
        printf("Reprueba\n");
    }


    return 0;
}