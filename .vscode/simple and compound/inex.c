#include<stdio.h>
#include<math.h>

int main(){

    float p, r, t, SI, CI;
    printf("Enter Principle, rate and time:\n");
    scanf("%f:%f:%f:%f:%f", &p, &r, &t);

    SI = p*r*t/100;

    CI = p*pow((1+r/100),t);

    printf("Simple interest is: %f", SI);
    printf("Compound interest is: %f\n", CI);
    
    return 0;

}