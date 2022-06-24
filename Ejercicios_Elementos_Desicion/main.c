
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{

}







/*
4.1 Se ingresan 3 números distintos. Determinar el mayor.
*/
// 2 FORMAS DE HACERLO
//    int num1,num2,num3;
//    int mayor;
//    printf("Ingrese 3 numeros: ");
//    scanf("%d%d%d",&num1,&num2,&num3);
//    mayor = num1 > num2 ? (num1>num3 ? num1 : num2): (num2>num3 ? num2: num3);
//    printf("El mayor de lo 3 numeros es %d",mayor);

//    if(num1 > num2 && num1>num3)
//        {
//            printf("El numero %d es el mayor",num1);
//        }
//    else
//        {
//            if(num2 > num1 && num2 > num3)
//                {
//                    printf("El numero %d es el mayor",num2);
//                }
//            else
//                {
//                    printf("El numero %d es el mayor",num3);
//                }
//        }


//4.2Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que
//los otros dos.
//    int n1,n2,n3;
//    printf("Ingrese 3 numeros: ");
//    scanf("%d%d%d",&n1,&n2,&n3);
//    n1 < n2 ? (n1 < n3 ? printf("El primer numero es menor a lo otros 2")
//               :printf("no lo es")): printf("no lo es");
// // OTRA FORMA DE HACERLOS
//    if(n1 < n2 && n1 < n3)
//        {
//            printf("EL primer numero es menor a los otros 2");
//        }
//    else
//        {
//            printf("No es menor a los otros 2");
//        }

////   4.3 Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos
////    es igual a la suma de los otros dos.
//    int n1,n2,n3;
//    printf("ingrese 3 numeros: ");
//    scanf("%d%d%d",&n1,&n2,&n3);
//
//    if(n1 == (n2+n3))
//        {
//            printf("%d y %d sumados son iguales a  %d",n2,n3,n1) ;
//        }
//    if(n2 == (n1+n3))
//        {
//            printf("%d y %d sumados son iguales a  %d",n1,n3,n2) ;
//        }
//     if(n3 == (n2+n1))
//        {
//            printf("%d y %d sumados son iguales a  %d",n2,n1,n3) ;
//        }
//     //OTRA FORMA DE HACERLO
//    n1 == (n2+n3) ? printf("%d y %d sumados es igual a %d",n2,n3,n1) : "";
//    n2 == (n1+n3) ? printf("%d y %d sumados es igual a %d",n3,n1,n2) : "";
//    n3 == (n2+n1) ? printf("%d y %d sumados es igual a %d",n2,n1,n3) : "";


//  4.4. Ingresar 3 valores reales y:
//        a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
//        b. Si los tres son iguales informar “TRES IGUALES .
//        c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”.

//    int n1,n2,n3;
//    printf("ingrese 3 numeros: ");
//    scanf("%d%d%d",&n1,&n2,&n3);
//    (n1 > n3) && (n2 > n3) ? printf("MAYORES AL TERCERO"): "";
//    (n1 == n2) && (n1 == n3) ? printf("TRES IGUALES"): "";
//    (n1<n3) || (n2<n3) ? printf("ALGUNO ES MENOR") : "";



//// 4.5. Se ingresan 3 números enteros. Informarlos en orden creciente.
//    int n1,n2,n3;
//    //supongo que son distintos
//    //si fuese alguno igual hay que hacer if para determinar que pasa
//    //en esos casos o tambien podria pasar que todos sean iguales.
//    scanf("%d%d%d",&n1,&n2,&n3);
//    if(n1>n2 && n2 >n3)
//        {
//            printf("%d %d %d",n2,n3,n1);
//        }else
//        {
//            if(n1>n3 && n3 >n2)
//                {
//                    printf("%d %d %d",n2,n3,n1);
//                }
//        }
//    if(n2>n1 && n1>n3)
//        {
//            printf("%d %d %d",n3,n2,n1);
//        }
//        else
//        {
//            if(n2>n3 && n3>n1)
//                {
//                    printf("%d %d %d",n1,n3,n2);
//                }
//        }
//    if(n3>n1 && n1>n2)
//        {
//            printf("%d %d %d",n2,n1,n3);
//        }
//        else
//        {
//            if(n3>n2 && n2>n1)
//                {
//                    printf("%d %d %d",n1,n2,n3);
//                }
//        }



