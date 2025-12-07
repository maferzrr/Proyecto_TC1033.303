#pragma once
#include <iostream>
#include <vector> 
#include "ClassPersonalTask.h"
#include "ClassWorkTask.h"

using namespace std;

//Declaracion de clase ClassFlow que gestiona las listas de tareas
class ClassFlow {
private:
    //Vectores para almacenar las tareas creadas
    vector<PersonalTask> listaPersonal;
    vector<WorkTask> listaTrabajo;

public:
    /**
     * Constructor vacío
     *
     * @param
     * @return Objeto ClassFlow
     */
    ClassFlow() {}

    /**
     * Agrega una tarea personal al vector correspondiente
     *
     * @param PersonalTask& tarea: referencia a la tarea a agregar
     * @return void
     */
    void agregarPersonal(PersonalTask& tarea) {
        listaPersonal.push_back(tarea); 
        cout << "Tarea personal agregada con exito." << endl;
    }

    /**
     * Elimina una tarea personal segun su indice
     *
     * @param int indice: posicion de la tarea a eliminar
     * @return void
     */
    void eliminarPersonal(int indice) {
    
        if (indice >= 0 && indice < listaPersonal.size()) {
            listaPersonal.erase(listaPersonal.begin() + indice);
            cout << "Tarea personal eliminada." << endl;
        } else {
            cout << "Error: Indice no valido." << endl;
        }
    }

    /**
     * Agrega una tarea de trabajo al vector correspondiente
     *
     * @param WorkTask& tarea: referencia a la tarea a agregar
     * @return void
     */
    void agregarTrabajo(WorkTask& tarea) {
        listaTrabajo.push_back(tarea);
        cout << "Tarea de trabajo agregada con exito." << endl;
    }

    /**
     * Elimina una tarea de trabajo segun su indice
     *
     * @param int indice: posicion de la tarea a eliminar
     * @return void
     */
    void eliminarTrabajo(int indice) {
        if (indice >= 0 && indice < listaTrabajo.size()) {
            listaTrabajo.erase(listaTrabajo.begin() + indice);
            cout << "Tarea de trabajo eliminada." << endl;
        } else {
            cout << "Error: Indice no valido." << endl;
        }
    }

    /**
     * Lista todas las tareas personales y de trabajo
     *
     * @param
     * @return void
     */
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