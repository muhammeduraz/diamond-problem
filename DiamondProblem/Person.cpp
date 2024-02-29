#include "Person.h"

Person::Person(std::string name)
{
	m_Name = name;
	std::cout << "PERSON CREATED" << " - " << this->m_Name << std::endl;
}

Person::~Person()
{
	std::cout << "PERSON DESTROYED" << " - " << this->m_Name << std::endl;
}

void Person::VirtualFunction()
{
	std::cout << "PERSON" << " - " << this->m_Name << " Virtual Function" << std::endl;
}