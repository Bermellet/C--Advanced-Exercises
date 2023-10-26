#pragma once
#include<cmath>

//template<typename T>
//template<typename T, typename = typename sed::enable_id<std::is_arithmetic<T>::value, T>,type> // meta programming
class Vec3
{
public:
	Vec3(); // = default;
	Vec3(const float x, const float y, const float z);
	// Vec3(T x, T y, T z) : x(x), y(y), z(z)();
	Vec3(const float a);
	//~Vec3();

	void Normalize();
	float distance_to(const Vec3& v) const;
	float dot_product(const Vec3& v) const;
	Vec3 cross_product(const Vec3& v) const;
	float angle_between(const Vec3& v) const;

	void Print() const;

	Vec3 operator=(const Vec3& v) const;
	Vec3 operator+(const Vec3& v) const;
	Vec3 operator-(const Vec3& v) const;

private:
	float length();

private:
	float x, y, z;

};

