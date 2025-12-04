# pragma once
# include <iostream>
# include <string>

using namespace std;

class Task {
    protected:
        // Variables que se heredan a lcas clases hijas
        string name;
        string deadline;
        bool status;
    
    public:
        // Constructor por defecto
        Task (): name(""), deadline(""), status(false) {}

        // Constructor con parámetros
        Task(string n, string d, bool s) : name(n), deadline(d), status(s) {}

        bool MarcarCompletada() {
            status = true;
            return status;
        }

        void MostrarDetalles() {
            string estado = status ? "Completada" : "Pendiente";
            cout << "Tarea: " << name << ", Fecha Límite: " << deadline << ", Estado: " << estado << endl;
        }

        // Getters
        string getName() {
            return name;
        }

        string getDeadline() {
            return deadline;
        }

            bool getStatus() {
            return status;
        }

        // Setters

        void setName(string n) {
            name = n;
        }

        void setDeadline(string d) {
            deadline = d;
        }

        void setStatus(bool s) {
            status = s;
        }
        

};