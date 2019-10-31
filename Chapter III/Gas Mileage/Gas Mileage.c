#include <stdio.h>

/*Drivers are concerned with the mileage obtained by their automobiles. One
driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for
each tankful. Develop a program that will input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained for each tankful. After processing
all input information, the program should calculate and print the combined miles per gallon
obtained for all tankfuls. */

int main(void) {
  float miles;  // Initializing global variables
  float gallonsused;
  float average;

// Describing program function to user
  printf("This program will give your miles per gallon per tank, as well as an average of all tanks if you input multiple sets of data.\n\n");



  while(gallonsused != -1) {        //Uses -1 as sentinal to stop program, otherwise loops

    printf("Enter the gallons used (-1 to end): "); // Promts user for data
    scanf("%f", &gallonsused);      // Assigns data to gallonsused variable

    float totalgallons;             // Initializing local variable (only needed during loop)
    totalgallons = totalgallons + gallonsused; // Stores the sum of each gallonused entry

    float totalmiles;
    totalmiles = totalmiles + miles;          // Stores the sum of each miles entry

    float totalaverage;                       // Calculates miles per gallon average
    totalaverage = totalmiles / (totalgallons+1);   // Uses (totalgallons+1) to offset -1 sentinal

    if (gallonsused != -1) {
      printf("Enter the miles driven: ");   // Promts user for data
      scanf("%f", &miles);                  // Stores data to miles variable

      average = miles/gallonsused;          // Calculates miles per gallon.

      // Displays miles per gallon of current loops data.
      printf("The miles/gallon for this tank was %.3f\n\n", average);
    }

    else {
     // Displays average miles per gallon using all data gathered from each loop.
      printf("\nThe overall average miles/gallon was %.3f", totalaverage);
    }
  }

  return 0; // End
}
