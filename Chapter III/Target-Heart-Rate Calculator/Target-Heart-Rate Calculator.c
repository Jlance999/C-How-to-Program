#include <stdio.h>
/*
While exercising, you can use a heart-rate monitor to see
that your heart rate stays within a safe range suggested by your trainers and doctors. According to
the American Heart Association (AHA), the formula for calculating your maximum heart rate in
beats per minute is 220 minus your age in years. Your target heart rate is a range that’s 50–85% of
your maximum heart rate. [Note: These formulas are estimates provided by the AHA. Maximum
and target heart rates may vary based on the health, fitness and gender of the individual. Always consult a physician or qualified health care professional before beginning or modifying an exercise program.]
Create a program that reads the user’s birthday and the current day (each consisting of the month,
day and year). Your program should calculate and display the person’s age (in years), the person’s
maximum heart rate and the person’s target-heart-rate range.
*/

int main(void) {
    // Variables to hold birthdate values
  int birthMonth;
  int birthDay;
  int birthYear;
    // Variables to hold current date values
  int curMonth;
  int curDay;
  int curYear;

    // Explains program functionality to user
  printf("This program will take your birth date and the current date and output your age, maximum heart rate, and target heart rate.");

    // Typical prompt / storage
  printf("Please enter your birthday month MM: ");
  scanf("%d", &birthMonth);

  printf("Please enter your birthday day DD: ");
  scanf("%d", &birthDay);

    printf("Please enter your birthday year YYYY: ");
  scanf("%d", &birthYear);

  printf("Please enter the current month MM: ");
  scanf("%d", &curMonth);

  printf("Please enter the current day DD: ");
  scanf("%d", &curDay);

  printf("Please enter the current year YYYY: ");
  scanf("%d", &curYear);

  int age = curYear - birthYear;                  // Calculates age, if statements do rest
  int maxHeartRate = 220-age;                     // Calculates heartrate based on age
  int lowTarHeartRate = maxHeartRate*.5;          // Calculates lower end target heart rate
  int highTarHeartRate = maxHeartRate*.85;        // Calculates higher end target heart rate

   // If current month is after birth month, we know the age, and will print.
  if (curMonth>birthMonth){
  printf("\nYou are %d\nYourYour Maximum Heart Rate is %d\nYour Target Heart Rate is %d-%d\n", age,maxHeartRate, lowTarHeartRate, highTarHeartRate);
  }
    // If the current month is the same as the birth month, we need further checks
  else if (curMonth == birthMonth) {
    if (curDay > birthDay || curDay == birthDay) {
      printf("\nYou are %d\nYour Maximum Heart Rate is %d\nYour Target Heart Rate is %d-%d\n", age, maxHeartRate, lowTarHeartRate, highTarHeartRate);
    }

    // If the current day is within the same month but before the birth day, age adjust
    else {
      age = age-1;              // Refactoring age
      maxHeartRate = 220-age;   // Refactoring maximum heart rate with new age value

      printf("\nYou are %d\nYour Maximum Heart Rate is %d\nYour Target Heart Rate is %d-%d\n", age, maxHeartRate, lowTarHeartRate, highTarHeartRate);
    }
  }
    // If the current month is before the birth month, we know the age value needs adjustment
  else {
    age = age-1;                // Refactoring age
    maxHeartRate = 220-age;     // Refactoring maximum heart rate with new age value

    printf("\nYou are %d\nYour Maximum Heart Rate is %d\nYour Target Heart Rate is %d-%d\n", age, maxHeartRate, lowTarHeartRate, highTarHeartRate);
  }

  return 0;   // End
}