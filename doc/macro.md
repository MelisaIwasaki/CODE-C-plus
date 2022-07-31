# MACRO :man_technologist:
Una macro es una acción o un conjunto de acciones que se puede ejecutar todas las veces que desee. Cuando se crea una macro, se graban los clics del mouse y las pulsaciones de las teclas. Después de crear una macro, puede modificarla para realizar cambios menores en su funcionamiento.

Los macros son muy utilizados en C y C + +. Estos básicamente son un alias que podemos incluir en nuestro código el cual, al momento de compilar, será reemplazado por lo que hayamos definido.

````C++
#include
#define VALOR_MACRO 100
 
int main(){
    printf("El valor del macro es: %d", VALOR_MACRO);
}
La salida de este programa es: «El valor del macro es: 100».
````

Como puedes ver, lo que ocurrió fue que el compilador reemplazó todas las ocurrencias de VALOR_MACRO con 100.
Aunque esta es una aplicación de los macros, el potencial de estos está en que pueden recibir parámetros.
Veamos un ejemplo de cómo «acortar» un ciclo for.

````C++
#include
#define FOR(A,B) for(A = 0 ; A < B ; A++)
 
int main(){
    int i;
    FOR(i,5){
        printf("Estoy en el ciclo for hecho con macros e imprimo: %d", i);
    }
}
El código anterior es equivalente a este:
#include
 
int main(){
    int i;
    for(i = 0 ; i < 5 ; i++){
        printf("Estoy en el ciclo for hecho con macros e imprimo: %d\n", i);
    }
}
````

Ambos imprimen esto:

- Estoy en el ciclo for hecho con macros e imprimo: 0
- Estoy en el ciclo for hecho con macros e imprimo: 1
- Estoy en el ciclo for hecho con macros e imprimo: 2
- Estoy en el ciclo for hecho con macros e imprimo: 3
- Estoy en el ciclo for hecho con macros e imprimo: 4

Como puedes notar, el compilador reemplaza A por i y B por 5. 

Esto puede ser útil si tienes que escribir varias veces el mismo código y quieres ahorrar tiempo de tipeo, o bien, si quieres que sea más legible.

Aquí tenemos otro ejemplo de cómo podemos simular una función que retorna que número el número mayor entre dos números dados.

````C++
#include
#define maximo(a,b) (a > b) ? a : b
 
int main(){
 printf("El numero mayor entre 1 y 5 es: %d", maximo(1,5));
}
````
Pese a que hay gente en contra del uso de los macros (debido a que existen otras alternativas, como por ejemplo el uso de constantes o de Funciones en linea (inline functions)), yo cumplo con enseñarles que son y cómo utilizarlos.

# PUNTEROS EN C/C++
Los punteros son un tipo de dato especial, el cual guarda una dirección de memoria. Podemos usar un puntero para modificar un dato utilizando su dirección de memoria.
Los punteros deben apuntar a cierto tipo de dato (por ejemplo a int o a char, etc.). Por ejemplo, para guardar la dirección de memoria de una variable entera llamada «numero» (int), declaramos el puntero de la manera que sigue:
La declaración de un puntero es así:
````C++
int numero;

int * puntero;
 
puntero = &numero;
````
Primero que todo, notamos que la variable «puntero» se antepone de un asterisco, el asterisco (*) se utiliza para decirle al compilador que estamos declarando un puntero.
Luego notamos la asignación «puntero = &numero;». El operador «&» utilizado a la izquierda de una variable, nos da la dirección de memoria de dicha variable. Entonces lo que estamos haciendo en esa asignación es: «Obtenemos la dirección de memoria de ‘número’ y se la asignamos al puntero ‘puntero’ «.
Entonces ahora la variable «puntero» guarda la dirección de memoria de la variable «número».
Normalmente, si queremos modificar el valor de la variable «número», hacemos lo siguiente:
````
numero = 5;
````
Podemos realizar esa misma asignación utilizando punteros con el siguiente código:
````
*puntero = 5;
````
El operador «*» utilizado a la izquierda de un puntero, lo que hace es decirle al compilador: «A lo que esté apuntando el puntero ‘puntero’, asignarle el valor 5».
Ahora te preguntarás, ¿Para qué sirven los punteros?
Pues nos sirve para pasar datos que queremos trabajar directamente a una función, por ejemplo:
Supongamos que queremos calcular el cuadrado de dos números y guardar esos valores en las variables directamente, tenemos el siguiente programa:

````C++
</pre>
#include<iostream>
using namespace std;
 
void Cuadrado(int num1, int num2)
{
     num1 = num1*num1;
     num2 = num2*num2;
}
int main()
{
     int numero1 = 5, numero2 = 10;
     Cuadrado(numero1, numero2);
cout << "Numero1: " << numero1 << "\nNumero2: " << numero2 << endl;
}
<pre>
````

Esta función lo que hace es tomar el valor de numero1 y numero2 y copiarlos a  variables locales de la función llamadas num1 y num2, por lo tanto, si modificamos estos valores, no sucederá nada con los valores de numero1 y numero2, ya que no estamos trabajando con ellos, si no que con sus copias. Para modificar los valores de numero1 y numero2 directamente, utilizamos punteros de la siguiente manera:

````C++
</pre>
#include<iostream>
using namespace std;
void Cuadrado(int * num1, int * num2)
{
 *num1 = (*num1) * (*num1);
 *num2 = (*num2) * (*num2);
}
int main()
{
 int numero1 = 5, numero2 = 10;
 Cuadrado(&numero1, &numero2);
 cout << "Numero1: " << numero1 << "\nNumero2: " << numero2 << endl;
}
<pre>
````
Notarás que agregamos «*» en la declaración de la función, esto significa que los parámetros que le entregaremos a la función serán de tipo puntero, los cuales apuntan a un entero (int). Al utilizar (*num1), estamos trabajando con el valor de lo que está apuntando num 1, supongamos que la dirección de lo que apunta num1 es «120», y el valor al que apunta es «5», veamos si lo entiendes con lo siguiente:
[Modificamos lo que contiene la dirección 120] = 5*5;
Notarás, además, que en la llamada a la función escribimos:
````
Cuadrado(&numero1, &numero2);
````
Utilizamos el operador «&» para pasarle a la función la dirección de memoria de numero1 y numero2 respectivamente, debido a que la función lo que espera es un puntero a un entero.
Resumen:
- Para acceder a la dirección de memoria de una variable utilizamos «&».
- Para acceder al contenido de un puntero, utilizamos «*».

Utilizamos el operador «&» para pasarle a la función la dirección de memoria de numero1 y numero2 respectivamente, debido a que la función lo que espera es un puntero a un entero.
Resumen:
- Para acceder a la dirección de memoria de una variable utilizamos «&».
- Para acceder al contenido de un puntero, utilizamos «*».


