#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
    std::string *ideas;

public:
    Brain(void);
    ~Brain(void);
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);

    std::string *getIdeas(void) const;
};

#endif

