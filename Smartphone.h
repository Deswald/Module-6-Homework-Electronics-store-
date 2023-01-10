#pragma once
#include "PortableElectronics.h"

class Smartphone final : public PortableEl
{
public:
	Smartphone(int batteryCapacity, float diagonal, float cameraMP, string os);
	void ShowFeatures() override;
	~Smartphone() = default;
private:
	float _diagonal;
	float _cameraMP;
	string _os;
};