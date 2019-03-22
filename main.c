#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a = 2.61f, b = 3.43f, x = 5.54f;
    double y = pow(a, pow(2-x, 0.25)) + exp(b*log(2*x)) * cos(a*x);
    printf("Result: %.5f\n", y);
    getchar();
    return 0;
}