//// 4.6. Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor
////valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.
//int n1,n2,n3,n4;
//int minimo, orden = 0;
//printf("Ingrese 4 numeros: \n");
//printf("Numero 1: ");
//scanf("%d",&n1);
//minimo = n1;
//orden = 1;
//
//
//printf("\nNumero 2: ");
//scanf("%d",&n2);
//
//if(n2 < minimo)
//    {
//        minimo = n2;
//        orden = 2;
//    }
//printf("\nNumero 3: ");
//scanf("%d",&n3);
//if(n3 < minimo)
//    {
//        minimo = n3;
//        orden = 3;
//    }
//
//printf("\nNumero 4: ");
//scanf("%d",&n4);
//
//if(n4 < minimo)
//    {
//        minimo = n4;
//        orden = 4;
//    }
//
//printf("Minimo %d y esta en la posicion %d", minimo,orden);



/*
4.7. Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine
e informe si forman o no triángulo. Para ello utilizar el teorema de la desigualdad del triángulo que establece
que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del
tercer lado.
*/


//float n1,n2,n3;
//    printf("Ingrese 3 valores mayores a cero: \n ");
//    scanf("%f %f %f",&n1,&n2,&n3);
//    if(n1>(n2+n3) || (n2>(n1+n3)) || n3>(n1+n2)  )
//        {
//            printf("\nNO FORMA UN TRIANGULO\n");
//        }
//    else
//        {
//            printf("FORMA UN TRIANGULO\n");
//        }



/*
Realizar un programa que ingrese dos números e indique si el primer número es divisible por el segundo.
*/
//int main()
//{
//
//    int n1,n2;
//    printf("Ingrese 2 numeros:");
//    scanf("%d %d",&n1,&n2);
//    if(n1 % n2 == 0)
//        {
//            printf("ES DIVISIBLE \n");
//        }
//    else
//        {
//            printf("NO ES DIVISIBLE \n");
//        }
//
//}



/*
Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo
ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII.
*/
/// UN CARACTER ALFANUMERICO ES DEL 0 AL 9 Y DE LA A a Z
/// Tengo que guiarme de la tabla ASCII para resolver este ejercicio.
/// 48 al 57 numeros y del 65 a 90 letra mayusc y de 97 a 122 letra minuscula.
//int main()
//{
// char car;
//
// printf("Ingrese un caracter alfanumerico: \n");
// scanf("%c",&car);
// car = tolower(car); // para usar esta funcion tenes que incluir al principio:
// #include<ctype.h>
//
//
// /// convierto el caracter a minúscula para reducir las comparaciones
//
// if( (car>=48 && car<=57) || (car>=65 && car<=90) || (car>=97 && car<=122) )
//    {
//        if(car == 97 || car == 101 || car == 105 || car == 111 || car == 117)
//            {
//                printf("VOCAL %d",car);
//            }
//        else
//            {
//                printf("NO VOCAL %d",car);
//            }
//    }
//
//
//}




/*
Confeccionar un programa que permita convertir grados sexagesimales
a radianes y viceversa, según el valor de un código que se ingresa junto
al valor. Si código = 1 se ingresan grados, si es 2 se ingresan radianes.

*/
//#define PI 3.14159265
//int main()
//{
//    int codigo;
//    float grados;
//    float radianes;
//    float conv=0;
//    printf("Ingrese codigo [1] o [2]\n");
//    scanf("%d",&codigo);
//    if(codigo==1)
//        {
//            printf("Ingrese grados a convertir: \n");
//            scanf("%f",&grados);
//            conv = grados * PI/180;
//            printf("%.4f",conv);
//
//        }else
//        {
//            if(codigo == 2)
//                {
//                    printf("Ingrese radianes a convertir: \n");
//                    scanf("%f",&radianes);
//                    conv = radianes * 180/PI;
//                    printf("%.2f",conv);
//                }
//        }
//
//}





/*
Escribir un programa que solicite el año y el número de mes y
nos informe cuantos días tiene dicho mes.
Debemos considerar que el año puede ser bisiesto.
Un año es bisiesto cuando es divisible por 4 y no por
100 o el año es divisible por 400.


*/

//int main()
//{
//    int anio,mes;
//    printf("Ingrese mes: \n");
//    scanf("%d",&mes);
//    printf("Ingrese anio: \n");
//    scanf("%d",&anio);
//
//    if( (anio%4 == 0 && anio%100 != 0) || anio % 400 ==0)
//    {
//        if(mes == 2)
//        {
//            printf("El mes tiene 29 dias");
//        }
//        if(mes == 1 || mes == 3 || mes == 5 || mes ==7 || mes==8 ||
//                mes == 10 || mes == 12)
//        {
//            printf("El mes tiene 31 dias");
//        }
//        if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
//        {
//            printf("El mes tiene 30 dias");
//        }
//
//
//
//    }
//    else
//    {
//        if(mes == 1 || mes == 3 || mes == 5 || mes ==7 || mes==8 ||
//                mes == 10 || mes == 12)
//        {
//            printf("El mes tiene 31 dias");
//        }
//        if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
//        {
//            printf("El mes tiene 30 dias");
//        }
//        if(mes == 2)
//        {
//            printf("El mes tiene 28 dias");
//        }
//    }
//
//}





