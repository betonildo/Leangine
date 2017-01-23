#include <Vector4.h>

void vector4SSE() {
    Vector4 u,v;

    u.x = v.x = 1.6;
    u.y = v.y = 1.6;
    u.z = v.z = 1.6;
    u.w = v.w = 1.6;

    Vector4 w = u * 3.5;

	std::cout << w;
}