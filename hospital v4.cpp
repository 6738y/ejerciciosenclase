/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO int

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

// Declaraciones adelantadas de las funciones
SIN_TIPO num_medicamento(char *medicamento, int nummedicamento, SIN_TIPO tempra, SIN_TIPO rosuvastatina, SIN_TIPO dinogest, SIN_TIPO diclofenaco);
SIN_TIPO datospersonalesdelpaciente(int nombre_del_paciente, float cuarto, SIN_TIPO medicamento, char *sexo, float edad, char *diagnostico);

int num_medicamento(char *medicamento, int nummedicamento, int tempra, int rosuvastatina, int dinogest, int diclofenaco) {
	switch (nummedicamento) {
	case 1:
		medicamento = "tempra";
		printf("su medicamento es %s\n",medicamento);
		break;
	case 2:
		medicamento = "rosuvastatina";
		printf("su medicamento es %s\n",medicamento);
		break;
	case 3:
		medicamento = "dinogest";
		printf("su medicamento es %s\n",medicamento);
		break;
	case 4:
		medicamento = "diclofenaco";
		printf("su medicamento es %s\n",medicamento);
		break;
	default:
		printf("no tenemos ese medicamento\n");
	}
	return ;
}

SIN_TIPO datospersonalesdelpaciente(int nombre_del_paciente, float cuarto, SIN_TIPO medicamento, char *sexo, float edad, char *diagnostico) {
	int diclofenaco;
	int dinogest;
	char nummedicamento[MAX_STRLEN];
	int rosuvastatina;
	int tempra;
	switch (nombre_del_paciente) {
	case 1:
		sexo = "femenino";
		edad = 25;
		diagnostico = " fiebre";
		nummedicamento == "1";
		cuarto = 1;
		printf("su nombre es maria\n");
		printf("sexo= %s\n",sexo);
		printf("edad= %f\n",edad);
		printf("diagnostico= %s\n",diagnostico);
		printf("%scorrespondiente al medicamento numero %s\n",num_medicamento(medicamento,nummedicamento,tempra,rosuvastatina,dinogest,diclofenaco),nummedicamento);
		printf("su cuarto asignado es %f\n",cuarto);
		break;
	case 2:
		sexo == "masculino";
		edad = 30;
		diagnostico == " problema cardiovascular";
		nummedicamento == "2";
		cuarto = 2;
		printf("su nombre es marcos\n");
		printf("sexo= %s\n",sexo);
		printf("edad= %f\n",edad);
		printf("diagnostico= %s\n",diagnostico);
		printf("%scorrespondiente al medicamento numero %s\n",num_medicamento(medicamento,nummedicamento,tempra,rosuvastatina,dinogest,diclofenaco),nummedicamento);
		printf("su cuarto asignado es %f\n",cuarto);
		break;
	case 3:
		sexo = "masculino";
		edad = 18;
		diagnostico = " antoconcepcion";
		nummedicamento == "3";
		cuarto = 3;
		printf("su nombre es luis\n");
		printf("sexo= %s\n",sexo);
		printf("edad= %f\n",edad);
		printf("diagnostico= %s\n",diagnostico);
		printf("%scorrespondiente al medicamento numero%s\n",num_medicamento(medicamento,nummedicamento,tempra,rosuvastatina,dinogest,diclofenaco),nummedicamento);
		printf("su cuarto asignado es %f\n",cuarto);
		break;
	default:
		printf("error\n");
	}
	return ;
}

int main() {
	int cuarto;
	char diagnostico;
	char diagnostico_n;
	int diclofenaco;
	int dinogest;
	int edad;
	int edad_n;
	char medicamento;
	char nombre_del_paciente;
	char nombre_del_paciente_nuevo;
	int nummedicamento;
	int op;
	int rosuvastatina;
	char sexo;
	char sexo_n;
	int tempra;
	printf("¿que desea realizar?\n");
	printf("escriba 1 si desea ver el historial de un paciente\n");
	printf("escriba 2 si desea registrar un nuevo paciente \n");
	printf("escriba 3 si desea salir \n");
	scanf("%i",&op);
	switch (op) {
	case 1:
		printf("ingrese el nombre del paciente\n");
		scanf("%s",nombre_del_paciente);
		printf("%s\n",datospersonalesdelpaciente(nombre_del_paciente,cuarto,medicamento,sexo,edad,diagnostico));
		break;
	case 2:
		printf("ingrese el nombre del paciente\n");
		scanf("%s",nombre_del_paciente_nuevo);
		printf("escribir( f) si es femenino o (m )si es masculino\n");
		scanf("%s",sexo_n);
		printf("ingrese la edad del paciente\n");
		printf("%s\n",edad_n);
		scanf("%s",edad_n);
		printf("cual es su diagnostico\n");
		scanf("%s",diagnostico_n);
		printf("escriba su numero de medicamento\n");
		scanf("%s",nummedicamento);
		printf("%s\n",num_medicamento(medicamento,nummedicamento,tempra,rosuvastatina,dinogest,diclofenaco));
		break;
	case 3:
		break;
	default:
		printf("error\n");
	}
	return 0;
}

