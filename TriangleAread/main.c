#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width = 0.0;
    double height = 0.0;
    double perimeter = 0.0;
    double area = 0.0;

    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Enter width: ");
    scanf("%lf", &width);

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("\nheight is: %lf", height);
    printf("\nwidth is: %lf", width);
    printf("\nperimeter is: %lf", perimeter);
    printf("\narea is: %lf", area);
    return 0;
}
