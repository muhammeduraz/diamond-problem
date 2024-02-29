#include "Child.h"

Child::Child(std::string name) : Mother(name), Father(name), Person(name)
{
	std::cout << "CHILD CREATED" << " - " << Mother::m_Name << std::endl;
	std::cout << std::endl;
}

Child::~Child()
{
	std::cout << "CHILD DESTROYED" << " - " << Mother::m_Name << std::endl;
}

void Child::VirtualFunction()
{
	Person::VirtualFunction();
	std::cout << "CHILD" << " - " << Father::m_Name << " Virtual Function" << std::endl;
}

void Child::PureVirtualFunction()
{
	std::cout << "CHILD" << " - " << Father::m_Name << " Pure Virtual Function" << std::endl;
}