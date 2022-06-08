/* Hacer un problema libre con respecto a lo visto en clase el día 4/6/22 (Vectores dinámicos).

- Hallar el promedio de las notas de los estudiantes en un examen y la cantidad de aprobados */

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i , cont = 0;

    float *v, promedio;

    printf("Ingrese el numero de estudiantes que cursan la materia: ");
    scanf("%d", &n);

    v = (float *) malloc (n* sizeof(float));

    promedio = 0 ;

    for( i= 0 ; i < n; i++){

        printf("\nNota del estudiante #%d: ", i +1 );
        scanf("%f", &v[i]);
        promedio = promedio + v[i];
    }

    promedio =  promedio/ n;

    for( i= 0 ; i < n; i++ ){

        if( v[i] >= 10){
            cont++;
        }
    }

    printf("\nEl promedio de las notas de todos los estudiantes es igual a: %.2f", promedio);
    printf("\nSe tienen %d estudiantes que aprobaron el examen", cont);

    free(v);

return 0 ;
}
