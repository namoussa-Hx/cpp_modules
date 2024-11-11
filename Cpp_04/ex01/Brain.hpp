#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &src);
		~Brain();
		Brain & operator = (const Brain &src);
};


#endif