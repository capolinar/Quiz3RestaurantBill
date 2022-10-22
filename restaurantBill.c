#include <stdlib.h> 
#include  <time.h> 
#include  <stdio.h> 
//headers go here, probably standard libraries

//main goes here, add command line arguements for tax and tip
int main(int argc, char *argv[] ){ 

    //printf("arguement count: %d\n", argc); //used to check that arguements passed correctly

    double tax;
    double tip;
    sscanf(argv[1],"%lf",&tax);
    sscanf(argv[2],"%lf",&tip);


    //store meal costs given from assignment
    //salad,soup, sandwich, pizza.
    double salad = 9.95;
    double soup = 4.55;
    double sandwich = 13.25;
    double pizza = 22.35;



    //calculate tax to be added to meal(meal is chosen randomly)
    //also have to add random variable
    time_t  t;
    srand((unsigned)  time(&t));
    int rngFood = rand()  %  4 + 1; //random number between 1 and 4
    double meal;
    if(rngFood ==1)
    {
        meal = salad;
    }
    else if(rngFood == 2)
    {
        meal = soup;
    }
    else if(rngFood == 3)
    {
        meal = sandwich;
    }
    else
    {
        meal = pizza;
    }
    double cTax = meal * tax - meal;

    //display message for test
    /* makes sure arguements and inputs are correct
    printf("\ndisplaying arguement Tax: %f\n", tax);
    printf("\ndislaying arguement Tip: %f\n", tip);
    printf("\ndisplaying random number: %d\n", rngFood);
    */


    //calculate tip to be added(tip is on pre-tax amount)
    double cTip = meal * tip - tip;

    //calculate total cost including everything
    double total = meal + tax + tip;


    //Display meal cost, tax amount, tip amount, and total bill
    printf("\nMeal cost: %.2f\n", meal);
    printf("Tax: %.2f\n", tax);
    printf("Tip: %.2f\n", tip);
    printf("Total: %.2f\n", total);

    //return success
    return EXIT_SUCCESS;
}

