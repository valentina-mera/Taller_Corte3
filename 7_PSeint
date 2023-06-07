Algoritmo ejercicio7
	Definir sb,cd, cca, h, nh,nmd, sueldobruto, IRPF, sn,RIRPF como real 
    Escribir   " Por favor escribir los datos correspondintes"
	Escribir "Sueldo base " 
    leer  sb
    EScribir  " complemento de destino "
    leer cd
    Escribir   " complemento de cargo academico  " 
    leer cca
    Escribir " horas extras realizadas   " 
    Leer h
    Escribir  " numero de hijos " 
    Leer nh
    Escribir  " numero de mayores dependientes  " 
    Leer nmd
    
    sueldobruto= sb+ cd+ cca + (h*23)
    
	Si (nh>0 Y nmd >0 O nh>0 O  nmd>0  ) Entonces
		IRPF= 24- ((2*nh)+(1*nmd))
	SiNo
		IRPF= 24
	Fin Si
    RIRPF= sueldobruto* (IRPF/100)
    sn= sueldobruto-RIRPF
    Escribir   " Calculo de nomida"
	EScribir "Sueldo bruto: ", sueldobruto
	Escribir "Porcentaje de IRPF:  ", IRPF 
	Escribir "Retencion por IRPF: ",RIRPF, "$"
Escribir "Sueldo neto: ",  sn, "$" 
    
FinAlgoritmo