/*
//Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado.
// Calcular su sueldo tomando
//en cuenta que recibe un premio de $500 si trabajo más de 50 horas y,
//además, si trabajó más de 150 horas se le otorgan $1000 adicionales.
//
//*/
//
//int main()
//{
// int valor_hora;
// int cant_hs_trabajadas;
// float sueldo = 0;
// printf("Ingrese el valor por hora: \n");
// scanf("%d",&valor_hora);
// printf("Ingrese cantidad de horas trabajadas: \n");
// scanf("%d",&cant_hs_trabajadas);
// sueldo = (valor_hora * cant_hs_trabajadas);
// if(cant_hs_trabajadas >50 && cant_hs_trabajadas <=150)
//    {
//        sueldo += 500;
//    }else
//    {
//        if(cant_hs_trabajadas >150)
//            {
//                sueldo += 1500;
//            }
//    }
//    printf("El sueldo del empleado es %.2f",sueldo);
//
//}





/*
Un fabricante de repuestos para tractores ha descubierto que ciertos
artículos identificados por los
números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000
son defectuosos. Se desea
confeccionar un programa al que informándole el número de catálogo indique
 si el artículo es o no
defectuoso. Los artículos del catálogo van desde el 1200 al 90000.
Si se ingresa otro número informar “FUERA DE CATALOGO”.

*/

//int main()
//{
//    int num_cat;
//    printf("Ingrese numero de catalogo: ");
//    scanf("%d",&num_cat);
//    if(num_cat>=1200 && num_cat<=90000)
//        {
//            if( (num_cat>= 12121 && num_cat<=18081)||
//                (num_cat>=30012 && num_cat<=45565) ||
//                (num_cat>=67000 && num_cat<=68000) )
//               {
//                   printf("Articulo defectuoso");
//               }else
//               {
//                   printf("Articulo NO defectuoso");
//               }
//        }else
//        {
//            printf("FUERA DE CATALOGO");
//        }
//
//}

/*
//La farmacia Sindical efectúa descuentos a sus afiliados según
//el importe de la compra con la siguiente escala:
//a. menor de $55 el descuento es del 4.5%
//b. entre $55 y $100 el descuento es del 8%
//c. más de $100 el descuento es del 10.5%
//Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
//mensajes aclaratorios.
//*/
//
//int main()
//{
// float importe;
// float desc;
// printf("Ingrese importe: ");
// scanf("%f",&importe);
//
// if(importe < 55)
//    {
//        desc = importe*4.5/100;
//        importe = importe - desc;
//    }
// if(importe>= 55 && importe<100)
//    {
//        desc = importe*8.0/100;
//        importe = importe - desc;
//    }
// if(importe>=100)
//    {
//        desc = importe*10.5/100;
//        importe = importe - desc;
//    }
//    printf("El descuento realizado es %.2f y precio neto %.2f",desc,importe);
//}



/*4.15. Un negocio de artículos de computación vende DVDs según la
siguiente escala de precios:
• sueltos, entre 1 y 9 a $15 c/u.
• la caja de 10 cuesta $120.
• la caja de 50 cuesta $500.
Si la compra excede las 100 unidades se efectúa un descuento del 10%.
NOTA: se aceptan compras entre 1 y 500 DVDs.
Se pide que se ingrese una cantidad de DVDs que se quiere comprar y
calcule e informe el importe a pagar
*/

//int main()
//{
//    int cant_dvds;
//    int guardo;
//    float costo;
//    printf("Ingrese cantidad de dvds entre 1 y 500:");
//    scanf("%d",&cant_dvds);
//    guardo = cant_dvds;
//    costo = 0;
//    if(cant_dvds>=1 && cant_dvds<=500)
//    {
//
//        if(cant_dvds>=50)
//        {
//            costo = (cant_dvds/50) * 500;
//            cant_dvds = cant_dvds %50;
//
//            if(cant_dvds>=10)
//            {
//                costo = costo + ((cant_dvds /10) * 120) ;
//                cant_dvds = cant_dvds %10;
//                costo = costo + (cant_dvds*15);
//
//            }
//            else
//            {
//                costo = costo + ( cant_dvds  *15);
//            }
//
//        }
//        else
//        {
//            if(cant_dvds>=10 && cant_dvds<50)
//            {
//                costo = costo + (cant_dvds/10) * 120;
//                cant_dvds = cant_dvds % 10;
//                costo = costo + (cant_dvds*15);
//            }
//            else
//            {
//                costo = cant_dvds * 15;
//            }
//        }
//        if(guardo >100)
//        {
//            costo = costo - (costo*10/100);
//            printf("Usted ha comprado %d dvd's su importe total es: %.2f",guardo,costo);
//        }
//        else
//        {
//            printf("Usted ha comprado %d dvd's su importe total es: %.2f",guardo,costo);
//        }
//
//
//    }
//    else
//    {
//        printf("No aceptamos esa cantidad de Dvd's a comprar\n");
//    }
//    return 0;
//
//}




