#ifdef __cplusplus
#include <iostream>
#else
#include <stdio.h>
#endif

#include <math.h>

int main() {
    double A, B;

#ifdef __cplusplus
    std::cout << "A: ";
    std::cin >> A;
    std::cout << "B: ";
    std::cin >> B;
#else
    printf("A: ");
    scanf("%lf", &A);
    printf("B: ");
    scanf("%lf", &B);
#endif

    double Y = acos(A/B - B) - B/2 * log(A * A + B * B);

#ifdef __cplusplus
    std::cout << "Y = " << Y << std::endl;
#else
    printf("Y = %lf\n", Y);
#endif
}