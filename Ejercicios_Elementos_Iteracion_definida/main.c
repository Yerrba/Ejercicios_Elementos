
#include<stdio.h>
/*
5.2.12 Confeccionar un programa que permita el ingreso de 6 ternas de valores enteros.
a. de cada terna informar el mayor valor y su orden en la terna.
b. de cada terna informar cuantos valores son múltiplos de 7.
c. de las 6 ternas determinar e informar el promedio de los primeros valores de cada una.
*/
int main()
{

}


//5.1.1 Mostrar por pantalla los números pares comprendidos entre 100 y 500.

//int main()
//{
//    int i;
//    for(i = 100;i<500;i+=2)
//        {
//            printf("%d\n",i);
//        }
//}



//5.1.2 Confeccionar un programa para calcular el valor de la siguiente suma:
//100 + 95 + 90 + ... + 50.
//int main()
//{
//    int sumador,i;
//    sumador = 0;
//    for(i = 100;i>0;i-=5)
//        {
//            sumador+=i;
//        }
//    printf("%d",sumador);
//    return 0;
//}



//5.1.3 Se ingresan 50 números enteros. Determinar el promedio de los números pares.

//int main()
//{
//    /// lo pruebo con pocos numeros porque sino es una locura.
//    int num,i;
//    float promedio;
//    float sumador;
//    int contador;
//
//    contador = 0;
//    sumador = 0;
//
//    for(i = 1;i<=5;i++)
//        {
//            printf("Ingresa un numero:");
//            scanf("%d",&num);
//            if(num %2 == 0)
//                {
//                    sumador += num;
//                    contador++;
//                }
//        }
//    promedio = sumador / contador;
//    printf("El promedio de los numeros pares ingresados es %.3f",promedio);
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include<ctype.h>

//5.1.4 Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.
//int main()
//{
//   char letra;
//   int i;
//   int cont_vocales;
//
//   cont_vocales = 0;
//
//   for(i = 0;i<5;i++)
//    {
//        printf("Ingresa una letra: \n");
//        scanf("%c",&letra);
//        fflush(stdin); // limpieza de buffer
//        // sino sale cualquier cosa.
//        letra = toupper(letra);
//        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' ||
//           letra == 'U' )
//           {
//               cont_vocales++;
//           }
//    }
//    printf("Cantidad de vocales ingresadas:  %d",cont_vocales);
//}
//



//#include<stdio.h>

/*
5.1.5 Confeccionar un programa para calcular la suma de los primeros N números
naturales. El valor de N lo solicita por teclado el programa.
*/

//int main()
//{
//    int numero,i,n;
//    int sumador;
//    sumador = 0;
//    printf("Ingrese la cantidad de numeros a sumar: ");
//    scanf("%d",&n);
//
//    for(i = 0;i<n;i++)
//        {
//          printf("Ingrese un numero:\n");
//          scanf("%d",&numero);
//          sumador +=numero;
//        }
//
//    printf("La suma de los n numeros es : %d",sumador);
//
//}




/*
5.1.6 Ingresar N y N Números naturales. Determinar e informar:
a. La sumatoria de los valores múltiplos de 3.
b. La cantidad de valores múltiplos de 5.
c. La sumatoria de los valores que se ingresan en orden par.

*/

//int main()
//{
// int n,num,i;
// int sum_mult3;
// int cont_mult5;
// int sum_ingreso_par;
//
// sum_mult3 = 0;
// sum_ingreso_par =0;
// cont_mult5 = 0;
//
// printf("Ingrese un numero n : ");
// scanf("%d",&n); //cantidad de veces que vamos a iterar
// for(i = 0;i<n;i++)
//    {
//        printf("Ingrese un numero: ");
//        scanf("%d",&num);
//        if(num%3 == 0)
//            {
//                sum_mult3 +=num;
//            }
//        if(num%5 == 0)
//            {
//                cont_mult5++;
//            }
//        if(i % 2 == 0)
//            {
//                sum_ingreso_par+=num;
//            }
//    }
//    printf("Sumatoria de numeros multiplos de 3 : %d \n",sum_mult3);
//    printf("Sumatoria de numeros pares ingresados : %d\n",sum_ingreso_par);
//    printf("Cantidad de numeros multiplos de 5: %d\n",cont_mult5);
//}



