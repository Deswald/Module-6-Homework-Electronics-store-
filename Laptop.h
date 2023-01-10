#pragma once
#include "ConsumerElectronics.h"
#include "PortableElectronics.h"

class Laptop final : public ConsumerEl, PortableEl
{
public:
	Laptop(int weight, int batteryCapacity, float diagonal, string videocard, string processor, int ram, int hdd);
	void ShowFeatures() override;
	~Laptop() = default;
private:
	float _diagonal;
	string _videocard;
	string _processor;
	int _ram;
	int _hdd;
};