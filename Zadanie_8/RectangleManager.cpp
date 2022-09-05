#include "RectangleManager.hpp"

RectangleManager::RectangleManager()
{
	RectangleGenerator rec;
	const int size = 100;

	for (int i = 0; i < size; ++i)
	{
		recVec.push_back(rec.generateRectangle());
	}
}
