/******************************************************************************

                              Online C++ Compiler.
               Curso de Miguel Taboada de You Tube
*******************************************************************************/
//Primer pgograma 

#include <iostream> //libreria, input output stream:entrada y salida de datos

using namespace std; //lo mismo que std::cout<<

int main()  //funcion, int:entero
{
    
    cout<<"Hello World";
    
    cout<<"Hello World"<<endl; //endline, salto de linea
    
    cout<<"Hello World\n"; //lo mismo que endl, salto de linea

    return 0; //tiene que retornar algo para que programa finalice correctamente
}             //retorna un entero

********************************************************************************************
//Tipos de datos basicos de c++

#include <iostream>

using namespace std;

int main()
{
    int entero = 15; //definiendo la variable
    float flotante = 15.85; //real
    double mayor = 16.3465; 
    char letra = 'A';
    
    cout<<entero;
    
    cout<<flotante;
    
    cout<<mayor;
    
    cout<<letra;
    
    return 0;
}

***************************************************************************************************
//Lectura o entrada de datos        /* comentar */

#include <iostream>

using namespace std;

int main()
{
    int numero; //podes cambiar a un flotante,solo cambiando int por float
    
    cout<<"Digite un numero:";
    
    cin>>numero; //guardando la variable 
    
    cout<<"\nEl numero que digito es:"<<numero;
    
    return 0;
}

*************************************************************************************************************
/*Escribe un programa que lea la entrada estándar dos números y muestre en la salida estándar su suma, resta,
multiplicación y división*/

#include <iostream>

using namespace std;

int main()
{
   int n1,n2,suma = 0, resta = 0, multiplicacion = 0, division = 0;
   
   cout<<"Digite un numero:"; cin>>n1;
   cout<<"Digite otro numero:"; cin>>n2;
   
   suma = n1 + n2;
   resta = n1 - n2;
   multiplicacion = n1* n2;
   division = n1 / n2;
   
   cout<<"\nLa suma es:"<<suma<<endl;
   cout<<"La resta es:"<<resta<<endl;
   cout<<"La multiplicacion es:"<<multiplicacion<<endl;
   cout<<"La division es:"<<division<<endl;
   
   return 0; 
}

*************************************************************************************************
/*Realice un programa que lea la entrada estándar los siguientes datos de una persona:
    edad:dato de tipo entero
    sexo:dato de tipo caracter
    altura en metros:dato de tipo real
Tras leer los datos*/

#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10]; //guardando 10 espacios, 10 caracteres
    float altura;
    
    cout<<"Digite su edad:"; cin>>edad;
    cout<<"Digite su sexo:"; cin>>sexo;
    cout<<"Digite su altura en metros:"; cin>>altura;
    
    cout<<"\nEdad:"<<edad<<endl;
    cout<<"Sexo:"<<sexo<<endl;
    cout<<"Altura en metros:"<<altura<<endl;
    
    return 0;
}

*********************************************************************************************
//Escribe la siguiente expresión como c++  a/b +1


#include <iostream>

using namespace std;

int main()
{
    float a,b,resultado = 0;
    
    cout<<"Digite el valor de a:"; cin>>a;
    cout<<"Digite el valor de b:"; cin>>b;
    
    resultado = (a/b)+1;
    
    cout.presicion(2); //el numero que quieres que se dedondee
    cout<<"\nEl resultado es:"<<resultado<<endl;
    
    return 0;
}

**************************************************************************
//Escribe la siguiente expresión como c++ (a+ b/c)/(d+ e/f)

#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f,resultado = 0;
    
    cout<<"Digite el valor de a:"; cin>>a;
    cout<<"Digite el valor de b:"; cin>>b;
    cout<<"Digite el valor de c:"; cin>>c;
    cout<<"Digite el valor de d:"; cin>>d;
    cout<<"Digite el valor de e:"; cin>>e;
    cout<<"Digite el valor de f:"; cin>>f;
    
    resultado = (a+ b/c)/(d+ e/f);
    
    cout.presicion(3);
    cout<<"\nEl resultado es:"<<resultado<<endl;
    
    return 0;
}
***********************************************************************************
/*Escriba un fragmento de programa que intercambie los valores de dos variables.*/

#include <iostream>

using namespace std;

int main()
{
    int x,y,aux;
    
    cout<<"Digite el valor de x:"; cin>>x;
    cout<<"Digite el valor de y:"; cin>>y;
    
    aux = x;
    x = y;
    y = aux;
    
    cout<<"\nEl nuevo valor de x es:"<<x<<endl;
    cout<<"El nuevo valor de y es:"<<y<<endl;
    
    return 0;
}

