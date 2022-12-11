#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double a,b,x,y,z,d=0;
    scanf("%f %f %f %f",&a,&b,&x,&y);
    z=pow((x-a),2)+pow((y-b),2);
    d = sqrt(z);
    printf("%lf",d);
    return 0;
}
