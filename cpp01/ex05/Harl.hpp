#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    typedef void (Harl::*ComplaintFunc)(void); 
        struct Complaint {
        std::string level;
        ComplaintFunc func;
    };
    static const Complaint complaints[4]; 
public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};

#endif 
