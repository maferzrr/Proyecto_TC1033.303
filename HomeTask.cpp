// HomeTask.cpp

// HomeTask.cpp

#include "HomeTask.h"
#include <iostream>
using namespace std;

// 1. CONSTRUCTOR
HomeTask::HomeTask(string name, int times_a_week, int duration)
    : m_name(name), 
      m_times_a_week(times_a_week), 
      m_duration(duration), 
      m_completed(false) 
{
    // Cuerpo del constructor
}

// 2. GETTERS 
string HomeTask::get_name() const {
    return m_name;
}

int HomeTask::get_times_a_week() const {
    return m_times_a_week;
}

int HomeTask::get_duration() const {
    return m_duration;
}


// 3. MÉTODO DE ACCIÓN ÚNICO
void HomeTask::flag_as_urgent() {
    if (m_times_a_week >= 3 && m_duration >= 30) {
        cout << " ¡ALARMA! '" << m_name 
             << "' es una tarea recurrente y larga. ¡Prioridad alta!" << endl;
    } else {
        cout << "Tarea '" << m_name << "' es manejable." << endl;
    }
}

// 4. MÉTODOS ESTÁNDAR
void HomeTask::mark_completed() {
    m_completed = true;
    cout << "-> Tarea del hogar '" << m_name << "' completada." << endl;
}

void HomeTask::display_details() const {
    cout << "\n--- Tarea del Hogar ---\n";
    cout << "  Nombre: " << m_name << "\n";
    cout << "  Frecuencia Requerida: " << m_times_a_week << " veces por semana\n";
    cout << "  Duración Estimada: " << m_duration << " minutos\n";
    cout << "  Estado: " << (m_completed ? "✅ HECHO" : "❌ PENDIENTE") << endl;
}