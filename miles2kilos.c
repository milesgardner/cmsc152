/* milestokilos_main.c
* a c program that converts miles to kilometers
* if result is > 1 kilometer, else return result in meters
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    //make variables for miles, kilometerss, and meters
    double miles, kilom, meters;

    //print information about program
    printf("This program converts miles to kilometers\n");

    // get some user input for miles
    printf("Enter a distance in miles to be converted: ");
    scanf("%lf", &miles);

    // convert miles to kilometerss
    kilom = miles * 1.609;
    
    //if statement for if kilo > 1, else returns meters
    if (kilom > 1) {
        printf("%f miles in kms is %f kilometers! Cool!\n", miles, kilom);
    } else {
        meters = miles * 1609;
        printf("%f miles in meters is %f meters! Cool! \n", miles, meters);
    }

    // return program success
    return(0);

}