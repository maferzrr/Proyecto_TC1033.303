#pragma once
#include <iostream>
#include <vector> 
#include "ClassPersonalTask.h"
#include "ClassWorkTask.h"

using namespace std;

class ClassFlow {
private:
    vector<PersonalTask> listaPersonal;
    vector<WorkTask> listaTrabajo;

public:
    // Constructor vacío
    ClassFlow() {}

    void agregarPersonal(PersonalTask& tarea) {
        listaPersonal.push_back(tarea); 
        cout << "Tarea personal agregada con exito." << endl;
    }

    void eliminarPersonal(int indice) {
    
        if (indice >= 0 && indice < listaPersonal.size()) {
            listaPersonal.erase(listaPersonal.begin() + indice);
            cout << "Tarea personal eliminada." << endl;
        } else {
            cout << "Error: Indice no valido." << endl;
        }
    }


    void agregarTrabajo(WorkTask& tarea) {
        listaTrabajo.push_back(tarea);
        cout << "Tarea de trabajo agregada con exito." << endl;
    }

    void eliminarTrabajo(int indice) {
        if (indice >= 0 && indice < listaTrabajo.size()) {
            listaTrabajo.erase(listaTrabajo.begin() + indice);
            cout << "Tarea de trabajo eliminada." << endl;
        } else {
            cout << "Error: Indice no valido." << endl;
        }
    }


    void listarTareas() {
        cout << "\n TAREAS PERSONALES " << endl;
        for (int i = 0; i < listaPersonal.size(); i++) {
            cout << "[" << i << "] "; 
            listaPersonal[i].MostrarDetalles(); 
        }

        cout << "\n TAREAS DE TRABAJO " << endl;
        for (int i = 0; i < listaTrabajo.size(); i++) {
            cout << "[" << i << "] ";
            listaTrabajo[i].MostrarDetalles();
        }
    }
};