 typedef struct
    {
        int dia;
        int mes;
    }eFecha


    typedef struct
   {
       int codigoLab;
       char nombre[50];
       char direccion[30];
       char telefono[30];
   }eLaboratorio


   typedef struct
   {
       int codMedicamento;
       char descripcion[50];
       float precio;
       int codigoLab;
       int stock;
       int elaboracion;
       int vencimiento;
   }eMedicamento


   typedef struct
   {
       int codigoCl;
       char nombre[50];
       int codMedicamento;
   }eCliente

void inicializarMedicamentos(eMedicamento, int tam);
void inicializarLaboratorio(eLaboratorio, int tam);
void inicializarClientes(eCliente, int tam);
