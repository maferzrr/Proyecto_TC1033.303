// PersonalTask.h

#include <string>

class PersonalTask {
private:
    std::string m_name;
    std::string m_activityType;    // Tipo de actividad (Ej. "Estudio", "Ejercicio")
    int m_time;        
    bool m_completed; 

public:
    // 1. CONSTRUCTOR 
    PersonalTask(std::string name, std::string type, int time);
    
    // 2. GETTERS (Const)
    std::string get_name() const;
    std::string get_activity_type() const;
    int get_time() const;

    // 3. MÉTODOS ESTÁNDAR
    void mark_completed();
    void display_details() const; 
};