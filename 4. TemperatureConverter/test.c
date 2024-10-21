#include <stdio.h>
void main(void){
    int low, high, step;
    float farh, cel;
    // clrscr();
    low = 0;
    high = 300;
    step = 20;
    farh = low;
    while(farh<=high){
        cel = (5.0/9.0) *(farh-32.0);
        printf("%4f %6.2f\n", farh, cel);
        farh +=step;
    }
}