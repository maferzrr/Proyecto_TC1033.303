// WorkTask.h

# include <string>

class WorkTask {
    private: 
        std::string m_name;
        std::string m_deadline;
        std::string m_subject;
        bool m_completed;

    public:
        //Constructor
        WorkTask(std::string name, std::string deadline, std::string subject);

        //Getters

        std::string get_name() const;
        std::string get_deadline() const;
    
        // 3. SETTERS

        void set_subject(std::string subject);
        void set_deadline(std::string deadline);
        
    
        void mark_completed();
        void display_details() const;
};