#include <stdio.h>
#include <stdlib.h>
#define  t 2
// Puntero para devolver valor por referencia

struct compania{
int ganancia_total;
int GananciaPorTaxista;
int ganancias_compani;
struct Taxistas{
    char nombre[20];
    int edad;
    char sexo;
    int cedula;
    char vehiculo[20];
    char placa[10];
    int NumUnidad;
    int fecha_de_inicio_de_contrato;
    int Num_Viajes;
    int Ganan_mes;
    struct viajes{
        int DiaViaje;
        int HoraViaje;
        int TiempoViaje;
        }VIA[100];
    }TAXI[t];
}COMP;

int i=0;
int j=0;

void ingresar_datos_taxistas(int *aux);
void Presentar();
void Viajes();
int main()
{
int a=0,aux=0;
    printf("Bienvenido al programa Ober\n");
    while(1){
    printf("Elija el numero de la accion que desee realizar: \n\n");
    printf("1. Agregar taxistas\n");
    printf("2. Presentar datos\n");
    printf("3. Editar viajes taxistas EN REVICION\n");
    printf("4. Buscar viaje\n");
    printf("0. Salir\n");

    scanf("%d",&a);

        switch(a){
    case 1: system("cls");
        ingresar_datos_taxistas(&aux);
        //printf("\nAl salir de la funcion aux vale: %d\n",aux);
        break;
    case 2: system("cls");
        Presentar();
        break;
    case 3: system("cls");
        Viajes();
        break;
        }

    }

    return 0;
}
void ingresar_datos_taxistas(int *aux){
int x=0;
    for(i=*aux;i<*aux+1;i++){
            //printf("\nAux vale: %d\n",*aux);
        printf("Taxista %d: \n\n",i+1);

        printf("Nombre: ");
        scanf("%s",COMP.TAXI[i].nombre);
        printf("Edad: ");
        scanf("%d",&COMP.TAXI[i].edad);
        printf("Sexo: ");
        scanf(" %c",&COMP.TAXI[i].sexo);
        printf("Cedula: ");
        scanf("%d",&COMP.TAXI[i].cedula);
        printf("Vehiculo: ");
        scanf("%s",&COMP.TAXI[i].vehiculo);
        printf("Placa del vehiculo: ");
        scanf("%s",&COMP.TAXI[i].placa);
        printf("Numero de la Unidad: ");
        scanf("%d",&COMP.TAXI[i].NumUnidad);
        printf("Numero de viajes: ");
        scanf("%d",&COMP.TAXI[i].Num_Viajes);
        x = COMP.TAXI[i].Num_Viajes;
            for(j=0;j<x;j++){
                    printf("Viaje: %d\n\n",j+1);
                    printf("Dia del viaje: ");
                    scanf("%d",&COMP.TAXI[i].VIA[j].DiaViaje);
                    printf("Hora del viaje: ");
                    scanf("%d",&COMP.TAXI[i].VIA[j].HoraViaje);
                    printf("Duracion del viaje en minutos: ");
                    scanf("%d",&COMP.TAXI[i].VIA[j].TiempoViaje);
                    printf("\n");

    }
    } *aux+=1;
}
void Presentar(){
    for(i=0;i<2;i++){
        printf("Chofer %d: \n\n",i+1);
        printf("Nombre: %s\n",COMP.TAXI[i].nombre);
        printf("Edad: %d\n",COMP.TAXI[i].edad);
        printf("Sexo: %c\n",COMP.TAXI[i].sexo);
        printf("Cedula: %d\n",COMP.TAXI[i].cedula);
        printf("Vehiculo: %s\n",COMP.TAXI[i].vehiculo);
        printf("Placa: %s\n",COMP.TAXI[i].placa);
        printf("Unidad: %d\n",COMP.TAXI[i].NumUnidad);
        printf("Viajes: %d\n",COMP.TAXI[i].Num_Viajes);
        printf("\n");

    }


}

void Viajes(){
int y=0,x=0;
        printf("Ingrese la Unidad del taxista: ");
        scanf("%d",&y);
        for(i=0;i<1000;i++){
            if((COMP.TAXI[i].NumUnidad == y)){
                x = COMP.TAXI[i].Num_Viajes;
                printf("\nTaxista: %s\n",COMP.TAXI[i].nombre);
                for(j=0;j<x;j++){
                    printf("Viaje: %d\n\n",j+1);
                    printf("Dia del viaje: ");
                    scanf("%d",&COMP.TAXI[i].VIA[j].DiaViaje);
                    printf("Hora del viaje: ");
                    scanf("%d",&COMP.TAXI[i].VIA[j].HoraViaje);
                    printf("Duracion del viaje en minutos: ");
                    scanf("%d",&COMP.TAXI[i].VIA[j].TiempoViaje);

                }

            }


        }


}
