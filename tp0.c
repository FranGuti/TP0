#include "tp0.h"

/* *****************************************************************
 * Nombre: Francisco Gutierrez                                     *
 * Padrón: 103543                                                  *
 * *****************************************************************/

void swap (int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
}


int maximo(int vector[], int n){
	if(n == 0){
		return -1;
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		if(vector[i] > vector[max]){
			max = i;
		}
	}
    return max;
}

int comparar(int vector1[], int n1, int vector2[], int n2){
	for (int i=0; (i < n2) || (i < n1); i++){
        if (i==n2 && i<n1){
            return 1;
        }
        if (i==n1 && i<n2){
            return -1;
        }
        if (vector2[i]<vector1[i]){
            return 1;
        }
        if (vector1[i]<vector2[i]){
            return -1;
        }
    }
    return 0;
}


void seleccion(int vector[], int n){
	if(n <= 1){
		return;
	}
	int max = vector[0];
	for(int i = n - 1; i > 0; i--){
		max = maximo(vector, i+1);
		swap(&vector[max], &vector[i]);
	}
}