/*
Dadas 20 notas y legajos de alumnos de un curso. Determinar:
a. Cantidad de alumnos aplazados.
b. Cuando la nota sea mayor a 7, mostrar el mensaje: “El alumno con legajo xxx ha Promocionado”.
*/


//int main()
//{
//    int i;
//    int nota1;
//    int contador_aplazados;
//
//    contador_aplazados = 0;
//
//    for(i = 1;i<=20;i++)
//        {
//            printf("Ingrese nota del alumno: ");
//            scanf("%d",&nota1);
//            if(nota1>7 && nota1<=10)
//                {
//                    printf("El alumno con legago %d ha promocionado \n",i);
//                }
//            if(nota1<4)
//                {
//                    contador_aplazados++;
//                }
//        }
//        printf("\n \nCantidad de alumnos aplazados: %d",contador_aplazados);
//
//}



/*
Dadas las edades y estaturas de 45 alumnos de un curso. Determinar:
a. Edad promedio.
b. Estatura promedio.
c. Cantidad de alumnos mayores de 10 años.
d. Cantidad de alumnos que miden menos de 1.40 cm.
*/

//int main()
//{
//    float edad_promedio;
//    float estatura_promedio;
//    int cont_mayores;
//    int cont_enanos;
//    float estatura;
//    int edad;
//    int i;
//
//    edad_promedio = 0.0;
//    estatura_promedio = 0.0;
//    cont_enanos = 0;
//    cont_mayores = 0;
//
//    for(i = 1;i<=5;i++) // no hago 45 porque es para morirse
//        {
//            printf("\n");
//            printf("Ingrese la edad del alumno %d : ",i);
//            scanf("%d",&edad);
//
//            printf("Ingrese la estatura del alummno %d : ",i);
//            scanf("%f",&estatura);
//
//            if(estatura <1.40)
//                {
//                    cont_enanos++;
//                }
//
//            if(edad >10)
//                {
//                    cont_mayores++;
//                }
//
//            edad_promedio +=edad;
//            estatura_promedio += estatura;
//
//        }
//        printf("\nCantidad de alumnos enanos: %d \n",cont_enanos);
//        printf("Cantidad de alumnos mayores de 10 anios %d \n",cont_mayores);
//        edad_promedio = edad_promedio*1.0 /i ;
//        estatura_promedio = estatura_promedio/i;
//        printf("Edad promedio %.2f \n",edad_promedio);
//        printf("Estatura promedio %.2f \n",estatura_promedio);
//}


/*
5.1.9  Confeccionar un programa que exhiba por pantalla una lista, a dos columnas,
con los primeros 15 números impares en la primera y los 15 primeros
pares en la segunda, incluyendo los títulos.
*/

//int main()
//{
//    int i;
//    printf("  PARES      IMPARES");
//    printf("\n");
//    for(i = 0;i<30;i++)
//        {
//            if(i%2==0)
//                {
//                    printf("    %d",i);
//                }
//            if(i%2 !=0)
//                {
//                    printf("                %d",i);
//                }
//
//            printf("\n");
//        }
//}

/*
5.1.10 Confeccionar un programa que solicite el ingreso de un valor entero N < 12
y luego una lista de N números reales sobre la cual debe calcular:
a. el promedio de los positivos.
b. el promedio de los negativos.
c. la cantidad de ceros.
*/

