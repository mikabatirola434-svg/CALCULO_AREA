/*
====================================================================
Materia: Laboratorio de Programación (LPR)
E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
Curso: 5° Año
Profesor: Prof. York
Estudiante: Mikaela Batirola
Archivo: main.cpp
Objetivo: Calcular el area de un circulo mediante funciones modulares
y simular una diana de tiro en ASCII.
====================================================================
*/

#include <iostream>
using namespace std;

// ====================================================================
// 1. PROTOTIPO DE LA FUNCIÓN
// ====================================================================

double calcularAreaCirculo(double radio);

int main() {

    double radioEstudiante;

    // ====================================================================
    // REGLA OBLIGATORIA
    // ====================================================================

    cout << "=====================================================" << endl;
    cout << " CALCULADORA DE AREA MODULAR - ESTUDIANTE: Mikaela Batirola " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;

    // FILTRO DE CONSISTENCIA
    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1;
    }

    // ====================================================================
    // 2. LLAMADA / INVOCACIÓN DE LA FUNCIÓN
    // ====================================================================

    double areaFinal = calcularAreaCirculo(radioEstudiante);

    // ====================================================================
    // 3. SALIDA DE DATOS
    // ====================================================================

    cout << "El area del circulo es: " << areaFinal << " cm2" << endl;

    // ====================================================================
    // BONUS GAMIFICACIÓN: RENDER DE LA DIANA EN CONSOLA
    // ====================================================================

    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;

    if (radioEstudiante <= 5.0) {

         cout << "       .---.       " << endl;
        cout << "      /  X  \\     -> [DIANA MINI / COMPACTA]" << endl;
        cout << "      \\  *  /     " << endl;
        cout << "       '---'       " << endl;


    } else if (radioEstudiante <= 12.0) {

       cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | /  O  \\ |   -> [DIANA ESTÁNDAR DE TIRO]" << endl;
        cout << "    | \\  *  / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;

    } else {

       cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | / .-. \\ |    " << endl;
        cout << "    | |  X  | |   -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << "    | \\ '-' / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;

    }

    cout << "=====================================================" << endl;

    return 0;
}

// ====================================================================
// 4. DEFINICIÓN / DESARROLLO DE LA FUNCIÓN
// ====================================================================

double calcularAreaCirculo(double r) {

    const double PI = 3.1415926535;

    double area = PI * r * r;

    return area;
}