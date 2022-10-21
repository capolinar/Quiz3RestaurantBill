#include <stdlib.h> 
#include  <time.h> 
#include  <stdio.h> 
//headers go here, probably standard libraries

//main goes here, add command line arguements for tax and tip
int main(double argTax, double argTip ){ 

    double tax = argTax;
    double tip = argTip;


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

    //display message for test
    printf("\ndisplaying arguement Tax: %f\n", tax);
    printf("\ndislaying arguement Tip: %f\n", tip);
    printf("\ndisplaying random number: %d\n", rngFood);


    //calculate tip to be added(tip is on pre-tax amount)

    //calculate total cost including everything


    //Display meal cost, tax amount, tip amount, and total bill

    //return success
    return EXIT_SUCCESS;
}