//int main()
//{
//    int n;
//    int i,cont_ceros;
//    int cont_posi,cont_nega;
//    float prom_posi,prom_nega,num;
//    cont_ceros = 0;
//    prom_nega = 0;
//    prom_posi = 0;
//    cont_posi = 0;
//    cont_nega = 0;
//
//    printf("Ingrese un numero entero menor a 12: ");
//    scanf("%d",&n);
//    if(n>0 && n<=12){
//    for(i = 0;i<n;i++)
//        {
//           printf("Ingrese un numero real: ");
//           scanf("%f",&num);
//           if(num == 0)
//            {
//                cont_ceros++;
//            }
//           if(num>0)
//            {
//                prom_posi+=num;
//                cont_posi++;
//            }
//           if(num<0)
//            {
//                prom_nega +=num;
//                cont_nega++;
//            }
//
//        }
//        prom_nega = prom_nega /cont_nega;
//        prom_posi = prom_posi /cont_posi;
//        printf("Promedio de numeros negativos : %.2f \n",prom_nega);
//        printf("Promedio de numeros positivos : %.2f \n",prom_posi);
//        printf("Cantidad de ceros ingresados: %d \n",cont_ceros);
//    }else
//    {
//        if(n>12)
//            {
//                printf("\nVALOR EXCEDIDO\n");
//            }else
//            {
//                printf("CANTIDAD INVALIDA");
//            }
//    }
//    return 0;
//}
//




/*
5.1.11 Ingresar 18 valores de temperatura distintos de cero.
Se pide determinar e informar cuantas ternas (tresvalores seguidos) de
 valores positivos y cuantas de negativos hay.
*/


//int main()
//{
//    int i;
//    float temp;
//    int cont_tern_posi;
//    int cont_tern_nega;
//    int p,n;
//    p = 0;
//    n = 0;
//    cont_tern_nega = 0;
//    cont_tern_posi = 0;
//    for(i= 0;i<18;i++)
//        {
//            printf("Ingrese temperatura: ");
//            scanf("%f",&temp);
//            if(temp>0)
//                {
//                    p++;
//                    n = 0;
//                    if(p == 3)
//                        {
//                            cont_tern_posi++;
//                        }
//                }
//                else
//                {
//                  p = 0;
//                  n++;
//                  if(n == 3)
//                    {
//                        cont_tern_nega++;
//                    }
//
//
//                }
//
//        }
//        printf("Cantidad de ternas positivas  : %d\n",cont_tern_posi);
//        printf("Cantidad de ternas negativas : %d",cont_tern_nega);
//}


/*
5.1.12 Calcular el factorial de un número ingresado por teclado.
El factorial se calcula como el producto de todos
los enteros positivos desde 1 hasta el número.
En matemática el factorial se expresa con el símbolo. Por
ejemplo, el factorial de 5 es 120 ya que 5! = 1 x 2 x 3 x 4 x 5 =120

*/

//int main()
//{
//    int i,num;
//    int fact;
//    printf("Ingrese un numero: ");
//    scanf("%d",&num);
//    fact = num;
//    if(num == 1 || num == 0)
//    {
//        fact = 1;
//    }
//    else
//    {
//        for(i=1; i<num; i++)
//        {
//            fact = fact * (num-i);
//        }
//
//    }
//
//
//    printf("El factorial de %d es: %d",num,fact);
//}
//


/*
5.1.13 Realizar un programa que:
a. Muestre todos los números primos entre 1 y 100.
(Un nro. es primo cuando es divisible solamente por 1 y por sí mismo)
b. Contar y mostrar la cantidad de primos encontrados.

*/

//int main()
//{
//    for (int j=2; j<=100; j++) //por definicion el 1 no es primo, se empieza en 2
//    {
//        int a=0;
//        for(int i=1; i<=100; i++) //divide a j entre los números del 1 al 100
//        {
//            if(j%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
//                a++;
//        }
//        if (a==2)  //si solo tiene dos números divisores entonces es primo y se imprime
//        {
//            printf("%d\n", j);
//        }
//    }
//}

/*
PARA HACER MAS EFICIENTE EL CODIGO, SIRVE LA ESTRATEGIA DE BUSCAR DIVISORES
HASTA LA MITAD DEL NUMERO. SI EL NUMERO ES PRIMO TENDRÁ SOLO 2 DIVISORES;
EL 1 Y EL MISMO NUMERO. SI HASTA LA MITAD DEL NUMERO NO HAY MAS QUE
1 COMO DIVISOR ENTRONCES ES PRIMO. SE ENTIENDE???
*/



/*
4 Confeccionar un programa que determine e informe los números perfectos
comprendidos entre 1 y 9000.Un número es perfecto
cuando es igual a la suma de sus divisores positivos menores que él.
*/

