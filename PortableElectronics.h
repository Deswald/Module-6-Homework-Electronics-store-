#pragma once
#include "IElectronics.h"

class PortableEl : virtual public IElectronics
{
public:
	PortableEl(int batteryCapacity);
	void ShowFeatures() override;
	~PortableEl() = default;
protected:
	int _batteryCapacity;
};