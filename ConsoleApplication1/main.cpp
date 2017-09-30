#include <cstdio>
#include <memory>
#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned int uint32_t;

static uint32_t mis_set_rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a){
	uint32_t ret = 0;
	uint32_t _r = r;
	uint32_t _g = g;
	uint32_t _b = b;
	uint32_t _a = a;
	ret += _a << 24;
	ret += _b << 16;
	ret += _g << 8;
	ret += _r;
	return ret;
}

#define mis_get_rgba_r(rgba) ((uint32_t)(rgba)&(uint32_t)0xff)
#define mis_get_rgba_g(rgba) (((uint32_t)(rgba)&(uint32_t)0xff00) >> 8)
#define mis_get_rgba_b(rgba) (((uint32_t)(rgba)&(uint32_t)0xff0000) >> 16)
#define mis_get_rgba_a(rgba) (((uint32_t)(rgba)&(uint32_t)0xff000000) >> 24)

template<typename type>
void func(type arg){
	puts("1");
}

template<>
void func(int arg){
	puts("3");
}

template <unsigned long N>
struct get_binary{
	enum {value = get_binary<N/10>::value * 2 + N % 10};
};

template <>
struct get_binary<0>{
	enum {value = 0};
};

const int n = 10;
const float R = 10.0f;
const float Pi = 3.1415926536f;

int main(void){
	for (int i = 0; i < n; i++)
		printf("%2.2f %2.2f\n", R*cos(2 * Pi / n*i), R*sin(2 * Pi / n*i));
	return 0;
}