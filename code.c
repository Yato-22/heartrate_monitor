#include <stdio.h>

int main(){
    int heartrate;


    printf("Enter the resting heartrate: ");
    scanf("%d", &heartrate);

    //For heartrate
    if(heartrate <= 0){
        printf("Invalid Input");
    }
    else{
        if(heartrate > 60 && heartrate < 100){
            printf("Your heartrate is normal.");
        }
        else{
            printf("Your heartrate is abnormal.");
        }
    }

    return 0;
}


/*
heartrate: 60 to 100
blood pressure: greater than 120/80
*/
