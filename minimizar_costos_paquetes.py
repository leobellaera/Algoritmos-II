"""Se tienen paquetes que se quieren transportar, y camiones para realizar dichos transportes.
 Cada camión puede utilizarse más de una vez, y puede utilizarse para algunos paquetes 
 (no todos los camiones pueden transportar todos los paquetes, se conoce cuáles paquetes puede llevar cada camión)
  y cada camión tiene un costo de envío diferente (por cada paquete se debe realizar un envío por separado).

Proponer, en pseudocódigo, un algoritmo Greedy que permita determinar qué camiones utilizar para cada paquete,
 de forma de minimizar los costos. ¿Por qué el algoritmo implementado es de tipo Greedy?
  ¿Cuál es el orden de dicho algoritmo? ¿Es óptima (siempre) la solución? Justificar."""

def minimizar_costos(paquetes, camiones):
	#Suponemos que al menos un camión puede llevar a cada paquete para tener solución
	solucion = 0
	for paquete in paquetes:
		minimo_costo_paquete = camiones[0][0] #camiones es una lista de tuplas de la forma: (costo_envio, tipo_de_paquetes_aceptados)
		for camion in camiones:
			if camion < minimo_costo_paquete and camion_puede_transportar(paquete,camion) and camion_esta_desocupado(camion):
				minimo_costo_paquete = camion[0]
		solucion+=minimo_costo_paquete
	return solucion



#La solución no siempre es óptima y el orden es O(p*q)

