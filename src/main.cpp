/*
====================================================================
Materia: Laboratorio de Programación (LPR)
E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
Curso: 5° Año 3° División - Grupos A-B
Profesor: Prof. York & Prof. Yamil - Mansilla Muñoz York Elías
Archivo: main.cpp
Objetivo: Control de accesos operando directamente sobre la RAM con punteros.
====================================================================
*/

#include <iostream>
using namespace std;

int main() {
    int edad = 0;
    int* p = &edad; // El puntero 'p' guarda la dirección de memoria física de 'edad'

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // TODO: Reemplaza "TU NOMBRE Y APELLIDO" por tu nombre real antes de entregar
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << " CONTROL DE ACCESO RAM - ESTUDIANTE: Teo Laguna " << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese su edad: ";

    // ====================================================================
    // 1. CAPTURA MEDIANTE DESREFERENCIACIÓN
    // Usamos 'cin >> *p;' porque el asterisco '*' desreferencia al puntero.
    // Guarda el número directamente en el casillero de memoria original de 'edad'.
    // Si pusiéramos 'cin >> p;' sin asterisco, intentaríamos sobrescribir
    // la dirección hexadecimal física de la RAM, provocando error de compilación.
    // ====================================================================
    cin >> *p;

    cout << "\n--- ANALIZANDO ACCESO SEGURO EN MEMORIA ---" << endl;

    // ====================================================================
    // 2. CONDICIONAL CON PUNTERO DESREFERENCIADO
    // Evaluamos el valor alojado en la memoria usando '*p >= 18'.
    // Si mostramos solo 'p', se imprime la dirección hexadecimal (ej: 0x61fe1c).
    // ====================================================================
    if (*p >= 18) {
        cout << "[ACCESO APROBADO] El usuario es mayor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    } else {
        cout << "[ACCESO RECHAZADO] Menor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    }
    cout << "=====================================================" << endl;
    return 0;
}
