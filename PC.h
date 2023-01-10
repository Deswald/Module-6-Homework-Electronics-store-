#pragma once
#include "ConsumerElectronics.h"

class PC final : public ConsumerEl
{
public:
	PC(int weight, string videocard, string processor, int ram, int hdd);
	void ShowFeatures() override;
	~PC() = default;
private:
	string _videocard;
	string _processor;
	int _ram;
	int _hdd;
};