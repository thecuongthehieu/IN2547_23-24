#include <stdio.h>
#include <stdint.h>

void printFloatParts(float f) {
    // casting
    uint32_t a = * ((uint32_t *)&f);

    // printf("a = %x\n", a);

    // sign bit
    uint32_t sign = a >> 31;
    printf("sign = %d\n", sign);

    // exponent in biased form
    uint32_t exponent = (a >> 23) & 0x000000FF;
    printf("exponent = %d\n", exponent);

    // fraction (mantissa)
    uint32_t mantissa = a & 0x007FFFFF;
    printf("mantissa = %x\n", mantissa);
} 

int main() {
    // input 
    float f = 33554431; // -11.25

    // 
    printFloatParts(f);
}
