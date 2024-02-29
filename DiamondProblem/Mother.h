#pragma once

#include "Person.h"

class Mother : public virtual Person
{
public:

	Mother(std::string name);
	~Mother();

	void VirtualFunction() override;
	void PureVirtualFunction() override;
};