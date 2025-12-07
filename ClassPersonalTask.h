#pragma once
# include "ClassTask.h"

using namespace std;

//Declaracion de clase PersonalTask que hereda de Task
class PersonalTask : public Task {
    private:
        //Variables de instancia especificas de esta clase
        string category;
        int approximate_time; // in minutes

    public:
        /**
         * Constructor por defecto
         *
         * @param
         * @return Objeto PersonalTask
         */
        PersonalTask() : Task(), category(""), approximate_time(0) {}
        
        /**
         * Constructor con parámetros
         *
         * @param string n: nombre, string d: fecha, bool s: estado, string c: categoria, int aT: tiempo
         * @return Objeto PersonalTask
         */
        PersonalTask(string n, string d, bool s, string c, int aT) 
            : Task(n, d, s), category(c), approximate_time(aT) {}

        /**
         * Muestra los detalles de la tarea heredada mas los propios
         *
         * @param
         * @return void
         */
        void MostrarDetalles() {
            Task::MostrarDetalles();
            cout << "Categoría: " << category << ", Tiempo Aproximado: " << approximate_time << " minutos" << endl;
        }

        // Getters

        /**
         * getter category
         *
         * @param
         * @return string: categoria de la tarea
         */
        string getCategory() {
            return category;
        }

        /**
         * getter approximate_time
         *
         * @param
         * @return int: tiempo aproximado en minutos
         */
        int getApproximateTime() {
            return approximate_time;
        }

        // Setters

        /**
         * setter category
         *
         * @param string c: nueva categoria
         * @return void
         */
        void setCategory(string c) {
            category = c;
        }

        /**
         * setter approximate_time
         *
         * @param int aT: nuevo tiempo aproximado
         * @return void
         */
        void setApproximateTime(int aT) {
            approximate_time = aT;
        }

};