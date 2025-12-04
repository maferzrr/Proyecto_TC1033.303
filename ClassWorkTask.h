#pragma once
# include "ClassTask.h"

using namespace std;

class WorkTask : public Task {
    private:
        string subject;
        string priority; 

    public:
        // Constructor por defecto
        WorkTask() : Task(), subject (""), priority("Low") {}
        // Constructor con parámetros
        WorkTask(string n, string d, bool s, string sub, string pr) 
            : Task(n, d, s), subject(sub), priority(pr) {}

        void MostrarDetalles() {
            Task::MostrarDetalles();
            cout << "Asunto: " << subject << ", Prioridad: " << priority << endl;
        }

        // Getters
        string getSubject() {
            return subject;
        }

        string getPriority() {
            return priority;
        }

        // Setters
        void setSubject(string sub) {
            subject = sub;
        }

        void setPriority(string pr) {
            priority = pr;
        }

};