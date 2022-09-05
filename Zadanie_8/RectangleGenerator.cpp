#include "RectangleGenerator.hpp"
#include <random>
#include <vector>

Rectangle RectangleGenerator::generateRectangle()
{
	std::random_device r;
	std::default_random_engine e(r());
	std::uniform_int_distribution <int> dist(0, 10);

	Rectangle rectangle(dist(e), dist(e));
	return rectangle;
}
