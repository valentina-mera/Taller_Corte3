Algoritmo prestamo_hipotecario

	Definir capital, tiempo, in_anual, plazo Como Entero	Definir ratio, cuota, total_pago, intereses Como Real

	Escribir "ingrese capital prestado:";

	leer capital;

	Escribir "ingrese el interes anual:";

	leer in_anual;

	Escribir "ingrese los años del prestamo: ";

	leer tiempo;

	

	plazo = tiempo*12;

	ratio = in_anual/12/100;//el ratio es el interes mensual

	cuota = (capital*ratio)/(100*(1-(1+ratio/100)^(-plazo)))

	total_pago = cuota*plazo;

	intereses = total_pago - capital;

	

	Escribir "Cuota mensual:", cuota

	Escribir "Total pagado al terminar plazo:", total_pago

	Escribir "Cantidad de amortizacion:", capital

	Escribir "Cantidad de intereses:", intereses

FinAlgoritmo
