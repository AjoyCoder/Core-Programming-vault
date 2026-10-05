#include<stdio.h>
int main (){
int choice;
float c,f;
printf("1. Fatorenheit to Celsius\n");
printf("2. Celsius to Fahrenheit\n");
printf("Enter your choice:");
scanf("%d", &choice);
if (choice == 1){
printf("Enter temperature a fahrenheit: ");
scanf("%f", &f);
c=(f-32)*5/9;
    printf ("Tamperature in Celsius = %.2f", c);
}
else if(choice == 2){
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
f=(c*9/5)+32;
    printf("Temperature in Fahrenheit =%.2f", f);
}
else
printf("Invalid choice ");
return 0;
}
