#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie {

private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

};


#endif