/*Calculates the time it takes to fill a swimming pool with user input of length, width, and height
09/10/19
p1b
CS320
Brian Duong */

#include <stdlib.h>
#include <stdio.h>

float calcTime(float volume){			/* calculates time to fill pool in minutes */
	float time = volume * 7.8 / 20;		/* 7.8 gallons per ft^3, divided by 20 gallons/s */
	return time;
}

int main(int argc, char* argv[]){		/* accepts 4 inputs; (program, followed by 3 numbers) */
	float length, width, height;
	float inputRate = 20;

	if(argc < 4){						/* if any of the inputs are not entered, prints error msg */
		printf("Usage: p1b length width height");
		return 0;
	}

	length = atof(argv[1]);				/* changes to char input to float; then adds to array */
	width = atof(argv[2]);
	height = atof(argv[3]);

	float time = calcTime(length * width * height);		/* l * w * h = vol */

	printf("Program #1, cssc0474, Brian Duong\n\n");
	printf("Time to fill a swimming pool %f by %f by %f with water\n",length,width,height);
	printf("input rate of %f gallons per minute is %f minutes",inputRate, time);
	return 0;
}
