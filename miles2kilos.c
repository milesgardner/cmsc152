/* milestokilos_main.c
* a c program that converts miles to kilometers
* if result is > 1 kilometer, else return result in meters
*/

#include <stdio.h>
#include <stdlib.h>

/* convert_miles_to_km
* converts miles to kilometers
* with miles (float) being the parameter
*/

float convert_miles_to_km(float mil) {
    float k = mil * 1.609;
    return k;
}

/* convert_miles_to_meters
* converts miles to meters
* with miles (float) being the parameter
*/

float convert_miles_to_meters(float mil) {
    float m = mil * 1609;
    return m;
}


int main () {
    //make variables for miles, kilometers, and meters
    double miles, kilom, meters;

    //print information about program
    printf("This program converts miles to kilometers\n");

    // get some user input for miles
    printf("Enter a distance in miles to be converted: ");
    scanf("%lf", &miles);

    // convert miles to kilometerss
    kilom = convert_miles_to_km(miles);
    meters = convert_miles_to_meters(miles);
    
    //if statement for if kilo > 1, else returns val in meters
    if (kilom > 1) {
        printf("%f miles in kms is %f kilometers! Cool!\n", miles, kilom);
    } else {
        printf("%f miles in meters is %f meters! Cool! \n", miles, meters);
    }

    // return program success
    return(0);

}