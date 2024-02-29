#pragma once

#include <string>
#include <iostream>

class Person
{
public:
	
	std::string m_Name;

	Person(std::string name);
	virtual ~Person();

	virtual void VirtualFunction();
	virtual void PureVirtualFunction() = 0;
};