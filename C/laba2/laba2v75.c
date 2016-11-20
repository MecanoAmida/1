#include <stdio.h>
#include <math.h>

double log(double d);

int main()
{
    double a, x, g, f, y;
    int z;

    print("Введите x и a\n");
    scanf("%lf", &x);
    scanf("%lf", &a);
    printf ( "Введите номер функции \n" );
    scanf("%d", &z );
    switch (z) {
        case 1:
            if ((63 * a * *2 + 109 * a * x + 36 * x * *2)==0)
            printf("нельзя делить на ноль");
            else
            g = -((8 * (45 * a * *2 + 32 * a * x - 20 * x * *2)) / (63 * a * *2 + 109 * a * x + 36 * x * *2));
            printf("g= %f \n", g);
            break;
        case 2:
             if(math.cos(25*a**2+30*a*x+9*x**2)==0)

                printf("нельзя делить на ноль");
                else
                f = 1 / (math.cos(25 * a * *2 + 30 * a * x + 9 * x * *2));
                printf("f= %f \n", f);
                break;
        case 3:
            if(math.log(10*a**2+43*a*x+12*x**2+1)==0)

                printf("нельзя делить на ноль");
                else
                y = 1 / (math.log(10 * a * *2 + 43 * a * x + 12 * x * *2 + 1));
                printf("y= %f \n", y);
                break;
        default:
            printf("введите 1,2,3");
    }



    return 0;

}
