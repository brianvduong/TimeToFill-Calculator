/*Calculates the time it takes to fill a swimming pool with user input of length, width, and height
09/10/19
p1a
CS320
Brian Duong */

#include <stdlib.h>
#include <stdio.h>

void getDim(float *length, float *width, float *height){
	scanf("%f", length);				/* scans userinput for length, width, and height */
	scanf("%f", width);
	scanf("%f", height);
}


float calcTime(float volume){			/* calculates time to fill pool in minutes */
	float time = volume * 7.8 / 20;		/* 7.8 gallons per ft^3, divided by 20 gallons/s */
	return time;
}

int main(){
	float length, width, height;
	float inputRate = 20;
	getDim(&length, &width, &height);				

	float time = calcTime(length * width * height);		/* l * w * h = vol */

	printf("Program #1, cssc0474, Brian Duong\n\n");
	printf("Time to fill a swimming pool %f by %f by %f with water\n",length,width,height);
	printf("input rate of %f gallons per minute is %f minutes",inputRate, time);
	return 0;
}
	
	

