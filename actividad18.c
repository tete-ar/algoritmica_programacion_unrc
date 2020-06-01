/*
Actividad 18 
3)
Analisis: 
	Dado un a�o ver si es bisiesto o no. Los a�os bisiestos son divisibles por 4 
y no por 100 pero si son divisibles por 100, no por 400.

Dise�o:

Funcion bisiesto(a�o)

Lexico local

a�o incluido en R
bisiesto incluido en Char

Inicio

	si resto(a�o/4)=0 y resto(a�o/100)!=0 entonces 
		bisiesto = "si es bisiesto"
	si resto(a�o/100)=0 y resto(a�o/400)!=0 entonces
		bisiesto = "si es bisiesto"
	sino
		bisiesto = "no es bisiesto"
	fsi
	
	Salida: bisiesto
	
Ffuncion

4)
Analisis:
	Hacer una funcion que tome como parametros 2 puntos en un eje cartesiano y calcular
la distancia entre ambos puntos.

Dise�o:

Funcion distancia (Tpunto1, Tpunto2) <int>

Lexico local

Tpunto1[x1,y1], Tpunto2[x2,y2], x1,x2,y1,y2, distancia incluido en R

Inicio
	
	distancia = ((Tpunto2[0]-Tpunto1[0])+(Tpunto2[1]-Tpunto1[1]))^1/2 
	
	Salida: abs(distancia)
	
Ffuncion

5)
Analisis:
	Dado 6 numeros y utilizando ((A+B)+abs(A-B))/2. Esta funcion devuelve
el valor de A si A es mayor a B. Construir una funcion que devuelva el
numero mayor ingresado.

Dise�o:

Funcion mayor (x1,x2,x3,x4,x5,x6) <int>

Lexico local

x1,x2,x3,x4,x5,x6,mayor,a,b,c incluido en R

Inicio
	((x1+x2)+abs(x1-x2))/2 = a 
	((x3+x4)+abs(x3-x4))/2 = b
	((x5+x6)+abs(x5-x6))/2 = c
	
	si a>b y a>c entonces
		mayor = a
	si b>a y b>c entonces
		mayor = b
	si c>a y c>b entonces
		mayor = c
	fsi
	
	Salida: mayor

Ffuncion
*/


