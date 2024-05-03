Proceso LongVect
	Definir n Como Real;
	Definir i Como Entero;
	Definir vector1, vector2, vectorSuma Como Real;
	Escribir 'Introduzca la longitud de los vectores: ';
	Leer n;
	Dimensionar vector1(10);
	Dimensionar vector2(10);
	Dimensionar vectorSuma(10);
	Escribir 'Introduzca los elementos del vector 1: ';
	Para i<-1 Hasta n Con Paso 1 Hacer
		Escribir 'Ingrese el elemento ', i, ' del vector 1: ';
		Leer vector1[i];
	FinPara
	Escribir 'Introduzca los elementos del vector 2: ';
	Para i<-1 Hasta n Con Paso 1 Hacer
		Escribir 'Ingrese el elemento ', i, ' del vector 2: ';
		Leer vector2[i];
	FinPara
	Para i<-1 Hasta n Con Paso 1 Hacer
		vectorSuma[i] <- vector1[i]+vector2[i];
	FinPara
	Escribir 'La suma de los vectores es: ';
	Para i<-1 Hasta n Con Paso 1 Hacer
		Escribir vectorSuma[i];
	FinPara
FinProceso
