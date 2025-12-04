#include <stdio.h>
#include <math.h>

int main()
{
    char groupName[] = "Group 1_ problem 2";
    double d,sin_theta2,lambda1=530.0,lambda2=700.0,theta1=65.0,theta1rad,theta2rad,theta2;
    int m1=3,m2=2;



    printf("| Diffraction Grating Problem By Group 1 |\n");


    theta1rad=theta1*3.14159265/180.0;

    d = (m1*lambda1)/sin(theta1rad);

    sin_theta2= (m2*lambda2)/d;



    if(sin_theta2>1.0)
    {
        printf("The second order bright spot cannot be observed.\n");
    }
    else
    {
        theta2rad = asin(sin_theta2);
        theta2 = theta2rad*180.0/3.14159265;

        printf("Angle for second order red light: %.2f degrees\n",theta2);
    }


    return 0;
}