/*
Un negocio vende distintos artículos identificados por un código, según se muestra:
• código 1; 10; 100: 10 pesos la unidad.
• código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
• código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del
10% sobre el total de la compra.
• código 4; 44: 1 peso la unidad.

Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se
informe el importe de la compra, con las siguientes leyendas

*/
//int main()
//{
//    int cod_art;
//    int cantidad;
//    float importe;
//    printf("Ingrese codigo de articulo: ");
//    scanf("%d",&cod_art);
//    printf("INGRESE CANTIDAD A COMPRAR: ");
//    scanf("%d",&cantidad);
//    if(cod_art == 1 || cod_art == 10 || cod_art == 100)
//    {
//        importe = cantidad * 10;
//    }
//    if(cod_art ==2 || cod_art == 22 || cod_art == 222 )
//    {
//        if(cantidad>=10)
//        {
//
//            importe = (cantidad/10*65)+(cantidad%10*7);
//
//        }
//        else
//        {
//            importe = cantidad * 7;
//        }
//    }
//    if(cod_art == 3 || cod_art == 33  )
//    {
//        if(cantidad>10)
//        {
//            importe = cantidad*3 - (cantidad*3*10/100.0);
//        }
//        else
//        {
//            importe = cantidad *3;
//        }
//    }
//    if(cod_art == 4 || cod_art == 44)
//    {
//        importe = cantidad*1;
//    }
//
//    printf("ARTICULO %d  CANTIDAD %d IMPORTE A PAGAR $ %.2f",cod_art,cantidad,
//           importe);
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include<ctype.h>
//
//int main()
//{
//    int num_historia;
//    char codigo;
//    float importe;
//    printf("\nIngrese codigo de prestacion: ");
//    scanf("%c",&codigo);
//    printf("Ingrese numero de historia del paciente: ");
//    scanf("%d",&num_historia);
//
//    codigo = toupper(codigo);
//
//    if(codigo == 'A')
//        {
//            importe = 20;
//        }
//    if(codigo == 'D')
//        {
//            importe = 40;
//        }
//    if(codigo == 'F')
//        {
//            importe = 60;
//        }
//    if(codigo == 'M')
//        {
//            importe = 150;
//        }
//     if(codigo == 'T')
//        {
//            importe = 150;
//        }
//
//    printf("\nNUMERO DE HISTORIA \t  CODIGO \tIMPORTE A PAGAR: \n");
//    printf("      %d \t\t     %c  \t     %.2f",num_historia,codigo,importe);
//    return 0;
//
//}
//




/*
Confeccionar un programa que permita ingresar la fecha actual (día, mes y año) y la fecha de nacimiento
de una persona (día, mes y año). Con ambos datos debe calcular la edad de dicha persona.
*/

/// Como todavía no se ve validación se supone que el usuario mete los datos correctos.
/// No se tiene en cuenta anios bisiestos
//int main()
//{
//    int dia,mes,anio;
//    int dia1,mes1,anio1;
//
//    int result_anio;
//    int result_mes;
//    int result_dia;
//    printf("Ingrese fecha de nacimiento: ");
//    scanf("%d %d %d",&dia,&mes,&anio);
//
//    printf("Ingrese fecha actual: ");
//    scanf("%d %d %d",&dia1,&mes1,&anio1);
//
//    if(anio1 > anio && mes1>mes)
//        {
//            result_anio = anio1 - anio;
//            printf("La edad es : %d",result_anio);
//        }else
//        {
//            if(anio1 > anio && mes1 == mes)
//                {
//                    if(dia1>dia)
//                        {
//                            result_anio = anio1 - anio -1;
//                            printf("La edad es : %d",result_anio);
//                        }else
//                        {
//                            result_anio = anio1- anio;
//                            printf("La edad es : %d",result_anio);
//                        }
//
//                }else
//                {
//                    if(anio1> anio && mes1<mes)
//                        {
//                            result_anio = anio1- anio;
//                            printf("La edad es : %d",result_anio);
//                        }
//                }
//
//        }
//
//    if(anio1 == anio)
//        {
//            if(mes1 >mes)
//                {
//                    result_mes = mes1 - mes;
//                    printf("La edad es en meses : %d \n",result_mes);
//                }
//            if(mes1 == mes)
//                {
//                    printf("recien nacido, apneas tiene unos dias");
//                }
//        }
//
//
//
//
//
//}