//int main()
//{
//    int sumador;
//    sumador = 0;
//    for(int i=1;i<9000;i++)
//        {
//            for(int j=1;j<9000;j++)
//                {
//                    if(i%j == 0 && j<i)
//                        {
//                            sumador +=j;
//                            //printf("%d\n",sumador);
//                        }
//
//                }
//            if(sumador == i)
//                {
//                    printf("El numero %d es perfecto\n",i);
//                }
//            sumador = 0;
//        }
//}


/*
5.1.16 Se ingresan DNI y la nota promedio de 10 alumnos.
Determinar el DNI del alumno de mayor nota promedio (considerar único).
*/

//int main()
//{
//    int dni;
//    float nota_promedio;
//    int guardo;
//    float mayor;
//
//    printf("Ingrese DNI del alumno: ");
//    scanf("%d",&dni);
//    printf("\n");
//    printf("Ingrese nota promedio del alumno: ");
//    scanf("%f",&nota_promedio);
//    mayor = nota_promedio;
//
//    for(int i = 0; i<3; i++)
//    {
//        printf("Ingrese DNI del alumno: ");
//        scanf("%d",&dni);
//        printf("\n");
//        printf("Ingrese nota promedio del alumno: ");
//        scanf("%f",&nota_promedio);
//        if(nota_promedio>mayor)
//            {
//                mayor = nota_promedio;
//                guardo = dni;
//            }
//
//    }
//    printf("\nEl alumno con DNI: %d tiene la mayor nota que"
//           "es  %.2f \n",dni,nota_promedio);
//}


/*
5.1.17 Ingresar N artículos (códigos) y sus correspondientes precios.
Indicar el código del artículo más caro y el precio del más barato.
 NOTA: todos los artículos tienen precios distintos.
*/
//int main()
//{
//    int arti;
//    float precio;
//    int guardo_cod;
//    float mayor;
//    int n;
//
//    printf("Cuantos articulos va a ingresar a la base de datos? :");
//    scanf("%d",&n);
//    printf("Ingrese codigo articulo: ");
//    scanf("%d",&arti);
//    printf("\nIngrese precio del arcitulo: ");
//    scanf("%f",&precio);
//
//    mayor = precio;
//
//    for(int i=0 ; i<n-1; i++)
//    {
//        printf("\nIngrese codigo articulo: ");
//        scanf("%d",&arti);
//        printf("\nIngrese precio del arcitulo: ");
//        scanf("%f",&precio);
//        if(precio>mayor)
//        {
//            mayor = precio;
//            guardo_cod = arti;
//
//        }
//
//    }
//
//    printf("El producto %d tiene el mayor precio de su stock con %.2f $",
//           guardo_cod,mayor);
//    return 0;
//}


/*
5.1.18 Realizar un programa que muestre por pantalla las tablas
 de multiplicar del 1 al 9 de la siguiente forma:
1 2 3 4 5 6 7 8 9
2 4 6 8 10 12 14 16 18
3 6 9 12 15 18 21 24 27
4 8 12 16 20 24 28 32 36
5 10 15 20 25 30 35 40 45
6 12 18 24 30 36 42 48 54
7 14 21 28 35 42 49 56 63
8 16 24 32 40 48 56 64 72
9 18 27 36 45 54 63 72 81

*/

//int main()
//{
//    for(int i = 1;i<10;i++)
//        {
//            for(int j = 1;j<10;j++)
//                {
//                    printf("%d\t",i*j);
//                }
//            printf("\n");
//        }
//}


/*
5.1.19 Ingresar un número entero mayor a 0. Debe dibujar un triángulo rectángulo
con * con tantas filas como el número indicado. En cada fila se va incrementando
 la cantidad de asteriscos.
Por ejemplo, si se ingresa el número 6 debe mostrar en pantalla:

*
**
***
****
*****
******
*/

//int main()
//{
//    int numero;
//    printf("Ingrese numero: ");
//    scanf("%d",&numero);
//    for(int i = 1;i<=numero;i++)
//        {
//            for(int j = 1;j<=i;j++)
//                {
//                    printf("*");
//                }
//            printf("\n");
//        }
//      return 0;
//}



