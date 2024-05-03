Proceso promedio_seccion
	Definir suma, promedio, nota Como Real;
	Definir contador Como Entero;
	suma <- 0;
	Para contador<-1 Hasta 10 Con Paso 1 Hacer
		Escribir 'Ingrese la nota del estudiante ', contador, ': ';
		Leer nota;
		suma <- suma+nota;
	FinPara
	promedio <- suma/10.0;
	Escribir 'El promedio general de la sección es: ', promedio;
FinProceso
