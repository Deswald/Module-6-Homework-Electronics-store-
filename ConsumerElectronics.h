#pragma once
#include "IElectronics.h"

class ConsumerEl : virtual public IElectronics
{
public:
	ConsumerEl(int weight);
	void ShowFeatures() override;
	~ConsumerEl() = default;
protected:
	int _weight;
};