Proceso calculoNotas
	Definir cantidad_alumnos, aprobados, reprobados, contador Como Entero;
	Definir suma_notas, promedio_general, nota Como Real;
	cantidad_alumnos <- 8;
	aprobados <- 0;
	reprobados <- 0;
	suma_notas <- 0;
	Para contador<-1 Hasta cantidad_alumnos Con Paso 1 Hacer
		Escribir 'Ingrese la nota del estudiante ', contador, ': ';
		Leer nota;
		suma_notas <- suma_notas+nota;
		Si nota>=6 Entonces
			aprobados <- aprobados+1;
		SiNo
			reprobados <- reprobados+1;
		FinSi
	FinPara
	promedio_general <- suma_notas/cantidad_alumnos;
	Escribir 'Cantidad de alumnos aprobados: ', aprobados;
	Escribir 'Cantidad de alumnos reprobados: ', reprobados;
	Escribir 'Promedio general del grupo: ', promedio_general;
FinProceso
