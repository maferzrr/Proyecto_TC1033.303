#pragma once
#include <iostream>
#include <string>

using namespace std;

//Declaracion de clase Task que servira como padre
class Task {
    protected:
        // Variables que se heredan a las clases hijas
        string name;
        string deadline;
        bool status;
    
    public:
        /**
         * Constructor por defecto
         *
         * @param
         * @return Objeto Task
         */
        Task (): name(""), deadline(""), status(false) {}

        /**
         * Constructor con parámetros
         *
         * @param string n: nombre de la tarea, string d: fecha limite, bool s: estado inicial
         * @return Objeto Task
         */
        Task(string n, string d, bool s) : name(n), deadline(d), status(s) {}

        /**
         * Metodo para marcar la tarea como completada
         *
         * @param
         * @return bool: estado actualizado de la tarea
         */
        bool MarcarCompletada() {
            status = true;
            return status;
        }

        /**
         * Muestra los detalles generales de la tarea
         *
         * @param
         * @return void
         */
        void MostrarDetalles() {
            string estado = status ? "Completada" : "Pendiente";
            cout << "Tarea: " << name << ", Fecha Límite: " << deadline << ", Estado: " << estado << endl;
        }

        // Getters

        /**
         * getter name
         *
         * @param
         * @return string: nombre de la tarea
         */
        string getName() {
            return name;
        }

        /**
         * getter deadline
         *
         * @param
         * @return string: fecha limite
         */
        string getDeadline() {
            return deadline;
        }

        /**
         * getter status
         *
         * @param
         * @return bool: estado de la tarea
         */
        bool getStatus() {
            return status;
        }

        // Setters

        /**
         * setter name
         *
         * @param string n: nuevo nombre
         * @return void
         */
        void setName(string n) {
            name = n;
        }

        /**
         * setter deadline
         *
         * @param string d: nueva fecha limite
         * @return void
         */
        void setDeadline(string d) {
            deadline = d;
        }

        /**
         * setter status
         *
         * @param bool s: nuevo estado
         * @return void
         */
        void setStatus(bool s) {
            status = s;
        }
        
};