********************************************************************************
/*La calificación final de un estudiante es la media ponderada de tres notas:
La nota de prácticas que cuenta un 30% en total, la nota teórica que cuenta un 60% y la nota de participación 
que cuenta el 10% restante.Escriba un programa que lea de la entrada estándar las tres notas de un alumno y 
escriba en la salida estándar su nota final.*/

#include <iostream>

using namespace std;

int main()
{
    float practica,teorica,participacion,nota_final = 0;
    
    cout<<"Digite la nota de practica"; cin>>practica;
    cout<<"Digite la nota teorica"; cin>>teorica;
    cout<<"Digite la nota de participacion"; cin>>participacion;
    
    practica *= 0.30;  //practica = practica*0.30;
    teorica *= 0.60;  //teorica = teorica*0.60;
    participacion *= 0.10;  //participacion = participacion*0.10;
    
    nota_final = practica + teorica + participacion;
    
    cout<<"\nLa nota final es:"<<nota_final<<endl;
    
    return 0;
}

******************************************************************************
/*Realice un programa que calcule el valor que toma la siguente funcion para unos valores dados de x e y:
f(x,y)= raiz x/(y^2 -1) */

#include <iostream>
#include <math.h>   //libreria matematica

using namespace std;

int main()
{
    float x,y,resultado = 0;
    
    cout<<"Digite el valor de x:"; cin>>x;
    cout<<"Digite el valor de y:"; cin>>y;
    
    resultado = (sqrt(x))/(pow(y,2)-1);
    
    cout<<"\nEl resultado es:"<<resultado<<endl;
    
    return 0;
}

******************************************************************************
//La sentencia if

#include <iostream>

using namespace std;

int main()
{
    int numero,dato = 5;
    
    cout<<"Digite un numero:"; cin>>numero;
    
    if(numero == dato){       //si es igual
        cout<<"El numero es 5";
    }
    else{
        cout<<"El numero es diferente del 5";
    }
    
    
    if(numero != dato){       //si es diferente
        cout<<"El numero no es 5";
    }
    else{
        cout<<"El numero es 5";
    }
    
    
    if(numero > dato){        // >,<,>=,<=
        cout<<"El numero es mayor a 5";
    }
    else{
        cout<<"El numero es menor a 5";
    }
    
    return 0;
}

*******************************************************************************
//La sentencia switch

#include <iostream>

using namespace std;

int main()
{
    int numero;
    
    cout<<"Digite un numero entre 1-5 :"; cin>>numero;
    
    switch(numero){
        case 1: cout<<"Es el numero 1"; break;  //break sale de switch cuando se cumple la condicion
        case 2: cout<<"Es el numero 2"; break;
        case 3: cout<<"Es el numero 3"; break;
        case 4: cout<<"Es el numero 4"; break;
        defaut: cout<<"No esta en el rango de 1-5"; break;
    }
    
    return 0;
}

**************************************************************************************************
/*Escriba un programa que lea dos números y determine cuál de ellos es mayor*/

#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    
    cout<<"Digite dos numeros"; 
    cin>>n1>>n2;
    
    if(n1==n2){
        cout<<"Ambos son iguales";
    }
    else if(n1>n2){
        cout<<"El mayor es:"<<n1; 
    }
    else{
        cout<<"El mayor es:"<<n2;
    }
    
    return 0;
}

*********************************************************************************14
/*Realice un programa que lea un valor entero y determine si se trata de un numero par o impar*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    
    cout<<"Digite un numero";
    cin>>numero;
    
    if(numero==0){
        cout<<"El numero es cero";
    }
    else if(numero%2==0){     //% es mod
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }
    return 0;
}

****************************************************************
/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el 
caracter es una vocal minuscula o no*/

#include <iostream>

using namespace std;

int main()
{
    char letra;
    
    cout<<"Digite un caracter";
    cin>>letra;
    
    switch(letra){
        case 'a':   //por no poner break va hasta 'u'
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minuscula"; break;
        defaut : cout<<"No es una vocal minuscula"; break;
    }
    return 0;
}

******************************************************************
/*Escriba un programa que solicite una edad(un entero)e indique en la salida estandar si la edad 
introducida esta en el rango[18-25].*/

#include <iostream>

using namespace std;

int main()
{
    int edad;
    
    cout<<"Digite su edad";
    cin>>edad;
    
    if((edad>=18)&&(edad<=25)){
        cout<<"La edad esta en el rango [18-25]";
    }
    else{
        cout<<"Su edad no esta en dicho rango";
    }
    return 0;
}

*******************************************************************
/*Cambiar un numero entero con el mismo valor pero en romanos
    M=1000
    D=500
    C=100
    L=50
    X=10
    V=5
    I=1
*/

