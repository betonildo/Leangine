#define DEBUG
#include <Debug.h>
#include <Vector2.h>

void vector2DotProducts() {

    Vector2 u, v;

    u.x = 1;
    u.y = 1;

    v.x = -1;
    v.y = -1;

    ASSERT(dot(u,v) < 0, "Should be less than 0 because they are less than 90 degrees");

    u.x = 1;
    u.y = 0;

    v.x = 0;
    v.y = 1;

    ASSERT(dot(u,v) == 0, "Should be equals 0 because they are 90 degrees");

    u.x = 1;
    u.y = 0;

    v.x = 1;
    v.y = 0;

    ASSERT(dot(u,v) > 0, "Should be greater than 0 because they are less than 90 degrees");
}

void vector2Magnitudes() {

    Vector2 u, v;

    u.x = 1;
    u.y = 1;

    v.x = -1;
    v.y = -1;

    ASSERT(u.squaredMagnitude() == v.squaredMagnitude(), "u and v should have equals magnitudes in this point");
}

void vector2SumMulDiv() {

    Vector2 u, v;

    u.x = v.x = u.y = v.y = 1.1234567;

    ASSERT(u == v, "u and v should be equal");

    u.x = v.x = u.y = v.y = 1;

    ASSERT(u + v == Vector2(2, 2), "u + v should have their components sum as component of the new vector2 formed");

    
}