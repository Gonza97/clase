#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef struct
    {
        int i;
        int codigo;
        char nombre[50];
        float precio;
        char laboratorio[30];
    }eMedicamento;
int main()
{
   eMedicamento medicamento1;
   medicamento1.codigo = 701;//el codigo se guarda en la variable no en la estructura.
   medicamento1.precio = 105.40;//No va coma, es un punto.
   strcpy(medicamento1.nombre, "Amoxicilina");
   strcpy(medicamento1.laboratorio, "Farmacia97");

   printf("%d--%.2f--%s--%s\n",medicamento1.codigo, medicamento1.precio, medicamento1.nombre, medicamento1.laboratorio);


   eMedicamento medicamento2;
   medicamento2.codigo = 802;//el codigo se guarda en la variable no en la estructura.
   medicamento2.precio = 40.20;//No va coma, es un punto.
   strcpy(medicamento2.nombre, "Bayaspirina");
   strcpy(medicamento2.laboratorio, "Farmacity");

   printf("%d--%.2f--%s--%s\n",medicamento2.codigo, medicamento2.precio, medicamento2.nombre, medicamento2.laboratorio);


   eMedicamento medicamento3 = {902,"Ibu",90.50,"Bayer"};//El mismo esquema que en la estructura principal(afuera de main)

    printf("%d--%s--%.2f--%s\n",medicamento3.codigo, medicamento3.nombre, medicamento3.precio, medicamento3.laboratorio);

    /*  eMedicamento medicamento1; //todos los datos se guardan en la variable
    medicamento1.codigo=700;
    medicamento1.precio=105,40;
    strcpy(medicamento1.nombre,"amoxicilino");//se usa strcpy si la funcion es un char de array.
    strcpy(medicamento1.laboratorio,"laboratorio");

    eMedicamento medicamento2;
    medicamento2.codigo=400;
    medicamento2.precio=15,50;
    strcpy(medicamento2.nombre,"ibuprofeno");
    strcpy(medicamento2.laboratorio,"laboratorio2");



    printf("%d\n%s\n%1.f\n%s\n",medicamento1.codigo,medicamento1.nombre,medicamento1.precio,medicamento1.laboratorio);

    printf("%d\n%s\n%2.f\n%s",medicamento2.codigo,medicamento2.nombre,medicamento2.precio,medicamento2.laboratorio);*/


    /*eMedicamento medicamento3= {40,"aspi",9.00,"lab3"};// mas facil de colocar los datos
    eMedicamento medicamento5;
 el 5 recibe medicamentos del 3
    medicamento5.codigo=medicamento3.codigo;
    strcpy(medicamento5.nombre,medicamento3.nombre);
    medicamento5.precio=medicamento3.precio;
    strcpy(medicamento5.laboratorio,medicamento3.laboratorio);
    printf("\n su codigo es :%d",medicamento5.codigo);
    printf("\n su nombre es :%s",medicamento5.nombre);
    if(medicamento3.codigo==medicamento5.codigo && strcmp(medicamento3.nombre,medicamento5.nombre)==0){

        printf("\n es igual");
    }
else{

    printf("no es igual");
}


    /*printf("%d\n%s\n%f\n%s",medicamento3.codigo,medicamento3.nombre,medicamento3.precio,medicamento3.laboratorio);

   /* eMedicamento medicamento4;
    printf("ingrese codigo:");
    scanf("%d",&medicamento4.codigo);
    printf("El codigo es: %d" , medicamento4.codigo);
    printf("escribe el nombre:\n");
    gets(medicamento4.nombre);
    printf("El nombre es: %s ",medicamento4.nombre);*/

    eMedicamento listaMedicamentos[3];
int i;
    for(i = 0; i<3; i++)
    {
        printf("codigo");
        scanf("%d", &listaMedicamentos[i].codigo);
        printf("nombre");
        fflush(stdin);//Para limpiar basura del codigo
        gets(listaMedicamentos[i].nombre);
    }
    for(i = 0; i<3; i++)
    {
        printf("%d--%s\n", listaMedicamentos[i].codigo, listaMedicamentos[i].nombre);

    }

    void cargarMedicamentos(eMedicamento[],int);
    void mostrarMedicamentos(eMedicamento[],int);
    void mostrarMEdicamento(eMedicamento);







    return 0;
}
//EJEMPLO
//eMedicamento medicamento2 = {40, "Ibu", 90, "Bayer"};
