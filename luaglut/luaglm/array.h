#ifndef _MY_ARRAY_
#define _MY_ARRAY_

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <vector>

namespace glm
{
	class vec3_array : public std::vector<glm::vec3>
	{};
}

#endif