def ejecicio01():
  #Definir Variables y otros
  print("Ejemplo Estructura Condicional 01")
  motoP=0
  #Datos de entrada
  cantidadx=int(input("Ingrese cantidad de lapices:"))
  #Proceso
  if cantidadx>=1000:
    montoP=cantidadx*0.80
  else:
    montoP=cantidadx*0.90
  #Datos de Salida
  print("El Monto a pagar es:", montoP)

ejecicio01()