/*
5.1.21 Tomando como base el ejercicio anterior ingresar un número entero mayor
a 0 y dibujar un rombo con*. Por ejemplo, si se ingresa el número 5 dibuja
la pirámide de 5 filas y luego completa el rombo al ir
decrementando la cantidad de asteriscos.
*
***
*****
*******
*********
*******
*****
***
*
*/

//int main()
//{
//    int numero;
//
//    printf("Ingrese numero: ");
//    scanf("%d",&numero);
//
//    for(int i = 1;i<=numero*2+1;i+=2)
//        {
//            for(int j = 1;j<=i;j++)
//                {
//                    printf("*");
//                }
//            printf("\n");
//        }
//
//    for(int i = numero*2; i>=1; i-=2)
//    {
//
//
//        for(int j = 1; j<i; j++)
//        {
//            printf("*");
//        }
//
//
//        printf("\n");
//
//    }
//    return 0;
//
//}


/// ITERACION CONTROLADA POR CONDICION

/*
Confeccionar un programa que calcule e informe los valores de las potencias
de 2 cuyo resultado sean menores que 600. (1 2 4 8 16 …)
*/

//#include<stdio.h>
//#include<math.h>

//int main()
//{
//    float base = 2;
//    float exp = 0;
//
//    while(pow(base,exp)<600)
//        {
//
//            printf("%.f\n",pow(base,exp));
//            exp++;
//
//        }
//
//}



/*
5.2.2 Escribir las sentencias que permitan el ingreso correcto
del valor numérico de un día y un mes determinado.
 Por algún error volver a solicitar.
*/

//int main()
//{
//    int dia,mes;
//    do{
//            printf("Ingrese dia: ");
//            scanf("%d",&dia);
//            printf("Ingrese mes: ");
//            scanf("%d",&mes);
//
//
//    }while( (dia<1 || dia>31) || (mes<1 || mes>12) );
//    return 0;
//}


/*
5.2.3 Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un *. Se
desea obtener e informar cuantos caracteres ingresados son numéricos y cuantos alfabéticos. Estos últimos
tienen que mostrarse separados por mayúsculas y minúsculas. También informar la cantidad de otros
símbolos que no sean ni letras ni números
*/


//int main()
//{
//    char texto[41];
//    int cont_minusc,cont_mayusc;
//    int cont_num,cont_otros;
//    cont_mayusc = 0;
//    cont_minusc = 0;
//    cont_num = 0;
//    cont_otros = 0;
//
//    printf("Ingrese un texto: \n");
//    for(int i = 0; i<41; i++)
//    {
//        scanf("%c",&texto[i]);
//
//        if(texto[i]>=48 && texto[i]<=57)
//        {
//            cont_num++;
//        }
//        else
//        {
//            if(texto[i]>=65 && texto[i]<=90)
//            {
//                cont_mayusc++;
//            }else
//            {
//                if(texto[i]>=97 && texto[i]<=122)
//                    {
//                        cont_minusc++;
//                    }else
//                    {
//                        cont_otros++;
//                    }
//            }
//
//        }
//
//        if(texto[i]=='*')
//        {
//            break;
//        }
//    }
//    printf("CANTIDAD DE MAYUSC: %d \n",cont_mayusc);
//    printf("CANTIDAD DE MINUSC: %d\n",cont_minusc);
//    printf("CANTIDAD DE NUMEROS: %d\n",cont_num);
//    printf("CANTIDAD DE OTROS DIGITOS: %d",cont_otros);
//
//    return 0;
//
//}








/*
5.2.4 Un negocio de venta de granos desea controlar las ventas realizadas.
De cada una ingresa el importe total y un código que indica la forma de pago.
El código puede ser:
• C: cheque, 20% de recargo.
• E: efectivo, 10% de descuento.
• T: con tarjeta, 12% de recargo.
Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
Efectivo en Caja: $ xxxx.xx
Ventas con Tarjeta de Crédito: $ xxxx.xx
Ventas con cheque: $ xxxx.xx
Total de Venta: $ xxxx.xx
Importe del IVA: $ xxxx.xx
Nota: El IVA corresponde al 21% del total de ventas.
*/

