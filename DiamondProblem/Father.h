#include "Person.h"

class Father : public virtual Person
{
public:

	Father(std::string name);
	~Father();

	void VirtualFunction() override;
	void PureVirtualFunction() override;
};