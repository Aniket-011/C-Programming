#include<stdio.h>
float areaofsquare(float a);
float areaofcircle(float r);
int main (){
    float s,r;
    printf('Enter side here:');
    scanf("%f",s);
    printf('Enter radius here:');
    scanf("%f",r);
    areaofsquare(s);
    areaofcircle(r);
    printf("Area of circle is %f",areaofcircle(r));
    return 0;
    
}
float areaofsquare(float a){
    return a*a;
}
float areaofcircle(float r){
    return 3.14*r*r;
}