//#include<stdio.h>
//#include<ctype.h>
//#define IVA 21
//
//int main()
//{
//    char codigo;
//    float importe;
//    float vent_credito;
//    float vent_cheque;
//    float efectivo;
//    float total;
//    float importe_iva;
//
//    efectivo = 0;
//    total = 0;
//    vent_cheque = 0;
//    vent_credito = 0;
//
//    printf("Ingrese importe total de la venta:");
//    scanf("%f",&importe);
//    fflush(stdin);
//    printf("Ingrese codigo :");
//    scanf("%c",&codigo);
//    codigo = toupper(codigo);
//
//
//    while(codigo!='F')
//    {
//        if(codigo == 'C')
//        {
//            importe = importe+ (importe*20/100);
//            vent_cheque += importe;
//        }
//        if(codigo == 'E')
//        {
//            importe = importe - (importe*10/100);
//            efectivo += importe;
//        }
//        if(codigo == 'T')
//        {
//            importe = importe+ (importe*12/100);
//            vent_credito +=importe;
//        }
//        total +=importe;
//
//        printf("Ingrese importe total de la venta:");
//        scanf("%f",&importe);
//        fflush(stdin);
//        printf("Ingrese codigo :");
//        scanf("%c",&codigo);
//        codigo = toupper(codigo);
//
//
//
//    }
//    printf("EFECTIVO EN CAJA: %.2f $\n",efectivo);
//    printf("VENTAS CON TARJETA DE CREDITO %.2f $ \n",vent_credito);
//    printf("VENTAS CON CHEQUES %.2f $ \n",vent_cheque);
//    printf("TOTAL DE VENTAS : %.2f $ \n",total);
//    printf("IMPORTE DEL IVA : %.2f $",total = (total*IVA/100) );
//
//
//}




/*
De cada uno de los alumnos de un curso se ingresa su número de DNI y las notas de los dos exámenes
parciales confeccionar, un programa que muestre por cada alumno su condición final con el siguiente
mensaje:
“El alumno con DNI: xxxxxxx, obtuvo las notas: xx y xx [condición final]”
La condición final se establece según las siguientes reglas:
• PROMOCIONA: ambas notas > = 7
• RINDE EXAMEN FINAL: ambas notas > = 4
• REPROBO LA MATERIA: alguna nota no cumple lo anterior
El programa finaliza cuando se ingresa un valor negativo como número de DNI. Al finalizar mostrar la nota
promedio de alumnos promocionados.



*/


//int main()
//{
//
//    int dni;
//    int nota1,nota2;
//    int cant_prom;
//    float promedio_prom;
//
//    promedio_prom = 0;
//
//    printf("Ingrese dni del alumno: ");
//    scanf("%d",&dni);
//    printf("Ingrese nota 1 y nota 2 del alumno: \n");
//    scanf("%d%d",&nota1,&nota2);
//    while(dni >= 0)
//    {
//        if(nota1 >= 7 && nota2 >= 7)
//        {
//            printf("El alumno con dni %d obtuvo las notas %d y %d "
//                   "PROMOCIONA \n",dni,nota1,nota2);
//            cant_prom++;
//            promedio_prom +=  ( (nota1+nota2)/2.0);
//
//
//
//        }
//        else
//        {
//            if(nota1 >= 4 && nota2 >= 4)
//            {
//                printf("El alumno con dni %d obtuvo las notas %d y %d"
//                       " RINDE FINAL \n",dni,nota1,nota2);
//            }
//            else
//            {
//                printf("El alumno con dni %d obtuvo las notas %d y %d"
//                       " REPROBO LA MATERIA \n",dni,nota1,nota2);
//            }
//
//        }
//        printf("Ingrese dni del alumno:");
//        scanf("%d",&dni);
//        printf("Ingrese nota 1 y nota 2 del alumno: \n");
//        scanf("%d%d",&nota1,&nota2);
//
//
//    }
//
//    printf("NOTA PROMEDIO DE ALUMNOS PROMOCIONADOS: %.2f",
//           promedio_prom/cant_prom);
//
//    return 0;
//}



