#include "Vec3.h"

Vec3::Vec3() {
	x = y = z = 0.f;
}

Vec3::Vec3(const float x, const float y, const float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
Vec3::Vec3(const float a) {
	x = y = z = a;
}
//~Vec3::Vec3();

void Vec3::Normalize() {
	float length = this->length();
	x = x / length;
	y = y / length;
	z = z / length;
}

float Vec3::distance_to(const Vec3& v) const {
	// TODO
	return 0;
}

float Vec3::dot_product(const Vec3& v) const {
	// TODO
	return 0;
}

Vec3 Vec3::cross_product(const Vec3& v) const {
	// TODO
	return false;
}

float Vec3::angle_between(const Vec3& v) const {
	// TODO
	return 0;
}

Vec3 Vec3::operator=(const Vec3& v) const {
	// TODO
	return false;
}

Vec3 Vec3::operator+(const Vec3& v) const {
	return Vec3(x + v.x, y + v.y, z + v.z);

	/*
	x += v.x;
	y += v.y;
	z += v.z;
	return *this;
	*/
}

Vec3 Vec3::operator-(const Vec3& v) const {
	// TODO
	return false;
}

float Vec3::length() {
	return sqrt((x * x) + (y * y) + (z * z));
}