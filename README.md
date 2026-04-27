# Proyecto Programación I

## Universidad Mesoamericana

**Curso:** Programación I
**Lenguaje:** C

---

## Descripción del Proyecto

Este proyecto consiste en la implementación de un juego en modo texto basado en la eliminación de objetos (palillos) distribuidos en tres filas.

El objetivo es aplicar estructuras de control (condicionales y ciclos), funciones, variables booleanas y manejo de cadenas en lenguaje C.

---

## Objetivo del Juego

Dos jugadores se turnan para retirar una cantidad de objetos de una fila específica.

El jugador que deje **un único objeto restante pierde**.

---

## Reglas del Juego

1. Participan **2 jugadores** por turnos.
2. Existen **3 filas**:

   * Fila 1: 3 objetos
   * Fila 2: 5 objetos
   * Fila 3: 7 objetos
3. En cada turno:

   * El jugador elige una fila
   * Retira la cantidad de objetos deseada (sin exceder lo disponible)
4. Si queda **1 objeto en el turno de un jugador**, ese jugador pierde.
5. Se asignan puntos:

   * 🥇 Ganar: +3 puntos
   * 🤝 Empate: +1 punto
   * ❌ Perder: 0 puntos

---

## Funcionalidades Implementadas

* Menú principal:

  * Iniciar juego
  * Ver instrucciones
  * Salir
* Turnos alternados entre jugadores
* Visualización gráfica de las filas con caracteres (`|`)
* Validación de movimientos
* Sistema de puntaje acumulativo
* Contador de partidas jugadas
* Opción de revancha

---

## Conceptos Aplicados

* Estructuras de control (`if`, `switch`, `while`)
* Funciones
* Variables booleanas (`bool`)
* Manejo de cadenas (`char[]`)
* Validación de entrada
* Lógica de juego

---

##  Cómo ejecutar el programa

### Compilar

```bash
gcc proyecto.c -o proyecto
```

### Ejecutar

```bash
./proyecto
```

---

## Estructura del Proyecto

```
 Proyecto-Corto
 ├── proyecto.c
 ├── proyecto.cpp
 ├── README.md
 ├── diagrama_flujo.pdf
 └── Instrucciones.docx
```

---

## Integrantes

* Obed Isaías De León Carrillo   202608032
* Pedro José Ajanel Velasquez    202608029
* Francisco Javier Puac Rivera   202408030

---

## Notas

* El proyecto cumple con las restricciones:

  * Uso de lenguaje C
  * Uso de lenguaje C++
  * Uso de funciones
  * Uso de variables booleanas
  * Interfaz en modo texto
* No utiliza punteros ni estructuras avanzadas, siguiendo las indicaciones del curso.

---


## Estado del Proyecto

✅ Funcional
✅ Cumple requerimientos
✅ Listo para evaluación

---
