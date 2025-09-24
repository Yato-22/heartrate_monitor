Research:
Boolean is the simplest data type which works on the concept of 0 and 1 denoting false and true. In programming, a variable is a feature which allows the user to store data on the computer under a given name. So the user could have a Boolean variable named isUserLoggedIn whose value can be true or false. Depending on the value of the variable, the program can choose whether to show sensitive information to the user or not. 

Think about the concept of ‘on’ and ‘off’ in binary, where 1 represents ‘on’ and 0 represents ‘off’. How - Brainly.in
True or False? An Introduction to Boolean Algebra - Ziffur

Analyse:
The concept of 0 denoting false or off and 1 denoting true or no can be used in a variety of situations like:
Basic Electrical Switch: A switch which is used to control an electric circuit closes the power supply from the battery to the other components when it is in off position(0) and starts the power supply when it is in on position(1).
Logic gates: The logic gates like AND, OR, NOT work on the concept of boolean algebra. These logic gates are used to help a program to make its own decisions. 
Sensors: Motion, light, heat and some other sensors can be used to detect real world objects and control electrical components based on that.
Microcontroller based Control: Many modern devices use microcontrollers that process binary signals to turn appliances on or off.
Ideate:
A device designed for people with health conditions which continuously monitors vital signs like heart rate, blood pressure, etc. If any readings fall below or exceed certain thresholds, then the person will be notified.

Heart rate > 60 or Heart rate < 100
Normal Heart rate
Heart rate < 60 or Heart rate > 100
Abnormal Heart rate
Heart rate <= 0
Invalid 


Build:

#include <stdio.h>

int main(){
    int heartrate;

    printf("Enter the resting heart rate: ");
    scanf("%d", &heartrate);

    //For heartrate
    if(heartrate <= 0){
        printf("Invalid Input");
    }
    else{
        if(heartrate > 60 && heartrate < 100){
            printf("Your heart rate is normal.");
        }
        else{
            printf("Your heart rate is abnormal.");
        }
    }

    return 0;
}

Test:
Case 1: Heart rate is normal
Enter the resting heart rate: 70
Your heart rate is normal.

Case 2: Heart rate is abnormal
Enter the resting heart rate: 40
Your heart rate is abnormal.

Case 3: Invalid input
Enter the resting heart rate: -10
Invalid Input
