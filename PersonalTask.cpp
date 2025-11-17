// PersonalTask.cpp

#include "PersonalTask.h"
#include <iostream>
using namespace std;

// 1. CONSTRUCTOR
PersonalTask::PersonalTask(string name, string type, int time)
    : m_name(name), 
      m_activityType(type), 
      m_time(time), 
      m_completed(false) 
{
    // Cueropo vacío
}

// 2. GETTERS
string PersonalTask::get_name() const {
    return m_name;
}

string PersonalTask::get_activity_type() const {
    return m_activityType;
}

int PersonalTask::get_time() const {
    return m_time;
}

// 3. MÉTODOS ESTÁNDAR
void PersonalTask::mark_completed() {
    m_completed = true;
    cout << "-> Tarea personal '" << m_name << "' completada." << endl;
}

void PersonalTask::display_details() const {
    cout << "\n--- Tarea Personal ---\n";
    cout << "  Nombre: " << m_name << "\n";
    cout << "  Tipo de Actividad: " << m_activityType << "\n";
    cout << "  Tiempo Planeado: " << m_time << " minutos\n";
    cout << "  Estado: " << (m_completed ? "✅ HECHO" : "❌ PENDIENTE") << endl;
}