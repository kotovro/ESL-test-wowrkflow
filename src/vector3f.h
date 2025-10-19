#ifndef Vector3
#define Vector3

typedef struct {
    float x;
    float y;
    float z;
} Vector3f;

Vector3f vec_add(Vector3f left, Vector3f right);
Vector3f vec_sub(Vector3f left, Vector3f right);
float    vec_dot(Vector3f left, Vector3f right);
Vector3f vec_cross(Vector3f left, Vector3f right);

#endif