/*
5.2.6 Un negocio de perfumería efectúa descuentos en sus ventas según el importe de las mismas, con la
siguiente escala:
• menor a 50 pesos el 3.5 %
• entre 50 y 150 pesos el 10 %
• entre 151 y 300 pesos el 20 %.
• mayor a 300 pesos el 25 %
Confeccionar un programa que:
a. Solicite un importe y calcule el descuento a efectuar y el importe neto a cobrar, con mensajes
aclaratorios.
b. Informe el importe promedio de todas las ventas realizadas.
*/


//int main()
//{
//    float importe;
//    float total;
//    int cant_ventas;
//    float descuento;
//    total = 0;
//    cant_ventas = 0;
//
//    printf("Ingrese importe: ");
//    scanf("%f",&importe);
//    while(importe>0)
//    {
//        if(importe < 50)
//        {
//            descuento = (importe *3.5/100);
//            importe = importe - descuento;
//
//        }
//        else
//        {
//            if(importe>=50 && importe<=150)
//            {
//                descuento = (importe *10/100);
//                importe = importe - descuento;
//
//            }
//            else
//            {
//                if(importe>150 && importe<=300)
//                {
//                    descuento = (importe *20/100);
//                    importe = importe - descuento;
//                }
//                else
//                {
//                    descuento = (importe *25/100);
//                    importe  = importe - descuento;
//                }
//            }
//        }
//        total +=importe;
//        cant_ventas++;
//        printf("Importe a cobrar: %.2f \n",importe);
//        printf("Descuento a efectuar %.2f \n",descuento);
//
//        printf("Ingrese importe: ");
//        scanf("%f",&importe);
//
//    }
//    printf("IMPORTE PROMEDIO DE TODAS LAS VENTAS %.2f",total/cant_ventas);
//}



/*
5.2.9 Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De
cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores (‘S’ o ‘N’). Además, se
conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
• Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
• Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
• Si el empleado posee estudios superiores: aumento del 5%
Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se
termina la carga cuando no se deseen ingresar más empleados.
Determinar:
a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
b. Sueldo nuevo promedio de la empresa.


*/
//#include<stdio.h>
//#include<ctype.h>

//int main()
//{
//    float sueldo_basico;
//    int antiguedad;
//    float guardo_sueldo_basico;
//    int cant_hijos;
//    int cont_empleados;
//    char estudios_superiores;
//    char desicion;
//    float sueldo_promedio_total;
//
//    cont_empleados = 1;
//    sueldo_promedio_total = 0;
//    printf("Ingrese sueldo basico del empleado: ");
//    scanf("%f",&sueldo_basico);
//    guardo_sueldo_basico = sueldo_basico;
//
//    printf("\nIngrese antiguedad: ");
//    scanf("%d",&antiguedad);
//
//    printf("\nIngrese cantidad de hijos: ");
//    scanf("%d",&cant_hijos);
//    fflush(stdin);
//
//    printf("Tiene estudios superiores ?  S[si] N[no] : ");
//    scanf("%c",&estudios_superiores);
//    estudios_superiores=toupper(estudios_superiores);
//    fflush(stdin);
//
//    printf("Desea ingresar otro empleado? :S[si] N[no]");
//    scanf("%c",&desicion);
//    desicion = toupper(desicion);
//    if(antiguedad>10)
//    {
//        sueldo_basico = sueldo_basico +(sueldo_basico*10/100);
//    }
//    if(cant_hijos>2)
//    {
//        sueldo_basico = sueldo_basico +(sueldo_basico*10/100);
//    }
//    else
//    {
//        if(cant_hijos == 1)
//        {
//            sueldo_basico = sueldo_basico +(sueldo_basico*5/100);
//        }
//    }
//    if(estudios_superiores == 'S')
//    {
//        sueldo_basico = sueldo_basico +(sueldo_basico*5/100);
//    }
//     sueldo_promedio_total +=sueldo_basico;
//    printf("\nEl empleado %d tenia un sueldo de %.2f $ y ahora de %.2f$\n",
//           cont_empleados,guardo_sueldo_basico,sueldo_basico);
//
//    while(desicion!='N')
//    {
//        printf("Ingrese sueldo basico del empleado: ");
//        scanf("%f",&sueldo_basico);
//        guardo_sueldo_basico = sueldo_basico;
//
//        printf("\nIngrese antiguedad: ");
//        scanf("%d",&antiguedad);
//
//        printf("\nIngrese cantidad de hijos: ");
//        scanf("%d",&cant_hijos);
//        fflush(stdin);
//
//        printf("Tiene estudios superiores ?  S[si] N[no] : ");
//        scanf("%c",&estudios_superiores);
//        estudios_superiores=toupper(estudios_superiores);
//        fflush(stdin);
//
//        printf("Desea ingresar otro empleado? :S[si] N[no]");
//        scanf("%c",&desicion);
//        desicion = toupper(desicion);
//
//        if(antiguedad>10)
//        {
//            sueldo_basico = sueldo_basico +(sueldo_basico*10/100);
//        }
//        if(cant_hijos>2)
//        {
//            sueldo_basico = sueldo_basico +(sueldo_basico*10/100);
//        }
//        else
//        {
//            if(cant_hijos == 1)
//            {
//                sueldo_basico = sueldo_basico +(sueldo_basico*5/100);
//            }
//        }
//        if(estudios_superiores == 'S')
//        {
//            sueldo_basico = sueldo_basico +(sueldo_basico*5/100);
//        }
//        sueldo_promedio_total +=sueldo_basico;
//        cont_empleados++;
//
//
//        printf("\nEl empleado %d tenia un sueldo de %.2f $ y ahora de %.2f$\n",
//           cont_empleados,guardo_sueldo_basico,sueldo_basico);
//
//    }
//    printf("Sueldo promedio nuevo de la empresa es %.2f",
//           sueldo_promedio_total/cont_empleados);
//}


