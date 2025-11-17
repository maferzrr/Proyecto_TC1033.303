// WorkTask.cpp

# include "WorkTask.h" 
# include <iostream>
# include <string>

using namespace std;

WorkTask::WorkTask(string name, string deadline, string subject)
    : m_name(name), 
      m_deadline(deadline), 
      m_subject(subject), 
      m_completed(false)

{
    // Cuerpo del constructor
}

// Implementación del Método

// Getters

string WorkTask::get_name() const {
    return m_name;
}

string WorkTask::get_deadline() const {
    return m_deadline;
}

// Setters

void WorkTask::set_subject(string subject) {
    m_subject = subject;
}

void WorkTask::set_deadline(string deadline) {
    // Asigna el valor del parámetro 'deadline' al atributo privado 'm_deadline'
    m_deadline = deadline;
}

// Others

void WorkTask::mark_completed(){
    m_completed = true;
}

void WorkTask::display_details() const {
    cout << "\n--- Tarea de Trabajo ---\n";
    cout << "  Nombre: " << m_name << "\n";
    cout << "  Materia: " << m_subject << "\n";
    cout << "  Fecha Límite: " << m_deadline << "\n";
    // Si agregaste m_teamAsigned, lo pondrías aquí
    cout << "  Estado: " << (m_completed ? "✅ COMPLETADA" : "❌ PENDIENTE") << endl;
}