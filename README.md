# **VIDEOJUEGO - DAWN OF EVIL**

## **INTRODUCIÓN**

El siguiente videojuego fue desarrollado como presentación del trabajo final en el curso de Programación II de la carrera de Ciencias de la Computación en la UPC. Esta aplicación fue elaborada con el lenguaje C++ y se utilizó principalmente Windows Forms para la interfaz del programa. 

A continuación se presenta el diseño del diagrama de clases, en donde se comparten las funciones utilizadas para cada clase:
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/image.png)

## **DESARROLLO**

### **Personajes**
Se utilizaron sprites públicos para la caraacterización de los personajes.  
  

**Líder**  
Es el personaje principal, y a quien nosotros controlamos. Tiene el deber de guiar a los aliados para recolectar los medicamentos.  
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/POGRA%20II_FINAL/lider.png)

**Aliado**  
Compañeros que seguirán al líder a donde vaya, se encargar de transportar los medicamentos. Son vulnerables a los ataques de los agentes.  
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/POGRA%20II_FINAL/aliado.png)

**Agente**  
Enemigos del Líder y los Aliados, son habitantes que han alcanzado su etapa final de infección. Atacarán a los aliados en caso entren dentro de su rango.  
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/POGRA%20II_FINAL/agente.png)

**Habitante**  
Residentes del pueblo que fue afectado por el virus, se encuentran infectados y sólo observaran al Líder.  
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/POGRA%20II_FINAL/habitante.png)

**Cura**  
Medicamento a ser recolectado por los aliados. Aparece aleatoriamente en el mapa.  
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/POGRA%20II_FINAL/pastilla.png)


### **Mapas**
Se utilizaron los siguientes escenarios como representación de los niveles a superar  
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/POGRA%20II_FINAL/mapa1.png)
![](https://github.com/Shark7EnzoCamargo/Videojuego-RPG/blob/master/POGRA%20II_FINAL/mapa2.png)



## **JUGABILIDAD**  

###**Parámetros**  
Al ejecutar el programa cargará una pestaña con el cual se podrán determinar varios parámetros que afectaran la jugabilidad del programa:  
**Tiempo:** La duración de la partida  
**Numero de habitantes:** Configura el número de pobladores de la partida  
**Numero de agentes:** Configura el número de agentes de la partida  
**Numero de aliados:** Configura el número de aliados con el que empezará el Líder




