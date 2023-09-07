#include <stdio.h>

/** BMI - This program takes input fromt he user and uses these
 * inputs to calculate the users BMI
 * @Height: users height in m
 * @weight: users weight in kg
 *
 * returns: BMI
 */
int main()
{
    float height;
    int weight;
    float BMI;

    BMI = weight / (height * height);
    // printf("%lf", BMI);

    printf("Input your Height in m: ");
    scanf("%d", &height);

    printf("Input your weight in kg: ");
    scanf("%d", &weight);
    
    if(BMI < 18)
    {
        printf("%lf: Underweight", BMI);
    }
    else if(BMI == 18 && BMI <= 25)
    {
        printf("%lf: Normal weight", BMI);
    }
    else if(BMI == 26 && BMI <=29)
    {
        printf("%lf: Overweight", BMI);
    }
    else
    {
        // if (BMI == 30 && BMI <= 34)
        // {
        //     printf("%lf: Class I Obesity");
        // }
        // else if(BMI == 35 && BMI <= 39)
        // {
        //     printf("%lf: Class II Obesity");
        // }
        // else
        // {
        //     printf("%lf: Class III Obesity");
        // }
        printf("%lf: Obesity", BMI);
    }
}
