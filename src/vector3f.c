#include "vector3f.h"

Vector3f vec_add(Vector3f left, Vector3f right) {
    return (Vector3f){
         left.x + right.x, 
         left.y + right.y, 
         left.z + right.z 
    };
}

Vector3f vec_sub(Vector3f left, Vector3f right) {
    return (Vector3f){ 
        left.x - right.x, 
        left.y - right.y, 
        left.z - right.z 
    };
}

float vec_dot(Vector3f left, Vector3f right) {
    return left.x * right.x 
    + left.y * right.y 
    + left.z * right.z;
}

Vector3f vec_cross(Vector3f left, Vector3f right) {
    return (Vector3f){
        left.y * right.z - left.z * right.y,
        left.z * right.x - left.x * right.z,
        left.x * right.y - left.y * right.x
    };
}