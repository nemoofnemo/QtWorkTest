#include <stdio.h>
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

int main(void){
	uint32_t x = mis_set_rgba(15, 14, 13, 12);
	uint32_t r = mis_get_rgba_r(x);
	uint32_t g = mis_get_rgba_g(x);
	uint32_t a = mis_get_rgba_a(x);
	return 0;
}