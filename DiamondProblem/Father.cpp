#include "Father.h"

Father::Father(std::string name) : Person(name)
{
	std::cout << "FATHER CREATED" << " - " << this->m_Name << std::endl;
}

Father::~Father()
{
	std::cout << "FATHER DESTROYED" << " - " << this->m_Name << std::endl;
}

void Father::VirtualFunction()
{
	Person::VirtualFunction();
	std::cout << "FATHER" << " - " << this->m_Name << " Virtual Function" << std::endl;
}

void Father::PureVirtualFunction()
{
	std::cout << "FATHER" << " - " << this->m_Name << " Pure Virtual Function" << std::endl;
}