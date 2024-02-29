#include "Mother.h"
#include "Father.h"

class Child : public Mother, public Father
{
public:

	Child(std::string name);
	~Child();

	void VirtualFunction() override;
	void PureVirtualFunction() override;
};