#include <stdio.h>
#include <math.h>

void volumen_cono() //ejercicio_1
{
    float radio = 14.5;
    float height = 26.79;
    float pi =3.141592;
    
    float volume_cone =(pi*radio*radio*height)/3; // formula para hallar volumen de un cono
    printf ("El volumen del cono es: %f\n",volume_cone);
}
void Fahrenheit_Celsius()//ejercicio_2
{
    float f,m, r,c ;
    printf (" Escribir un numero real en grados Faherenheit \n \n");
    scanf ("%f", &f);
    // se restan los grados Faherenheit con 32 
    r= f-32;
    // Se multiplica el resultado dado arriba entre 5
    m= 5 * r;
    // Por ultimo se divide entre 9, para poder convertir los grados Faherenheit a Celsius
    c= m/9;
    printf ( " \n La conversion de los gardos Faherenheit a Celsius es %f \n " , c);
}
void Seg_H_Min()//ejercicio_3
{
    float tiempo, horas, minutos, segundos;

    printf("Por favor ingresa el tiempo transcurrido en segundos: ");
    scanf("%f", &tiempo);

    horas = tiempo / 3600;
    minutos = fmod(tiempo, 3600) / 60;
    segundos = fmod(tiempo, 60);
    printf("el tiempo que ingresaste es igual a:");
    printf("Horas: %.0f\n", horas);
    printf("Minutos: %.0f\n", minutos);
    printf("Segundos: %.0f\n", segundos);
}
void Nota_Final()//ejercicio_4
{
    float parcial, taller, quiz, ejercicioClase, quiz2, exposicion, notaFinal;
    printf("Para poder calcular tu nota final porfavor ayudanos con los siguientes datos\n");
    // Pedir al usuario las calificaciones
    printf("Ingrese la calificacion obtenida en el Parcial: ");
    scanf("%f", &parcial);

    printf("Ingrese la calificacion obtenida en el Taller: ");
    scanf("%f", &taller);

    printf("Ingrese la calificacion obtenida en el Quiz: ");
    scanf("%f", &quiz);

    printf("Ingrese la calificacion obtenida en el Ejercicio de Clase: ");
    scanf("%f", &ejercicioClase);

    printf("Ingrese la calificacion obtenida en el Quiz 2: ");
    scanf("%f", &quiz2);

    printf("Ingrese la calificacion obtenida en la Exposicion: ");
    scanf("%f", &exposicion);

    // Calcular la nota final
    notaFinal = (parcial + taller + quiz + ejercicioClase + quiz2 + exposicion) / 6.0;

    // Mostrar la nota final
    printf("\nLa nota final es: %.2f\n", notaFinal);

}
void Ecu_1()//ejercicio_5
{
    int r, a, b, c, d;
    float resultado;

    printf("Ingresa el valor de r: ");
    scanf("%d", &r);

    printf("Ingresa el valor de a: ");
    scanf("%d", &a);

    printf("Ingresa el valor de b: ");
    scanf("%d", &b);

    printf("Ingresa el valor de c: ");
    scanf("%d", &c);

    printf("Ingresa el valor de d: ");
    scanf("%d", &d);
    //formula
    resultado = 4 / (3 * (r + 34)) - 9 * (a + b * c) + (3 + d * (2 + a)) / (a + b * d);

    printf("Ya remplazados los valores el resultado es : %.2f\n", resultado);
}
void Ecu_2()//ejercicio_6
{
    int x, y; 
    float sigma, lambda, alfa, f  ;
//Primero se define el valor de las variables 
    x= 12;
    sigma= 2.1836;
    y= 3;
    lambda= 1.11695;
    alfa= 328.67;
// A continuacion se escribe la formula dada, se tiene en cuenta donde van los determinados parentesis 
   f=( 3*((x+sigma*y)/ (pow(x,2) - pow(y,2))))- (lambda * (alfa-13.7));
    printf ( " \n El resultado de la ecuacion es   %.4f " , f );
}
void Nomina()//ejercicio_7
{
    float sb,cd, cca, h, nh,nmd, sueldobruto, IRPF, sn,RIRPF ; 
    printf ( " Por favor escribir los datos correspondintes  \n Sueldo base  " );
    scanf("%f", &sb);
    printf ( " complemento de destino\n " );
    scanf("%f", &cd);
    printf ( " complemento de cargo academico \n " );
    scanf("%f", &cca);
    printf ( " horas extras realizadas  \n " );
    scanf("%f", &h);
    printf ( " numero de hijos  \n " );
    scanf("%f", &nh);
    printf ( " numero de mayores dependientes  \n " );
    scanf("%f", &nmd);
    
    /*
     primero se saca el resultado del sueldo bruto, donde es la suma del Sueldo base,
     complemento de destino,cargo academico y las horas extras realizadas,
     el cual se multiplica en 23, porque es el valor de una hora extra
    */ 
    sueldobruto= sb+ cd+ cca + (h*23);
    /*
    Se utiliza el condicional if, donde dice que si el numero de hijos y el 
    numero de mayores dependientes es mayor a cero se debe restar al Porcentaje los 
    digitos correspondintes
    */
    if(nh>0 && nmd>0 ||nh>0 || nmd>0  ) 
    {
        IRPF= 24- ((2*nh)+(1*nmd));
    }
   // Pero si el numero de hijos y mayores dependientes es cero debe pasar lo siguiente 
    else 
    { 
        IRPF= 24;
    }
    /*
    A continuacion se saca la retencion por IRPF y para sacar el sueldo neto 
    se resta el sueldo bruto y la retencion por IRPF:
    */
    RIRPF= sueldobruto* (IRPF/100);
    sn= sueldobruto-RIRPF;
    printf ("\nCalculo de nomida\n");
    printf("Sueldo bruto: %.2f $ \n",sueldobruto);
    printf("Porcentaje de IRPF: %.f\n",IRPF);
    printf("Retencion por IRPF: %.2F $", RIRPF);
    printf("\n Sueldo neto: %.2f$ \n",sn);
}
void Exp_a_d()//ejercicio_8
{
    int a = 1;
    double d = 1.0;
    
    a = 46 % 9 + 4 * 4 - 2;
    printf("a = %d\n", a);
    
    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("a = %d\n", a);
    
    a = 45 + 45 * 50 % a--;
    printf("a = %d\n", a);
    
    d = 1.5 * 3 + (++d);
    printf("d = %lf\n", d);
    
    d = 1.5 * 3 + d++;
    printf("d = %lf\n", d);
    
    a %= 3 / a + 3;
    printf("a = %d\n", a);
}
void Area_triangulo()//ejercicio_9
{
    float lado1, lado2, seno, rad, a ;
    printf ( " Escribir el valor del lado 1, del lado 2 y el angulo del triangulo en este orden  \n"  );
    scanf ("%f %f %f",&lado1, &lado2, &seno);
    
    //se debe pasar el angulo a radianes para que el programa funcione correctamente 

    rad= (seno* 3.141592)/ 180;
  //  A continuacion se usa la formula para encontrar el area del triangulo
    a= (lado1*lado2* sin(rad))/2;
    printf ( " \n El area del triangulo es %.4f " , a );
}
void Pres_Hipo()//ejercicio_10
{
    int capital, tiempo, int_anual, plazo;
    double ratio, cuota, total_pagado, intereses;
    printf("Ingrese la cantidad de capital prestado: ");
    scanf("%d",&capital);
    printf("Ingrese el interes anual: ");
    scanf("%d", &int_anual);
    printf("Ingrese los años del prestamo: ");
    scanf("%d",&tiempo);
    
    plazo = tiempo *12;
    ratio = int_anual/12.0/100.0; //ratio= int_mensual
    
    cuota = (capital*ratio)/(100 * (1 - pow(1+ratio/100, -plazo)));
    total_pagado = cuota*plazo; 
    intereses = total_pagado - capital;
    
    printf("Cuota mensual: %2.lf\n",cuota);
    printf("Total pagado al terminar el plazo: %2.lf\n", total_pagado);
    printf("Cantidad de amortizacon: %d\n", capital);
    printf("Cantidad de los intereses: %2.lf\n", intereses);
}
int main()
{
    int opc;
    do
    {
        printf("Seleccione el ejercicio que desea ver:\n");
        printf("1. Volumen de un cono\n");
        printf("2. Transformador de Fahrenheit a Celsius\n");
        printf("3. Transformador de segundos a horas y minutos\n");
        printf("4. Calcular nota final\n");
        printf("5. Ecuacion #1\n");
        printf("6. Ecuacion #2\n");
        printf("7. Nomina de un empleado\n");
        printf("8. Valores asignados a las expresiones a y d\n");
        printf("9. Area de un triangulo\n");
        printf("10.Prestamo Hipotecario\n");
        
        scanf("%d", &opc);
           switch(opc)
        {
            case 1:
            volumen_cono();
            break;
            case 2:
            Fahrenheit_Celsius();
            break;
            case 3:
            Seg_H_Min();
            break;
            case 4:
            Nota_Final();
            break;
            case 5:
            Ecu_1();
            break;
            case 6:
            Ecu_2();
            break;
            case 7:
            Nomina();
            break;
            case 8:
            Exp_a_d();
            break;
            case 9:
            Area_triangulo();
            break;
            case 10:
            Pres_Hipo();
            break;
            default:
            printf("Saliendo...");
            break;
        } 
    } while(opc !=0);
    
    return 0;
}
