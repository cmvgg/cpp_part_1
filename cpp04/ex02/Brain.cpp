#include "Brain.hpp"

Brain::Brain(void) 
{
    std::cout << "Brain constructor" << std::endl;
    ideas = new std::string[100];
}

Brain::~Brain(void) 
{
    std::cout << "Brain destructor" << std::endl;
    delete[] ideas;
}

Brain::Brain(const Brain &other) 
{
    std::cout << "Brain copy constructor" << std::endl;
    ideas = new std::string[100];
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = other.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &other) 
{
    if (this != &other)
    {
        delete[] ideas;
        ideas = new std::string[100];
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

std::string *Brain::getIdeas(void) const 
{
    return ideas;
}
