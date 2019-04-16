#pragma once
class Vector2D
{
public:

	float x;
	float y;
	float z;
public:
	Vector2D(float xv=0.0f, float yv=0.0f);
	virtual ~Vector2D();
	float modulo();
	float argumento();
	Vector2D Unitario(); //Vector unitario
	Vector2D operator - (Vector2D &);
	Vector2D operator + (Vector2D &);
	float operator * (Vector2D &); //Producto escalar
	Vector2D operator * (float v); //Producto por un escalar


};