#include <iostream>

using namespace std;

int main()
{
    int numero,unidades,decenas,centenas,millar;
    
    cout<<"Digite un numero";
    cin>>numero;
    //numero=2152 ->2000+100+50+2

    unidades = numero%10; numero/=10; //unidades=2 numero=215
    decenas = numero%10; numero/=10;  //decenas=5 numero=21
    centenas = numero%10; numero/=10; //centenas=1 numero=2
    millar = numero%10; numero/=10;   //millar=2 numero=0
    
    switch(millar){
        case 1: cout<<"M"; break;
        case 2: cout<<"MM"; break;
        case 3: cout<<"MMM"; break;
    }
    switch(centenas){
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;  //400
        case 5: cout<<"D"; break;   //500
        case 6: cout<<"DC"; break;  //600
        case 7: cout<<"DCC"; break; //700
        case 8: cout<<"DCCC"; break;//800
        case 9: cout<<"CM"; break;  //900
    }
    switch(decenas){
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break; //40
        case 5: cout<<"L"; break;  //50
        case 6: cout<<"LX"; break; //60
        case 7: cout<<"LXX"; break;//70
        case 8: cout<<"LXXX"; break;//80
        case 9: cout<<"XC"; break; //90
    }
    switch(unidades){
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
    }
    return 0;
}

*************************************************************************18
/*Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares*/

#include <iostream>

using namespace std;

int main()
{
    int saldo_inicial = 1000;opc;
    float extra,saldo = 0;retiro;
    
    
    cout<<"\tBienvenido a su cajero virtual"<<endl;    //tabulador tab \t
    cout<<"1.Ingresar dinero en tu cuenta"<<endl;
    cout<<"1.Retirar dinero de la cuenta"<<endl;
    cout<<"Salir"<<endl;
    cout<<"Opcion:"; cin>>opc;
    
    switch(opc){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar:"; cin>>extra; //ingresar dinero
            saldo = saldo_inicial+extra;
            cout<<"Dinero en cuenta"<<saldo; break;
        case 2:
            cout<<"Digite la cantidad de dinero a retirar:"; cin>>retiro; //retirar dinero
            if(retiro > saldo_inicial){
                cout<<"No tiene esa cantidad de dinero";
            }
            else{
                saldo = saldo_inicial-retiro;
                cout<<"Dinero en cuenta"<<saldo;
            }
        case 3:break; //salir
    }
    
    
    return 0;
}

*********************************************************************************************
//La sentencia while

#include <iostream>

using namespace std;

int main()
{
    int i;
    
    i = 1;
    
    while(i<=10){
        cout<<i<<endl;
        i++;    //aumenta el iterador de uno en uno
    }
    
    return 0;
}

//Decrementa desde el 10 

#include <iostream>
#include <conio.h>  //para que la pantalla no se cierre enseguida en el ejecutable

using namespace std;

int main()
{
    int i;
    
    i = 10;
    
    while(i>=1){
        cout<<i<<endl;
        i--;    //decrementa el iterador de uno en uno
    }
    getch(); //para que la pantalla no se cierre enseguida, junto con el conio.h
    return 0;
}

********************************************************************************
//La sentencia do while (es como repeat until)

#include <iostream>
#include <stdlib.h> //funciona igual que el conio

using namespace std;

int main()
{
   int i;
   
   i=1;
   
   do{
       cout<<i<<endl; //imprimir el contenido de i
       i++;
   }while(i<=10);
    
    system("pause"); //funciona igual que getch
    return 0;
}

*****************************************************************
/*La sentencia for (expresion 1, expresion logica,expresion 2) {
    /* code */

#include <iostream>

using namespace std;

int main()
{
   int i;
   
   for(i=1;i<=10;i++){
       cout<<i<<endl;
   }
   return 0;
}

//Decrementar el valor de i

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int i;
   
   for(i=10;i>=1;i--){
       cout<<i<<endl;
   }
   getch(); //para impedir que el ejecutable se cierre
   return 0;
}

//Declarar i dentro del for

#include <iostream>

using namespace std;

int main()
{
   for(int i=1;i<=10;i++){  //no necesita inicializar int i fuera
       cout<<i<<endl;
   }
   return 0;
}

**********************************************************************
/*Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la
salida estandar su tabla de multiplicar*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numero;
    
    do{
        cout<<"Digite un numero"; cin>>numero;
    }while((numero<1)||(numero>10));
    
    for(int i=1;i<=20;i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }
    cout<<"\n\n"; //para que se vaya separando con system pause
    system("pause");
    return 0;
}

****************************************************************************23
