#include "vector3f.h"
#include <math.h>
#include <stdio.h>


const float EPS = 1e-5f;

int test_add() {
    Vector3f v1 = {1.1f, 2.0f, 3.0f};
    Vector3f v2 = {4.0f, 5.0f, 6.0f};
    Vector3f sum = vec_add(v1, v2);
    return fabsf(sum.x-5.1f)<EPS && fabsf(sum.y-7.0f)<EPS && fabsf(sum.z-9.0f)<EPS;
}

int test_sub() {
    Vector3f v1 = {1.1f, 2.0f, 3.0f};
    Vector3f v2 = {4.0f, 5.0f, 6.0f};
    Vector3f diff = vec_sub(v1, v2);
    return fabsf(diff.x+2.9f)<EPS && fabsf(diff.y+3.0f)<EPS && fabsf(diff.z+3.0f)<EPS;
}

int test_dot() {
    Vector3f v1 = {1.1f, 2.0f, 3.0f};
    Vector3f v2 = {4.0f, 5.0f, 6.0f};
    float dot = vec_dot(v1, v2);
    return fabsf(dot-(1.1f*4+2*5+3*6))<EPS;
}

int test_cross() {
    Vector3f v1 = {1.1f, 2.0f, 3.0f};
    Vector3f v2 = {4.0f, 5.0f, 6.0f};
    Vector3f cross = vec_cross(v1, v2);
    return fabsf(cross.x+3.0f)<EPS && fabsf(cross.y-6.9f)<EPS && fabsf(cross.z+3.5f)<EPS;
}

int main(void) {
    int passed = 0;
    passed += test_add();
    passed += test_sub();
    passed += test_dot();
    passed += test_cross();

    int total = 4;
    printf("%d/%d passed\n", passed, total);

    return total - passed;
}