/*
5.2.10 En un proceso de control se evalúan valores de temperatura,
 finalizando cuando se ingresa un valor
ficticio de temperatura -50.
Determinar el valor máximo y mínimo medido y sus posiciones respecto al ingreso.
*/


//#include<stdio.h>
//int main()
//{
//    int cont;
//    int temp;
//    int maximo;
//    int minimo;
//    int guardo_pos_min;
//    int guardo_pos_max;
//    int pos;
//    printf("Ingrese temperatura:");
//    scanf("%d",&temp);
//    maximo = temp;
//    minimo = temp;
//    pos = 1;
//    if(temp>maximo)
//            {
//                maximo = temp;
//            }
//        if(temp<minimo)
//            {
//                minimo = temp;
//            }
//    while(temp!=(-50) )
//    {
//        printf("Ingrese temperatura:");
//        scanf("%d",&temp);
//        pos++;
//        if(temp>maximo)
//            {
//                maximo = temp;
//                guardo_pos_max = pos;
//            }
//        if(temp<minimo && temp!=(-50) )
//            {
//                minimo = temp;
//                guardo_pos_min =pos;
//            }
//
//
//    }
//    printf("Temperatura maxima es: %d en posicion %d \n",maximo,guardo_pos_max);
//    printf("Temperatura minima es %d en posicion %d \n",minimo,guardo_pos_min);
//
//    return 0;
//}




/*
5.2.11 Se ingresan números enteros, hasta que se ingrese el número cero.
Determinar los 2 valores mayores.
*/

//
//int main()
//{
//    //suponiendo numeros ingresados distintos.
//    int numero;
//    int contador;
//    int maximo1;
//    int maximo2;
//
//    printf("Ingrese un numero:");
//    scanf("%d",&numero);
//    maximo1 = numero;
//    maximo2 = numero;
//    while(numero != 0)
//        {
//             printf("Ingrese un numero:");
//             scanf("%d",&numero);
//
//             if(numero >maximo1 )
//                {
//                    maximo1 = numero;
//
//                }
//            if(numero>maximo2 && numero<maximo1)
//                {
//                    maximo2 = numero;
//                }

//        }
//        printf("El maximo de maximos es: %d \n",maximo1);
//        printf("El segundo maximo es: %d \n",maximo2);
//}
