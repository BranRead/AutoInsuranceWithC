#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int age, priceVehicle;
    char sex[7];
    float monthlyInsurance(char sex[], int age, int priceVehicle);

    printf("Are you 'Male' or 'Female': ");
    scanf("%s", sex);
    for(int i = 0; i < strlen(sex); i++){
        sex[i] = tolower(sex[i]);
    };
    printf("\n");

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\n");


    printf("Enter the purchase price of the vehicle: ");
    scanf("%d", &priceVehicle);
    printf("\n");

    printf("Your monthly insurance will be $%.2f", monthlyInsurance(sex, age, priceVehicle));
};

float monthlyInsurance(char sex[], int age, int priceVehicle){
    if(strcmp(sex, "male") == 0) {
        if (age >= 15 && age < 25) {
            return (priceVehicle * .25) / 12;
        } else if (age >= 25 && age < 40) {
            return (priceVehicle * .17) / 12;
        } else if (age >= 40 && age < 70) {
            return (priceVehicle * .1) / 12;
        } else {
            printf("You are either too young or too old for our insurance plan!");
            return 0;
        }

    } else if (strcmp(sex, "female") == 0) {
        if (age >= 15 && age < 25) {
            return (priceVehicle * .2) / 12;
        } else if (age >= 25 && age < 40) {
            return (priceVehicle * .15) / 12;
        } else if (age >= 40 && age < 70) {
            return (priceVehicle * .1) / 12;
        } else {
            printf("You are either too young or too old for our insurance plan!\n");
            return 0;
        }

    } else {
        printf("This insurance calculator has encountered an error and will now close.\n");
        return 0;
    }
};
