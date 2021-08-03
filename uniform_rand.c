#include <stdio.h>
#include <stdlib.h>


double uniform_random()
{
    return (double)rand() / (double)RAND_MAX ;

}

int uniform_random_int_range(int min, int max){
    int diff = max - min;

    int val = (int)(uniform_random() * diff);

    return min + val;

}

double uniform_random_double_range(double min, double max){
    double diff = max - min;

    double val = uniform_random() * diff;

    return min + val;
}

int main(){
    for (int i = 0; i < 5; i++) {
    printf("%lf \n", uniform_random());
    }

    for (int i = 0; i < 5; i++) {
    printf("%d \n", uniform_random_int_range(1,100));
    }

    for (int i = 0; i < 5; i++) {
    printf("%lf \n", uniform_random_double_range(0.003,99));
    }
}