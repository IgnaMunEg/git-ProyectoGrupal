#include<stdlib.h>
#include<stdio.h>
#include<ctime>
#include<wchar.h>
#include<locale.h>


//void Burbuja(int N,int vector[]);
//void Insercion(int N,int vector[]);
//void Seleccion(int N,int vector[]);
//void QuickSort(int N,int vector[]);
//void MergeSort(int N,int vector[]);


main(){
	int metOrden,N;
	srand(time(NULL));
	setlocale(LC_ALL, "");
	
	printf("Seleccione un método de ordenamiento:\n");
	printf("1-Burbuja\n");
	printf("2-Inserción\n");
	printf("3-Selección\n");
	printf("4-QuickSort\n");
	printf("5-MergeSort\n");
	scanf("%d", &metOrden);
	printf("¿Cuántos números quiere generar?\n");
	scanf("%d", &N);
	
	int vector[N],may[N],menor[N];
	for(int i=0;i<N;i++){
		vector[i]=rand();
		
		}
	
	for(int i=0;i<N;i++){
		printf("%d -> %d\n",i+1,vector[i]);
	}
	
	srand (time(0));
	int t;	
	t = time(NULL);
	system("PAUSE");
	
	switch(metOrden){
		
		case 1:
//			Burbuja(N,vector);
			break;
		
		case 2:
//			Insercion(N,vector);
			break;
		
		case 3:
//			Seleccion(N,vector);
			break;
			
		case 4:
//			QuickSort(N,vector);
			break;
			
		case 5:
//			MergeSort(N,vector);
			break;
		
		default:
			printf("El número ingresado no está relacionado con ningúm método");	
	 	
		}
printf("\n\nTardo %d segundos", time(NULL)-t);
return 0;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

