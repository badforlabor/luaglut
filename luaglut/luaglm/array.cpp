
#include "array.h"

void TestArray()
{
	glm::vec3_array v3table;
	
	v3table.clear();
	v3table.push_back(glm::vec3(1, 1, 1));
	v3table.data();
}