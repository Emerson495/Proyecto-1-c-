#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Función para el Ejercicio 12
int elevarAlCuadrado(int n) {
    return n * n;
}

int main() {
    int opcionPrincipal;

    do {
        cout << "\n==========================================\n";
        cout << "       MENU PRINCIPAL DE EJERCICIOS       \n";
        cout << "==========================================\n";
        cout << "1.  Datos Personales\n";
        cout << "2.  Entrevista\n";
        cout << "3.  Promedio y Porcentajes\n";
        cout << "4.  Area de un Triangulo\n";
        cout << "5.  Numero de Digitos\n";
        cout << "6.  Mayor de Dos Numeros\n";
        cout << "7.  Tabla de Multiplicar\n";
        cout << "8.  Contador de Pares (1 al 100)\n";
        cout << "9.  Factorial\n";
        cout << "10. Submenu Operaciones (Sumar/Restar/Porcentaje)\n";
        cout << "11. Arreglo de 5 Numeros y Promedio\n";
        cout << "12. Elevar al Cuadrado\n";
        cout << "13. Arreglo de Nombres (Orden Alphabetico)\n";
        cout << "14. Validar Contrasena\n";
        cout << "15. Numero Positivo, Negativo o Cero\n";
        cout << "0.  Salir del Programa\n";
        cout << "------------------------------------------\n";
        cout << "Elige una opcion (0-15): ";
        cin >> opcionPrincipal;
        cin.ignore(); // Limpiar el buffer de lectura

        cout << "\n------------------------------------------\n";

        switch (opcionPrincipal) {
            case 1: { // Ejercicio 1
                string nombre, comida, musica, libro;
                int edad;
                cout << "Hola mundo, bienvenidos al curso de C++\n";
                cout << "Ingresa tu nombre: "; getline(cin, nombre);
                cout << "Ingresa tu edad: "; cin >> edad;
                cin.ignore();
                cout << "Tu comida favorita: "; getline(cin, comida);
                cout << "Tu musica favorita: "; getline(cin, musica);
                cout << "Tu libro favorito: "; getline(cin, libro);
                cout << "\n--- Resumen ---\n";
                cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nComida: " << comida
                     << "\nMusica: " << musica << "\nLibro: " << libro << endl;
                break;
            }
            case 2: { // Ejercicio 2
                string nombre, profesion, pais, idiomas;
                cout << "Nombre: "; getline(cin, nombre);
                cout << "Profesion que le gustaria ejercer: "; getline(cin, profesion);
                cout << "Pais que le gustaria visitar: "; getline(cin, pais);
                cout << "Idiomas que le gustaria aprender: "; getline(cin, idiomas);
                cout << "\nDatos recolectados:\n";
                cout << "Usuario: " << nombre << ", Profesional de: " << profesion
                     << ", Destino: " << pais << ", Idiomas: " << idiomas << endl;
                break;
            }
            case 3: { // Ejercicio 3
                float n1, n2, n3, suma, prom, p70, p30;
                cout << "Ingrese dos numeros del 1 al 10: "; cin >> n1 >> n2;
                suma = n1 + n2;
                prom = suma / 2;
                p70 = prom * 0.70;
                cout << "Ingrese otro numero del 1 al 10: "; cin >> n3;
                p30 = n3 * 0.30;
                cout << "Resultado final (70% del promedio + 30% del numero): " << p70 + p30 << endl;
                break;
            }
            case 4: { // Ejercicio 4
                float base, altura, area;
                cout << "Ingrese la base: "; cin >> base;
                cout << "Ingrese la altura: "; cin >> altura;
                area = (base * altura) / 2;
                cout << "El area es: " << area << endl;
                break;
            }
            case 5: { // Ejercicio 5
                string numero;
                cout << "Ingrese un numero: "; cin >> numero;
                cout << "El numero tiene " << numero.length() << " digitos." << endl;
                break;
            }
            case 6: { // Ejercicio 6
                float n1, n2;
                cout << "Ingrese el primer numero: "; cin >> n1;
                cout << "Ingrese el segundo numero: "; cin >> n2;
                if (n1 > n2) {
                    cout << "El mayor es: " << n1 << endl;
                } else if (n2 > n1) {
                    cout << "El mayor es: " << n2 << endl;
                } else {
                    cout << "Ambos numeros son iguales." << endl;
                }
                break;
            }
            case 7: { // Ejercicio 7
                int num;
                cout << "Ingrese un numero para ver su tabla de multiplicar: "; cin >> num;
                cout << "\nTabla del " << num << ":" << endl;
                for(int i = 1; i <= 10; i++) {
                    cout << num << " x " << i << " = " << (num * i) << endl;
                }
                break;
            }
            case 8: { // Ejercicio 8
                cout << "Numeros pares del 1 al 100:" << endl;
                for (int i = 2; i <= 100; i += 2) {
                    cout << i << " ";
                }
                cout << endl;
                break;
            }
            case 9: { // Ejercicio 9
                int n;
                long long factorial = 1;
                cout << "Ingrese un numero para calcular su factorial: "; cin >> n;
                if (n < 0) {
                    cout << "Error: No existe factorial de numeros negativos.";
                } else {
                    for(int i = 1; i <= n; i++) {
                        factorial *= i;
                    }
                    cout << "El factorial de " << n << " es: " << factorial << endl;
                }
                break;
            }
            case 10: { // Ejercicio 10
                int opcionSubmenu;
                float a, b;
                do {
                    cout << "\n--- SUBMENU OPERACIONES ---\n";
                    cout << "1. Sumar\n2. Restar\n3. Porcentaje (a del b)\n4. Volver al menu principal\n";
                    cout << "Elija una opcion: "; cin >> opcionSubmenu;
                    if (opcionSubmenu >= 1 && opcionSubmenu <= 3) {
                        cout << "Ingrese dos numeros: "; cin >> a >> b;
                    }
                    switch(opcionSubmenu) {
                        case 1: cout << "Resultado: " << (a + b) << endl; break;
                        case 2: cout << "Resultado: " << (a - b) << endl; break;
                        case 3: cout << "Resultado: " << (a * b / 100) << "%" << endl; break;
                        case 4: cout << "Regresando..." << endl; break;
                        default: cout << "Opcion no valida." << endl;
                    }
                } while(opcionSubmenu != 4);
                break;
            }
            case 11: { // Ejercicio 11
                float numeros[5];
                float suma = 0;
                cout << "Ingresa 5 numeros:" << endl;
                for(int i = 0; i < 5; i++) {
                    cout << "Numero " << i + 1 << ": ";
                    cin >> numeros[i];
                    suma += numeros[i];
                }
                cout << "El promedio es: " << suma / 5 << endl;
                break;
            }
            case 12: { // Ejercicio 12
                int num;
                cout << "Ingresa un numero: ";
                cin >> num;
                cout << "El cuadrado de " << num << " es " << elevarAlCuadrado(num) << endl;
                break;
            }
            case 13: { // Ejercicio 13
                string nombres[3];
                cout << "Ingresa 3 nombres de estudiantes:" << endl;
                for(int i = 0; i < 3; i++) {
                    cout << "Nombre " << i + 1 << ": ";
                    cin >> nombres[i];
                }
                sort(nombres, nombres + 3);
                cout << "\nNombres ordenados alfabeticamente:" << endl;
                for(int i = 0; i < 3; i++) {
                    cout << nombres[i] << endl;
                }
                break;
            }
            case 14: { // Ejercicio 14
                string password;
                string claveCorrecta = "clave123";
                cout << "Ingresa la contrasena: ";
                cin >> password;
                if (password == claveCorrecta) {
                    cout << "Acceso concedido." << endl;
                } else {
                    cout << "Acceso denegado." << endl;
                }
                break;
            }
            case 15: { // Ejercicio 15
                float num;
                cout << "Ingresa un numero: ";
                cin >> num;
                if (num > 0) {
                    cout << "El numero es positivo." << endl;
                } else if (num < 0) {
                    cout << "El numero es negativo." << endl;
                } else {
                    cout << "El numero es cero." << endl;
                }
                break;
            }
            case 0:
                cout << "¡Saliendo del programa!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intenta nuevamente." << endl;
                break;
        }

    } while (opcionPrincipal != 0);

    return 0;
}
