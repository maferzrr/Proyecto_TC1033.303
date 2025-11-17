// HomeTask.h

#include <string>

class HomeTask {
private:
    std::string m_name;
    int m_times_a_week; 
    int m_duration; 
    bool m_completed; 

public:
    // 1. CONSTRUCTOR
    HomeTask(std::string name, int times_a_week, int duration);

    // 2. GETTERS 
    std::string get_name() const;
    int get_times_a_week() const;
    int get_duration() const;
    
    // 3. MÉTODOS
    // Marca la tarea como urgente si su duración es alta o lleva tiempo sin hacerse
    void flag_as_urgent(); 
    
    // 4. MÉTODOS ESTÁNDAR
    void mark_completed();
    void display_details() const; 
};
