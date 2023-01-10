#pragma once
#include "PortableElectronics.h"

class SmartWatch final : public PortableEl
{
public:
	SmartWatch(int batteryCapacity, string modelName);
	void ShowFeatures() override;
	~SmartWatch() = default;
private:
	string _modelName;
};