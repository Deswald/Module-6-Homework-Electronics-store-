#pragma once
#include <iostream>
using namespace std;

class IElectronics
{
public:
	virtual void ShowFeatures() = 0;
	virtual ~IElectronics() = default;
};