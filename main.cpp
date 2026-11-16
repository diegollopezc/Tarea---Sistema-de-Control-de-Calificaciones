// iostream para mostrar en pantalla, string para guardar nombres, iomanip para decimales y namespace para evitar repetir cout y cin.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main() {
    
// bucle 1 do-while externo, existe para guardar la respuesta S/N y valida la repeticion del programa en caso de que el usuario elija 'S'.
    char repetir = 's';

// Contadores de estudiantes aprobados (APR) , reprobados (REP) y calculacion de promedios (AVG).
    do {
        int cantidadEstudiantes;
        int apr = 0;
        int rep = 0;
        double sumaavgs = 0.0;
        double mejoravg = -1.0;
        string mejorEstudiante = "";

// bucle 2 do-while, Valida que la cantidad de estudiantes sea mayor que 0 para retornar error en caso de que no, haciendo que el while repita todo mientras sea invalido.
// Se usa do-while porque la pregunta debe hacerse al menos una vez.
        do {
            cout << "Cantidad de estudiantes: ";
            cin >> cantidadEstudiantes;
            if (cantidadEstudiantes <= 0) {
                cout << "Valor invalido. Debe ser mayor que 0.\n";
            }
        } while (cantidadEstudiantes <= 0);

// bucle 3 for, recorre cada estudiante del grupo validando los nombres hasta la cantidad determinada anteriormente en la linea 16.
        for (int i = 1; i <= cantidadEstudiantes; i++) {
            string nombre;
            double sumaNotas = 0.0;
        // double sumaNotas se reinicia en 0 para evitar que las notas se mezclen entren si.
            cout << "\n--- Estudiante " << i << " ---\n";
            cout << "Nombre: ";
            cin.ignore(10000, '\n');
            getline(cin, nombre);

// bucle 4 for, este recibe las 4 calificaciones del estudiante.
            for (int j = 1; j <= 4; j++) {
                double nota;

// bucle 5 do-while, utiliza el while en la linea 53 para repetir la solicitud hasta que la nota sea valida entre 0 y 100.
                do {
                    cout << "Calificacion " << j << ": ";
                    cin >> nota;
                    if (nota < 0 || nota > 100) {
                        cout << "Calificacion fuera de rango. Intente de nuevo.\n";
                    }
                } while (nota < 0 || nota > 100);
                sumaNotas += nota;
            }

            double avg = sumaNotas / 4;
            cout << fixed << setprecision(2);
            cout << "avg: " << avg << " - ";
// if-else que determinan si el estudiante aprobo o reprobo utilizando la variable avg.
            if (avg >= 70) {
                cout << "Aprobado\n";
                apr++;
            } else {
                cout << "Reprobado\n";
                rep++;
            }

            sumaavgs += avg;

// Guarda al estudiante con el avg mas alto.
            if (avg > mejoravg) {
                mejoravg = avg;
                mejorEstudiante = nombre;
            }
        }

        double avgGrupo = sumaavgs / cantidadEstudiantes;
// Couts para mostrar en pantalla el resumen del grupo, mostrando los apr, rep, avg del grupo y al mejor promediante de este.
        cout << "\n~~~~~ RESUMEN ~~~~~\n";
        cout << "Aprobados: " << apr << "\n";
        cout << "Reprobados: " << rep << "\n";
        cout << "Promedio del grupo: " << avgGrupo << "\n";
        cout << "Mejor promedio del grupo: " << mejorEstudiante << " (" << mejoravg << ")\n";

// bucle 6 do-while envia la pregunta de grupos y en caso de recibir una S, repite el proceso con el bucle 1 en un nuevo grupo.
        do {
            cout << "\n Procesar otro grupo? (s/n): ";
            cin >> repetir;
            if (repetir != 's' && repetir != 'n') {
                cout << "Opcion invalida. Escriba s o n.\n";
            }
        } while (repetir != 's' && repetir != 'n');

        cout << "\n";
    } while (repetir == 's');

    cout << "Programa finalizado.\n";
    return 0;
}