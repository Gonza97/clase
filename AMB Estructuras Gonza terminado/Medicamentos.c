#include <stdio.h>
#include "Medicamentos.h"

void cargarMedicamentos(eMedicamento lista[], int t)
{
    int i;
     for(i=0; i<t; i++)
    {
        if(lista[i].estado==0)
        {
            printf("Ingrese codigo: ");
            scanf("%d", &lista[i].codigo);
            printf("Ingrese descripcion: ");
            fflush(stdin);
            gets(lista[i].descripcion);
            printf("Ingrese precio: ");
            scanf("%f", &lista[i].precio);
            printf("Ingrese laboratorio: ");
            fflush(stdin);
            gets(lista[i].laboratorio);

            lista[i].estado = 1;

            break;
        }

    }
}
void mostraTodosMedicamentos(eMedicamento lista[], int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarMedicamento(lista[i]);
        }

    }
}
void mostrarMedicamento(eMedicamento med)
{
    printf("%d--%s--%f--%s\n", med.codigo, med.descripcion, med.precio, med.laboratorio);
}

void ordenarMedicamentos(eMedicamento lista[], int tam)
{
    int i, j;
    eMedicamento auxMedicamento;

    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {

            if(stricmp(lista[i].descripcion, lista[j].descripcion)>0)
            {
                auxMedicamento=lista[i];
                lista[i]=lista[j];
                lista[j]=auxMedicamento;

            }
        }
    }
}

void inicializarMedicamentos(eMedicamento lista[], int tam)
{
    int codigo[]={1,2,3};
    char descripcion[][50]={"Valium","Ibuprofeno","Diclofenac"};
    float precio[]={5,10,7};
    char laboratorio[][30]={"Bago","Bayer","Roemer"};
    int estado[]={1,1,1};

    int i;

    for(i=0; i<tam; i++)
    {
        lista[i].codigo = codigo[i];
        lista[i].precio = precio[i];
        lista[i].estado = estado[i];
        strcpy(lista[i].descripcion,descripcion[i]);
        strcpy(lista[i].laboratorio,laboratorio[i]);
    }




}
void modificarMedicamentos(eMedicamento lista[], int tam)
{
    int codigo;
    int i;
    int flag = 0;
    char auxString[50];
    char rta;
    char auxInt;

    printf("Ingrese codigo: ");
    scanf("%d", &auxInt);

    for(i = 0; i<tam; i++)
    {
        if(auxInt == lista[i].codigo)
        {
            flag = 1;
            mostrarMedicamento(lista[i]);
            printf("Ingrese nuevo laboratorio");
            gets(auxString);
            printf("�Desea modificar? :");
            fflush(stdin);
            rta = getche();
            if(rta == 's')
            {
                strcpy(lista[i].laboratorio, auxString);
            }
            else
            {
                printf("Accion cancelada");
            }
            break;
        }
    }
    if(flag == 0)
    {
        printf("No existe el codigo");
    }

}
void eliminarMedicamento(eMedicamento lista[], int tam)
{
    int codigo;
    int i;
    int flag = 0;
    char auxString[50];
    char rta;
    char auxInt;

    printf("Ingrese codigo: ");
    scanf("%d", &auxInt);

    for(i = 0; i<tam; i++)
    {
        if(auxInt == lista[i].codigo)
        {
            flag = 1;
            mostrarMedicamento(lista[i]);

            printf("Desea eliminar? :");
            rta = getche();
            if(rta == 's')
            {
                lista[i].estado = 0;
            }
            else
            {
                printf("Accion cancelada");
            }
            break;
        }
    }
    if(flag == 0)
    {
        printf("No existe el codigo");
    }
}

