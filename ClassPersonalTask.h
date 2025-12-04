#pragma once
# include "ClassTask.h"

using namespace std;

class PersonalTask : public Task {
    private:
        string category;
        int approximate_time; // in minutes

    public:
        // Constructor por defecto
        PersonalTask() : Task(), category(""), approximate_time(0) {}
        // Constructor con parámetros
        PersonalTask(string n, string d, bool s, string c, int aT) 
            : Task(n, d, s), category(c), approximate_time(aT) {}

        void MostrarDetalles() {
            Task::MostrarDetalles();
            cout << "Categoría: " << category << ", Tiempo Aproximado: " << approximate_time << " minutos" << endl;
        }

        // Getters
        string getCategory() {
            return category;
        }

        int getApproximateTime() {
            return approximate_time;
        }

        // Setters
        void setCategory(string c) {
            category = c;
        }

        void setApproximateTime(int aT) {
            approximate_time = aT;
        }

};