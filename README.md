# ACTIVIDAD 9 — PENSAR ANTES DE PROGRAMAR

**Proyecto:** ALGORITMICA
**Materia:** Laboratorio de Programación (LPR)
**Institución:** EEST N.º 1 «Eduardo Ader» — Vicente López
**Curso:** 5.º año 3.ª — Grupos A-B
**Año:** 2026
**Docente:** Mansilla Muñoz York Elías y Yamil De Jesus Ganduglia
**Alumno:** Lucas Del Pino

---

## 1. Descripción del proyecto

El presente trabajo corresponde a la Actividad 9 de Laboratorio de Programación, denominada «Pensar antes de programar».

La actividad tiene como finalidad desarrollar el razonamiento lógico y la capacidad de diseñar algoritmos antes de implementar soluciones mediante un lenguaje de programación.

Se trabaja con diagramas de flujo, pseudocódigo y pruebas de escritorio, simulando el funcionamiento de la memoria RAM y el procesamiento de instrucciones.

## 2. Objetivos

- Comprender y diseñar secuencias algorítmicas mediante diagramas de flujo.
- Simular la ejecución de algoritmos mediante pruebas de escritorio.
- Identificar el funcionamiento de variables, constantes y estructuras de control.
- Comprender el uso de estructuras, vectores y condicionales.
- Desarrollar la capacidad de analizar problemas y plantear soluciones lógicas.

## 3. Contenidos desarrollados

- **Variables y constantes:** almacenamiento y utilización de datos.
- **Condicionales:** evaluación de expresiones lógicas y toma de decisiones.
- **Bucles:** repetición de instrucciones mediante condiciones.
- **Estructuras (struct):** agrupación de diferentes tipos de datos.
- **Vectores:** almacenamiento y recorrido de elementos mediante índices.
- **Diagramas de flujo:** representación gráfica de algoritmos.
- **Pruebas de escritorio:** simulación paso a paso de la ejecución de un programa.

## 4. Ejercicios de la actividad

Además del ejemplo guiado (Ejercicio 0), la actividad está compuesta por cuatro ejercicios principales:

| Ejercicio | Descripción | Conceptos aplicados |
|:---:|---|---|
| 0 | Hola Mundo con cálculo de edad (ejemplo guiado) | Entrada, asignación y salida |
| 1 | El Sensor de Aprobación | Variables, constantes y condicionales |
| 2 | El Bucle del Contador de Vidas | Estructuras repetitivas e iteraciones |
| 3 | Registro de Jugador en Memoria | Estructuras y agrupación de datos |
| 4 | Control de Inventario con Arreglos | Vectores y recorridos |

Cada ejercicio requiere la elaboración de un diagrama de flujo y una prueba de escritorio que permita comprobar el comportamiento del algoritmo.

## 5. Estructura del repositorio

```
algoritmica/
│
├── .gitignore
├── LICENSE
├── README.md
│
├── docs/
│   └── InformeEEST1_LPR2026_ACT09_ApellidoNombre_v1.0.0.pdf
│
├── src/
│   └── main.cpp
│
└── capturas/
    └── matriz_ejecucion.png
```

### Descripción de directorios

- `docs/`: contiene el informe en formato APA 7 y las fotografías o escaneos de las resoluciones realizadas en carpeta.
- `src/`: contiene el código fuente de referencia desarrollado en C++.
- `capturas/`: almacena las capturas de pantalla que evidencian la ejecución del programa.
- `.gitignore`: establece los archivos y directorios que no deben incluirse en el repositorio.
- `LICENSE`: contiene la licencia MIT escolar.
- `README.md`: presenta la documentación general del proyecto.

## 6. Tecnologías y herramientas

- **Lenguaje de programación:** C++.
- **Control de versiones:** Git.
- **Plataformas de repositorios:** GitHub y GitLab.
- **Documentación:** Markdown y PDF con formato APA 7.
- **Entorno de desarrollo:** Visual Studio Code.

## 7. Compilación y ejecución

Desde la raíz del repositorio:

```bash
g++ src/main.cpp -o main.out
./main.out
```

El programa muestra un menú: se ingresa el número de ejercicio (0 a 4) y se ejecuta la resolución correspondiente.

Casos de prueba utilizados (coinciden con las pruebas de escritorio):

| Ejercicio | Entradas | Salida esperada |
|:---:|---|---|
| 0 | Murray, 2008 | Hola Murray, tu edad estimada en 2026 es: 18 años. |
| 1 (caso A) | 4 y 8 | APROBADO |
| 1 (caso B) | 3 y 5 | A INTENSIFICACION |
| 2 | — | Vidas restantes: 3, 2, 1 y luego GAME OVER |
| 3 | Rothbard, 5, VIP | Bienvenido al Servidor VIP, Rothbard |
| 4 | stock = [12, 0, 5, 30, 0] | Alertas en las posiciones 1 y 4 |

## 8. Documentación y entregables

La entrega contempla los siguientes elementos:

- Resolución de los cuatro ejercicios mediante diagramas de flujo.
- Pruebas de escritorio realizadas manualmente.
- Informe en PDF respetando las normas APA 7.
- Fotografías o escaneos de las hojas de carpeta.
- Código fuente resuelto y ejecutable en C++.
- Captura de pantalla de la ejecución del programa.
- Enlaces públicos a los repositorios de GitHub y GitLab.

Nombre requerido para el informe:

`InformeEEST1_LPR2026_ACT09_ApellidoNombre_v1.0.0.pdf`

## 9. Evaluación

| Criterio | Ponderación |
|---|:---:|
| Formato e informe APA 7 | 50% |
| Desarrollo técnico | 25% |
| Resoluciones y pruebas de escritorio | 25% |

El trabajo es estrictamente individual.

## 10. Conclusión

Esta actividad permite fortalecer las bases del pensamiento algorítmico, demostrando la importancia de analizar un problema y organizar sus pasos antes de comenzar a programar.

Mediante los diagramas de flujo y las pruebas de escritorio se puede comprender cómo se ejecutan las instrucciones, cómo cambian los valores de las variables y cómo se toman decisiones dentro de un algoritmo.

---

EEST N.º 1 «Eduardo Ader» — Vicente López
Laboratorio de Programación — 2026