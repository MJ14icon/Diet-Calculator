#include<stdio.h>
  int a,b,c,d,e,f;

void LeanPlan(){
    printf("You have chosen the Lean Body Plan\n");
    printf("For this plan you should prioritize more Protein and less fats and calories daily.");
    printf("Your body weight is: %dkg\n", a);
    printf("You weigh: %d in pounds", b=a*2.25);
    printf("Below is your new Macro Plan follow it srictly everyday to achieve results\n");
    printf("Your Daily Calorie intake should be: %d\n", c=b*12);
    printf("Your Daily Protein intake should be: %dgrams\n", d=b*1.6);
    printf("Your Daily Carbs intake should be: %dgrams\n", e=b*1.2);
    printf("Your Daily Fat intake should be: %dgrams\n", f=b*0.6);
    printf("Track your Calories and be disciplined and you will reach your Body goals");
}
 void BulkPlan(){
    printf("You have chosen the Bulk Body Plan\n");
    printf("For this plan you should prioritize more Protein, calories and fats daily.");
    printf("Your body weight is: %dkg\n", a);
    printf("You weigh: %d in pound", b=a*2.25);
    printf("Below is your new Macro Plan follow it srictly everyday to achieve results\n");
    printf("Your Daily Calorie intake should be: %d\n", c=b*18);
    printf("Your Daily Protein intake should be: %dgrams\n", d=b*1.4);
    printf("Your Daily Carbs intake should be: %dgrams\n", e=b*1.6);
    printf("Your Daily Fats intake should be: %dgrams\n", f=b*1.1);
    printf("Track your Calories and be disciplined and you will reach your Body goals");
 }

 int main(){
    int choice;
    printf("Welcome to the better me Body Plan\n");
    printf("Please Enter your Weight in Kilograms\n");
    scanf("%d",&a);
    printf("1 > Lean\n");
    printf("0 > Bulk\n");
    printf("Please select your intended body plan:\n");
    scanf("%d",&choice);
    if(choice == 1){
        LeanPlan();
    } else if(choice == 0){
        BulkPlan();
    } else {
        printf("Invalid choice. Please select either 1 for Lean or 0 for Bulk.\n");
    }
    return 0; 
 }
