#include "Mother.h"

Mother::Mother(std::string name) : Person(name)
{
	std::cout << "MOTHER CREATED" << " - " << this->m_Name << std::endl;
}

Mother::~Mother()
{
	std::cout << "MOTHER DESTROYED" << " - " << this->m_Name << std::endl;
}

void Mother::VirtualFunction()
{
	Person::VirtualFunction();
	std::cout << "MOTHER" << " - " << this->m_Name << " Virtual Function" << std::endl;
}

void Mother::PureVirtualFunction()
{
	std::cout << "MOTHER" << " - " << this->m_Name << " Pure Virtual Function" << std::endl;
}