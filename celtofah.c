#include<stdio.h>
float celsius(float c);
int main(){
    float c;
    printf("Enter the value of celsius:\n");
    scanf("%f",&c);    
    printf("The value in fahrenheit=%f",celsius(c));
    return 0;

}
float celsius(float c)
{
    float f;
    f = (c*9/5)+32;
    return f;
}