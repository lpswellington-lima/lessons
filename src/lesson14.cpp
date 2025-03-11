#include <iostream>
#include <lesson14.h>
#include <config.h>
#include <cmath>
#include <vector>

using namespace std;

void Lesson14::onExecute(){
    VectorX* vector1 = new Vector2d(1,1);
    VectorX* vector2 = new Vector2d(2,3);
    VectorX* vector3 = new Vector2d(3,4);
    vector<VectorX*> vectors = {vector1,vector2,vector3};
    VectorX* vectorTotal = Vector2d::sum(vectors);
    VectorX* vector4 = Vector2d::sum(vector1,vector2);

    PRINT("Modulus vectorTotal:" << vectorTotal->Modulus());
    PRINT("Modulus vector4:" << vector4->Modulus());


    VectorX* vector_1 = new Vector3d(1,2,3);
    VectorX* vector_2 = new Vector3d(1,2,3);
    VectorX* vector_3 = *vector_1 + *vector_2;
    PRINT("Modulus:" << vector_1->Modulus());
    PRINT("Modulus:" << vector_3->Modulus());
    delete vector1;
    delete vector2;
    delete vector3;
    delete vector4;

    delete vector_1;
    delete vector_2;
    delete vector_3;
    delete vectorTotal;
}

VectorX* Vector2d::operator+(VectorX& a){
    Vector2d* a2d = dynamic_cast<Vector2d*>(&a);
    return new Vector2d(x + a2d->x, y + a2d->y);
}

VectorX* Vector2d::operator*(int a){
    return new Vector2d(x*a, y*a);
}

double Vector2d::Modulus(){
    return sqrt(pow(x, 2) + pow(y, 2));
}

VectorX* Vector2d::sum(vector<VectorX*>& v){
    VectorX* result = new Vector2d(0,0);
    for(VectorX* vec : v){
        result = *result + *vec;
    }
    return result;
}

VectorX* Vector2d::sum(VectorX* v1, VectorX* v2){
    return *v1 + *v2;
}

VectorX* Vector3d::operator+(VectorX& a){
    Vector3d* a3d = dynamic_cast<Vector3d*>(&a);
    return new Vector3d(x + a3d->x, y + a3d->y, z + a3d->z);
}

VectorX* Vector3d::operator*(int a){
    return new Vector3d(x*a, y*a, z*a);
}

double Vector3d::Modulus(){
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

VectorX* Vector3d::sum(vector<VectorX*>& v){
    VectorX* result = new Vector3d(0,0,0);
    for(VectorX* vec : v){
        result = *result + *vec;
    }
    return result;
}