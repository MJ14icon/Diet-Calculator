#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Welcome to The Wrld Diet Calculator\n");
    printf("Please enter your current weight in kilograms:\n");
    scanf("%d", &a);
    b=a*2.2;
    printf("Your weight in Pounds is:%d\n", b);
    c=b*12;
    printf("You should be eating a total of %d Calories per day\n", c);
    d=a*1.6;
    printf("You need %d grams of Protein minimum each day\n", d);
    e=b*1.2;
    printf("You should be eating %d grams of Carbs each day\n", e);
    f=b*0.4;
    printf("You should be eating less than %d grams of Fat each day\n", f);
    printf("Stick to these Measurements and you should reach your body goals in no time\n");
    return 0;
}