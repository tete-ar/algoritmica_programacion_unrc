/*

///////////////////////////////////////////////////////////////////////////////

Ejercicio 7:
Analisis:
Lo que el problema pide: Dados 2 angulos con grados*minutos*segundos*, realizar
una funcion que sume ambos angulos y los denote grados, min<60, seg<60.
Los angulos compartes una misma estructura de datos.

Diseño:

Algoritmo
Lexico

tipo estructura
{
grados e R
minutos e R
segundos e R
}
TAngulo

Inicio

TAngulo angulo1
TAngulo angulo2
TAngulo angulo3

Entrada: angulo1.grados
         angulo1.minutos
         angulo1.segundos

Entrada: angulo2.grados
         angulo2.minutos
         angulo2.segundos


Salida: sumaAngulos(angulo1, angulo2)

funcion sumaAngulos(TAngulo *a1, TAngulo *a2)

Lexico local
sumaGra,sumaMin,sumaSeg,a1, a2 e R

Inicio

sumaGra = a1.grados + a2.grados

mientras sumaSeg>=60 hacer
  sumaSeg = sumaSeg - 60
  sumaMin++
fmientras

mientras sumaMin>=60 hacer
  sumaMin = sumaMin - 60
  sumaGra++
fmientras

TAngulo->a3

salida: a3.grados = sumaGra
        a3.minutos = sumaMin
        a3.segundos = sumaSeg

fFuncion

Fin

///////////////////////////////////////////////////////////////////////////////

Ejercicio 9
Analisis: El programa recibe como entrada un dato tipo caracter y hay que revisar
si el caracter es consonante, vocal, signo o numero. Aplicar 2 funciones:
1er funcion para saber si son consonantes o no y la 2da para saber si son vocales
o no.

Diseño:
Lexico

a e Caracter

Inicio

Entrada: a

a.lower
si a>='a' y a<='z' entonces
  consonante(a)
  vocal(a)
  si consonante(a) entonces
    respuesta = "es una consonante"
  si vocal(a) entonces
    respuesta = "es una vocal"
sino a>='[' y a<='`' o a>='{' a<='~' entonces
  respuesta = "es un signo"
sino
  respuesta = "es un numero"

funcion consonante (a)
lexico local

salida boolean

Inicio

si a>='b' y a<='d' o a>='f' y a<='h' o a>='j' y a<='n' o a>='p' y a<='t' o a>='v' y a<='z' entonces
  salida:true

fFuncion

funcion vocal(a)
lexico local

salida boolean

Inicio

si a=='a' o a=='e' o a=='i' o a=='o' o a=='u' entonces
  salida:true

fFuncion

Fin

///////////////////////////////////////////////////////////////////////////////

Ejercicio 12
Analisis: El programa necesita una funcion que calcule los puntos que posee el
jugador en su respectiva mano.

Diseño:
lexico
tipo estructura
{
valor e R
palo e Cadena
}
carta

Inicio

carta->carta1
carta->carta2
carta->carta3

Entrada: carta1.valor
         carta1.palo
         carta2.valor
         carta2.palo
         carta3.valor
         carta3.palo

Salida: puntos(carta1, carta2, carta3)

funcion puntos (carta *c1, carta *c2, carta *c3)
Lexico local

puntos e R

Inicio

si c1.valor >=10 entonces
  c1.valor = 0
si c2.valor >=10 entonces
  c2.valor = 0
si c3.valor >=10 entonces
  c3.valor = 0


si c1.palo == c2.palo y c1.palo==c3.palo entonces
  puntos = c1.valor + c2.valor + c3.palo + 20
sino c1.palo == c2.palo entonces
  puntos = c1.valor + c2.valor + 20
sino c1.palo == c3.palo entonces
  puntos = c1.valor + c3.valor + 20
sino c2.palo == c3.palo entonces
  puntos = c2.valor + c3.valor + 20
sino
  puntos = 0

salida: puntos

fFuncion


Fin
*/
