"""Como el servicio meteorológico nacional ha anunciado una fuerte tormenta debe refugiarlos en sus muelles lo más rapido posible
Sabiendo que el muelle i puede almacenar M[i] barcos y que la distancia entre el muelle i y el barco j es D[i][j], implementar
en pseudocódigo un algoritmo Greedy que decida en que muelle se debe almacenar cada barco minimizando la distancia total a recorrer"""

def refugiar_barcos(m,n,distancias_barcos):
	solucion = []  #la solucion será una lista en la cual el barco j debera recorrer una distancia solucion[j]
	for j in range (len(n)):
		distancia_menor = distancias_barcos[0][0]
		for i in range (len(m)):
			if distancia_barcos[i][j] < distancia_menor and m[i] > 0:
				distancia_menor = distancia_barcos[i][j]
				m[i] -= 1
		solucion.append(distancia_menor)
	return solucion



#orden m*n


