// Prefix Code
#include <stdio.h>
int main() {
    double radius;
    scanf("%lf", &radius);
    // Write solution code below
    #include <math.h>
    double pi = 3.14;
    double volume;
    volume = (4.0/3.0 * pi * radius * radius * radius);
    printf("%.2lf", volume);    
    return 0;
}