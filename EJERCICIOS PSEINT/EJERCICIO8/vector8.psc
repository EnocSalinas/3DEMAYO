Proceso VectCal
	Definir n Como Entero;
	Definir i Como Entero;
	Definir vector1, vector2 Como Real;
	Definir producto Como Entero;
	Escribir 'introduzca la longitud de los vectores: ';
	Leer n;
	Dimensionar vector1(3);
	Dimensionar vector2(3);
	producto <- 0;
	Escribir 'Introduzca los elementos del vector 1: ';
	Para i<-1 Hasta n Con Paso 1 Hacer
		Escribir 'Ingrese el elemento ', i, ' del vector 1: ';
		Leer vector1[i];
	FinPara
	Escribir 'coloca los elementos del vector 2: ';
	Para i<-1 Hasta n Con Paso 1 Hacer
		Escribir 'Ingrese el elemento ', i, ' del vector 2: ';
		Leer vector2[i];
	FinPara
	Para i<-1 Hasta n Con Paso 1 Hacer
		producto <- producto+(vector1[i]*vector2[i]);
	FinPara
	Escribir 'El producto punto de los vectores es: ', producto;
FinProceso
