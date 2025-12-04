# include <iostream>
# include <string>
# include "ClassFlow.h"

using namespace std;

int main() {

    ClassFlow gestor;

    int opcion = 0; 

    do { 
            // Mostrar el menú
        cout << "\n--- GESTOR DE TAREAS ---" << endl;
        cout << "1. Agregar Tarea PERSONAL" << endl;
        cout << "2. Agregar Tarea de TRABAJO" << endl;
        cout << "3. Listar todas las tareas" << endl;
        cout << "4. Eliminar Tarea Personal" << endl;
        cout << "5. Eliminar Tarea de Trabajo" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        cin.ignore(); // Limpiar el buffer de entrada para evitar lecturas incorrectas.

        if (opcion == 1) {
            string nombre, fecha, categoria;
            int tiempo;

            cout << "Ingrese Nombre de la tarea: ";
            getline(cin, nombre); 
            
            cout << "Ingrese Fecha limite (DD/MM/AAAA): ";
            getline(cin, fecha);

            cout << "Ingrese Categoria: ";
            getline(cin, categoria);

            cout << "Ingrese Tiempo aproximado (minutos): ";
            cin >> tiempo;

            PersonalTask nuevaTarea(nombre, fecha, false, categoria, tiempo);
            
            gestor.agregarPersonal(nuevaTarea);

        } 

        else if (opcion == 2) {
            string nombre, fecha, materia, prioridad;

            cout << "Ingrese Nombre de la tarea: ";
            getline(cin, nombre);

            cout << "Ingrese Fecha limite: ";
            getline(cin, fecha);

            cout << "Ingrese Asunto/Materia: ";
            getline(cin, materia);

            cout << "Ingrese Prioridad (Alta/Media/Baja): ";
            getline(cin, prioridad);

            WorkTask nuevaTarea(nombre, fecha, false, materia, prioridad);
            gestor.agregarTrabajo(nuevaTarea);

        }
        else if (opcion == 3) {
            gestor.listarTareas();
        }
        else if (opcion == 4) {
            int indice;
            cout << "Ingrese el INDICE de la tarea personal a eliminar: ";
            cin >> indice;
            gestor.eliminarPersonal(indice);
        }
        else if (opcion == 5) {
            int indice;
            cout << "Ingrese el INDICE de la tarea de trabajo a eliminar: ";
            cin >> indice;
            gestor.eliminarTrabajo(indice);
        }
        else if (opcion == 6) {
            cout << "Saliendo del programa..." << endl;
        }
        else {
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 6);

    return 0;

    }

