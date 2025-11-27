// main.cpp

#include <iostream>
#include <string>
// Incluir las clases
#include "WorkTask.h" 
#include "PersonalTask.h" 

using namespace std;

int main() {
    cout << "==============================\n";
    cout << "          CLASSFLOW         ";
    cout << "==============================\n";

    // 1. PRUEBA DE CLASE WORKTASK 
    cout << "\n--- TAREA DE TRABAJO ---\n";
    WorkTask tareaTrabajo("Documentación Final", "2025-11-28", "POO C++");
    tareaTrabajo.display_details();
    tareaTrabajo.set_deadline("2025-12-05");
    tareaTrabajo.mark_completed();
    tareaTrabajo.display_details();

    // 2. PRUEBA DE CLASE PERSONALTASK
    cout << "\n--- TAREA PERSONAL ---\n";
    // Constructor: (nombre, tipo, tiempo planeado)
    PersonalTask tareaPersonal("Aprender Inglés", "Estudio", 45);
    tareaPersonal.display_details();
    
 
    cout << "-> Tipo de actividad: " << tareaPersonal.get_activity_type() << endl;


    tareaPersonal.mark_completed(); 
    tareaPersonal.display_details();


    cout << "\n=================================================\n";

    return 0;
}