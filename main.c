/*
 * Project Title: Number System Converter
 * Description:                                                                                                                          
 *The Number System Converter is a C-based console application designed to perform conversions between various number systems such as * Decimal, Binary, Octal, and Hexadecimal. It allows users to easily understand and convert numeric values across different bases us * ed in digital systems and computer architecture.
The program uses fundamental C concepts like loops, conditional statements, string manipulation, and arithmetic operations. It implements custom conversion logic without relying on built-in library functions, ensuring that users gain a deep understanding of how base conversions actually work.
* Author: G C Phaneendra
*/ 






#include <stdio.h>
#include "conversion.h"



int main()
{
        long int num;
	unsigned short choice;
	char binary[100];
	printf("=============================NUMBER SYSTEM CONVERTOR==================================\n");
	printf("1. Decimal number to Binary number\n");
	printf("2. Binary number to Decimal number\n");
	printf("3. Octal  number to Decimal number\n");
	printf("4. Hexadecimal number to Decimal number\n");
	printf("5. Decimal number to Octal number\n");
	printf("6. Decimal number to Hexadecimal number\n");
	printf("7. Hexadecimal number to Binary number\n");
	printf("8. Binary number to Hexadecimal number\n");
	printf("9. Octal number to Binary number\n");
	printf("10. Binary number to Octal number\n");


        printf("Enter your choice: ");
	scanf("%hu", &choice);

	switch(choice)
	{
		 case 1:
			    printf("Enter the Decimal number: ");
			    scanf("%ld", &num);
			    decToBinary(num);
			    break;
	         case 2:
			    printf("Enter the binary number: ");
			    scanf("%s", binary);
			    binary_to_decimal(binary);
			    break;
	         case 3:
			 
			    Octal_to_Decimal();
			    break;
	         case  4:
			    hexadecimal_to_decimal();
			    break;
	         case 5:
			    printf("Enter the Decimal number: ");
			    scanf("%ld", &num);
			    Decimal_to_Octal(num);
			    break;
	         case 6:
			    printf("Enter the Decimal number: ");
			    scanf("%ld", &num);
			    Decimal_to_hexadecimal(num);
			    break;
	         case 7:
			    Hexadecimal_to_Binary();
			    break;
	         case 8:
			    Binary_to_Hexadecimal();
			    break;
	         case 9:
			    Octal_to_Binary();
			    break;
	         case 10:
			    Binary_to_Octal();
			    break;
	         default:
			 printf("Invalid choice\n");

        }
        return 0;
}
