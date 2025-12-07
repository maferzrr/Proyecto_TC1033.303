#pragma once
# include "ClassTask.h"

using namespace std;

//Declaracion de clase WorkTask que hereda de Task
class WorkTask : public Task {
    private:
        //Variables de instancia especificas de esta clase
        string subject;
        string priority; 

    public:
        /**
         * Constructor por defecto
         *
         * @param
         * @return Objeto WorkTask
         */
        WorkTask() : Task(), subject (""), priority("Low") {}
        
        /**
         * Constructor con parámetros
         *
         * @param string n: nombre, string d: fecha, bool s: estado, string sub: asunto, string pr: prioridad
         * @return Objeto WorkTask
         */
        WorkTask(string n, string d, bool s, string sub, string pr) 
            : Task(n, d, s), subject(sub), priority(pr) {}

        /**
         * Muestra los detalles de la tarea heredada mas los propios
         *
         * @param
         * @return void
         */
        void MostrarDetalles() {
            Task::MostrarDetalles();
            cout << "Asunto: " << subject << ", Prioridad: " << priority << endl;
        }

        // Getters

        /**
         * getter subject
         *
         * @param
         * @return string: asunto de la tarea
         */
        string getSubject() {
            return subject;
        }

        /**
         * getter priority
         *
         * @param
         * @return string: prioridad de la tarea
         */
        string getPriority() {
            return priority;
        }

        // Setters

        /**
         * setter subject
         *
         * @param string sub: nuevo asunto
         * @return void
         */
        void setSubject(string sub) {
            subject = sub;
        }

        /**
         * setter priority
         *
         * @param string pr: nueva prioridad
         * @return void
         */
        void setPriority(string pr) {
            priority = pr;
        }

};