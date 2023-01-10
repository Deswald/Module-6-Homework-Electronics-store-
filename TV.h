#pragma once
#include "ConsumerElectronics.h"

class TV final : public ConsumerEl
{
public:
	TV(int weight, float diagonalTV, string matrix);
	void ShowFeatures() override;
	~TV() = default;
private:
	float _diagonalTV;
	string _matrix;
};