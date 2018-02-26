//This program converts a number from base 10 to base 2-9, specifying the base that you want to convert the number.
#include <stdio.h>

main (){
	int number =0; // The number. The dividend
	int base = 0; //Divider
	int remainder =0; // that same
	int power =1; //Used to locate the value of positional system.
	int NewNumber=0;
	printf ("Write a positive integer number\n");
	scanf ("%d", &number);
	printf ("Write the base you want to convert\n");
	scanf ("%d", &base);
	
	for (;number!=0;number=number/base){ //divide number/base until number reaches 0  
	NewNumber = NewNumber+ (power*(number%base)); // calculates the remainder and puts it in unities, then the power will put the remainder in tens, hundreds, thousands, etc.
	power = power*10; // Changes to use the positional features (unity, ten, hundred, etc)
	}	
	//prints the result
	printf ("%d in base %d", NewNumber, base);
}
