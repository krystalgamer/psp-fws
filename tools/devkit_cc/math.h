#ifndef _MATH_H
#define _MATH_H
#define M_PI 3.14159265358979323846
#define M_TWOPI (M_PI * 2.0)
double sqrt(double); float sqrtf(float); float sinf(float); float cosf(float); float tanf(float);
float atanf(float); float atan2f(float, float); float asinf(float); float acosf(float); float expf(float);
float logf(float); float powf(float, float); float fabsf(float); float floorf(float); float ceilf(float);
float fmodf(float, float); double fabs(double);
#define HUGE_VALF (__builtin_huge_valf())
#endif
