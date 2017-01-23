#include <test/TestVector2LinearMath.h>
#include <test/TestVector4LinearMath.h>
#include <test/TestMatrix4LinearMath.h>

int main(int argc,  char** argv) {

    vector2DotProducts();
    vector2Magnitudes();
    vector2SumMulDiv();

    vector4SSE();

    matrix4SSEMultiplication();

    return 0;
}