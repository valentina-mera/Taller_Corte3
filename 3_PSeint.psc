Algoritmo ejercicio_3

    Definir tiempo, horas, minutos, sgundos Como real

	    Escribir "Por favor ingresa el tiempo transcurrido en segundos: "

    Leer tiempo

	

    horas <- tiempo / 3600

    minutos <- (tiempo % 3600) / 60

    sgundos <- (tiempo%60)

	

    Escribir "El tiempo total es: "

    Escribir "Horas: ", horas

    Escribir "Minutos: ", minutos

    Escribir "Segundos: ", sgundos

FinAlgoritmo

