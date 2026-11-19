// Actividad 9 - Pensar antes de programar (Laboratorio de Programacion, EEST N.º 1)
// Ejercicios 0 a 4 resueltos en C++ y alineados con los diagramas de flujo en papel.
#include <iostream>
#include <string>
using namespace std;

// ---------- Ejercicio 0: Hola Mundo con calculo de edad ----------
void ejercicio0() {
    string nombre;
    int anioNacimiento, edad;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su anio de nacimiento: ";
    cin >> anioNacimiento;
    edad = 2026 - anioNacimiento;
    cout << "Hola " << nombre << ", tu edad estimada en 2026 es: " << edad << " anios." << endl;
}

// ---------- Ejercicio 1: Sensor de aprobacion ----------
void ejercicio1() {
    const double NOTA_MINIMA = 6;
    double nota1, nota2, promedio;
    cout << "Ingrese nota1 (1er cuatrimestre) y nota2 (2do cuatrimestre): ";
    cin >> nota1 >> nota2;
    promedio = (nota1 + nota2) / 2;
    if (promedio >= NOTA_MINIMA)
        cout << "APROBADO" << endl;
    else
        cout << "A INTENSIFICACION" << endl;
}

// ---------- Ejercicio 2: Bucle del contador de vidas ----------
void ejercicio2() {
    int vidas = 3;
    while (vidas > 0) {
        cout << "Jugador activo. Vidas restantes: " << vidas << endl;
        vidas = vidas - 1;
    }
    cout << "GAME OVER" << endl;
}

// ---------- Ejercicio 3: struct Jugador ----------
struct Jugador {
    string nickname;
    int nivel;
    bool esVIP;
};

void ejercicio3() {
    Jugador j;
    int vip;
    cout << "Nickname: ";
    cin >> j.nickname;
    cout << "Nivel: ";
    cin >> j.nivel;
    cout << "Es VIP? (1 = Verdadero, 0 = Falso): ";
    cin >> vip;
    j.esVIP = (vip == 1);
    if (j.esVIP)
        cout << "Bienvenido al Servidor VIP, " << j.nickname << endl;
    else
        cout << "Bienvenido al Servidor Estandar, " << j.nickname << endl;
}

// ---------- Ejercicio 4: Control de inventario con vectores ----------
void ejercicio4() {
    int stock[5] = {12, 0, 5, 30, 0};
    int i = 0;
    while (i < 5) {
        if (stock[i] == 0)
            cout << "ALERTA: Sin stock en la posicion " << i << endl;
        i = i + 1;
    }
}

int main() {
    int opcion;
    cout << "ACTIVIDAD 9 - Elija ejercicio (0-4): ";
    cin >> opcion;
    switch (opcion) {
        case 0: ejercicio0(); break;
        case 1: ejercicio1(); break;
        case 2: ejercicio2(); break;
        case 3: ejercicio3(); break;
        case 4: ejercicio4(); break;
        default: cout << "Opcion invalida" << endl;
    }
    return 0;
}