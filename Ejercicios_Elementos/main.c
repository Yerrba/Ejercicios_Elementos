#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define PI 3.1415926
int main()
{
//    2.1. Se ingresan la cantidad de horas trabajadas y el valor
//    por hora de un empleado. Determinar el sueldo.
//    unsigned int cant_horas_trabajadas; // es unsigned porque es entero sin signo
//    unsigned int valor_hora; // no tiene sentido que sean valores negativos
//    //es una buena practica para ahorrar memoria
//    printf("Ingerse cantidad de horas trabajadas: ");
//    scanf("%d",&cant_horas_trabajadas);
//    printf("Ingrese el valor por hora: ");
//    scanf("%d",&valor_hora);
//    printf("El sueldo es : %d",cant_horas_trabajadas*valor_hora);

//2.2. Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.
//float nota1,nota2;
//float promedio = 0;
//printf("Ingrese nota1 y nota 2: \n");
//scanf("%f%f",&nota1,&nota2); //puedo meter 2 scanf en una linea asi
//printf("EL promedio del alumno es %.2f",promedio = ((nota1+nota2)/2) );

//2.3. Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes
//aclaratorios la suma, el producto, el cociente y el resto.
//int num1,num2;
//printf("Ingrese 2 numeros \n");
//scanf("%d%d",&num1,&num2);
//printf("La suma es: %d \n",num1+num2);
//printf("La resta es: %d \n",num1-num2);
//printf("El producto es: %d \n",num1*num2);
//printf("El cociente es: %d \n",num1/num2);
//printf("El resto es: %d ",num1%num2);

//2.4. Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
//y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.
//float pie;
//float pulgada;
//float yarda;
//float cms;
//
//printf("Ingrese una medida en pies: ");
//scanf("%f",&pie);
//
//pulgada = pie * 12;
//yarda = pie/3.0;
//cms = pulgada *2.54;
//
//printf("\n\n****PIES******PULGADAS****\n");
//printf("    %.2f \t%.2f",pie,pulgada);
//
//
//printf("\n\n****PIES*******YARDAS****\n");
//printf("    %.2f \t%.2f",pie,yarda);
//
//printf("\n\n****PIES*********CMS****\n");
//printf("    %.2f \t%.2f",pie,cms);

//2.6. El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase.
//Se ingresan la cantidad de pasajes vendidos de clase turista y de primera clase.
//Obtener la recaudación total del vuelo.

//float incremento;
//int pasaje_tursita = 8800;
//int pasaje_primera_clase;
//int cant_turista;
//int cant_primera;
//incremento = ((pasaje_tursita *30) /100) ;
//float total;
//pasaje_primera_clase = pasaje_tursita + incremento;
//printf("Ingrese cantidad de pasajes turista: ");
//scanf("%d",&cant_turista);
//printf("Ingrese cantidad de pasajes primera clase: ");
//scanf("%d",&cant_primera);
//total = ((cant_turista*pasaje_tursita)+(cant_primera*pasaje_primera_clase));
//printf("Recaudacion total del vuelo es: %.2f",total);

//2.7. Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.

//int numero;
//int unidad;
//int decena;
//int centena;
//
//printf("Ingrese un numero: ");
//scanf("%d",&numero);
//unidad = numero % 10;
//decena = (numero / 10)%10;
//centena = numero / 100;
//printf("La unidad es : %d\n",unidad);
//printf("La decena es : %d\n",decena);
//printf("La centena es : %d\n",centena);


//2.8 Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un
//número con formato (aammdd).
//
//int fecha;
//int dd;
//int mm;
//int aa;
//int largo = 6;
//char fech[largo];
//printf("Ingrese la fecha: ");
//scanf("%s",fech);
//fflush(stdin);
//printf("%c%c%c%c%c%c",fech[largo-1],fech[largo-2],fech[largo-3],
//       fech[largo-4],fech[largo-5],fech[0]);

//printf("Ingrese fecha como entero en formato ddmmaa : ");
//scanf("%d",&fecha);
//dd = fecha %100;
//mm = (fecha / 100) %100 ;
//aa = fecha / 10000;

//printf("La fecha invertia es %d%d%d",dd,mm,aa);
//el problema de este es que hago si meto la fecha 010593 ?

//2.9 Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1
//y lo informe expresado en:
//TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)

//float kibi;
//float mib;
//float gib;
//float tib;
//printf("Ingrese el numero de kibi bytes a convertir: ");
//scanf("%f",&kibi);
//mib = kibi/1024;
//gib = mib / 1024;
//tib = gib /1024;
//printf("Mib %.0f\n",mib);
//printf("Gib %.6f\n",gib);
//printf("Tib  %.8f",tib);

//2.10 Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule
//la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera.


//int radio;
//float superficie;
//float perimetro;
//float volumen;
//
//printf("Ingrese un radio: ");
//scanf("%d",&radio);
//
//superficie = (PI*radio*radio);
//perimetro = (2*PI*radio);
//volumen = ((4*PI*radio*radio)/3);
//
//printf("La superficie del circulo : %.2f\n",superficie );
//printf("El perimetro del circulo : %.2f \n",perimetro );
//printf("El volumen del circulo : %.2f",volumen );

//2.11 Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra
//individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las
//adicionales se cobran como por unidad. Indicar el precio total a abonar.

//int cant_empanada;
//int empanada = 30;
//int docena = 300;
//printf("Ingrese cantidad de empanadas a comparar: ");
//scanf("%d",&cant_empanada);
//printf("El precio total es %d",(((cant_empanada/12)*docena)+((cant_empanada%12)*empanada)));


//2.12 Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un
//programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el
//precio final (0 no aplica el descuento y 1 aplica el descuento).
//
//int codigo;
//float descuento;
//float precio;
//
//printf("Ingrese el precio del producto : ");
//scanf("%f",&precio);
//descuento = precio - ((precio *80) /100);
//
//printf("Ingrese codigo [0 no aplica desc.] [1 aplica desc.] : ");
//scanf("%d",&codigo);
//
//descuento = descuento * codigo;
//
//printf("\nPrecio final %.2f",precio - descuento);


//2.13. Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda calcular
//e informar la suma de sus dígitos hasta llegar a una sola cifra. Ej:2561 → 5.

//int numero;
//int unidad,decena,centena,mil,total;
//printf("Ingrese un numero positivo de 4 cifras: ");
//scanf("%d",&numero);
//unidad = numero %10;
//decena = (numero / 10) %10;
//centena = (numero /100)%10;
//mil = numero / 1000;
//total = mil + centena + decena+ unidad;
//printf("La suma total de los digitos de %d es %d",numero,total);



return 0;
}
