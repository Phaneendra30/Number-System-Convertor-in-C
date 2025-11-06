#include <stdio.h>
#include <string.h>





// Function to convert decimal number into binary number
void  decToBinary(long int val)
{
    unsigned short i = 0;
    int binary[1000];
    long int temp = val;
    while(val > 0)
    {
	    binary[i++] = val % 2;
	    val = val / 2;
    }
    printf("The Binary equivalent number of decimal number %ld is: ", temp);  
    for(int j = i - 1; j >= 0; j--)
    {
	    printf("%d", binary[j]);
    }
}

/* Function to convert binary number into decimal number */
void  binary_to_decimal(char *binary)
{
	int i;
	int dec = 0, base = 1;
	for(i = strlen(binary) - 1; i >= 0; i--)
	{
		if(binary[i] == '1')
		{
			dec += base;
		}
		base = base * 2;

	}
	printf("The decimal equivalent number of Binary number %s is: %d\n", binary, dec);
			
}


/* Function to convert Octal number into decimal number */
void Octal_to_Decimal()
{
	int num;
	printf("Enter The Octal number: ");
	scanf("%d", &num);
	int base = 1, last_digit;
	int Dec = 0;
	int temp = num;
	while(temp != 0)
	{
		last_digit = temp % 10;
		Dec += last_digit * base;
		base = base * 8;
		temp = temp / 10;
	}
	printf("The decimal equivalent of the octal Number %d is %d\n", num, Dec);

}

/* Function to convert hexadecimal number into decimal number */
void hexadecimal_to_decimal()
{
	unsigned char hex[100];
	printf("Enter the hexa decimal number: ");
	scanf("%s", hex);
	int base = 1, dec = 0;
        int len = strlen(hex) - 1;
	for(int i = len; i >= 0; i--)
	{
		if(hex[i] >= '0' && hex[i] <= '9')
		{
			dec += (hex[i] - 48) * base;
	        }
		else if(hex[i] >= 'A' && hex[i] <= 'F')
		{
			dec += (hex[i] - 55) * base;
		}
		else if(hex[i] >= 'a' && hex[i] <= 'f')
		{
			dec += (hex[i] - 87) * base;
		}
		base = base * 16;
        }
printf("The decimal equivalent number of the hexadecimal number %s is %d\n", hex, dec);
}

/* Function to convert decimal number to octal number */
void Decimal_to_Octal(long int n)
{
        int oct[100];
	int i = 0;
	long int temp = n;
	while(n != 0)
	{
                oct[i++] = n % 8;
		n = n / 8;
	}
	printf("The Octal equivalent number of the decimal number %ld is: ", temp);
	for(int j = i - 1; j >= 0; j--)
	{
		printf("%d", *(oct + j));
	}

}


/* Function to convert decimal number into binary number */
void Decimal_to_hexadecimal(long n)
{
	char hex[100];
	int i = 0;
	long int temp = n;
	if(n == 0)
	{
	printf("The hexadecimal equivalent of the decimal number %ld is: 0x%c", temp, '0');
	}
	while(n > 0)
	{
		int rem = n % 16;
		if(rem >= 0 && rem <= 9)
		{
			hex[i] = rem + 48;
		}
		else
		{
			hex[i] = rem + 55;
		}
		n = n / 16;
		i++;
	}
	hex[i] = '\0';
	printf("The hexadecimal equivalent of the decimal number %ld is: 0x", temp);
	for(int j = i - 1; j >=0; j--)
	{
		printf("%c", hex[j]);

	}

}

/* Function to convert hexadecimal number into binary number */
void Hexadecimal_to_Binary()
{
	 unsigned char hex[50];
	 int i = 0;
	 printf("Enter the hexadecimal number: ");
	 scanf("%s", hex);
 char binary[][5] = {"0000", "0001", "0010","0011","0100","0101","0110", "0111","1000", 
                      "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
          printf("Binary equivalent: ");
	  while(hex[i])
	  {
		  if(hex[i] >= '0' && hex[i] <= '9')
		  {
			  printf("%s", binary[hex[i] - '0']);
		  }
		  else if(hex[i] >= 'A' && hex[i] <= 'F')
		  {
			  printf("%s", binary[hex[i] - 'A' + 10]);
		  }
		  else if(hex[i] >= 'a' && hex[i] <= 'f')
		  {
			  printf("%s", binary[hex[i] - 'a' + 10]);
		  }
		  else
		  {
			   
                     printf("\nInvalid hexadecimal digit %c", hex[i]);
                     return;
		  }
		  i++;
	  }
	  printf("\n");

}

/* Function to convert binary number to hexadecimal number */
void Binary_to_Hexadecimal()
{
	char binary[100];
	printf("Enter the binary number: ");
	scanf("%s", binary);
	int dec = 0, base = 1;
	// first convert binary number into decimal number;
	for(int j = strlen(binary) - 1; j >= 0; j--)
	{
		if(binary[j] == '1')
		{
			dec += base;

                }
		base = base * 2;

        }
	
	int rem, i = 0;
	unsigned char hex[100];
	while(dec > 0)
	{
		int rem = dec % 16;
		if(rem >= 0 && rem <= 9)
		{
			hex[i] =  rem + 48;
                }
		else 
		{
			hex[i] = rem + 55;
		}
		dec = dec / 16;

		i++;
	}
	hex[i] = '\0';
	
	printf("The Hexadecimal equivalent number is: 0x");
	for(int k = strlen(hex) - 1; k >= 0; k--)
	{

		printf("%c", hex[k]);
	}
		
	

}



/* Function to Convert Octal number to Binary Number */
void Octal_to_Binary()
{

	int num;
	printf("Enter the Octal number: ");
	scanf("%d", &num);
	int temp = num;
	unsigned char Binary[][4] = {"000", "001", "010", "011", "100", "101", "110", "111"};
	unsigned char binary[100][4];
	if(temp == 0)
	{
		printf("%s", Binary[0]);
		return;
	}
	int i = 0;
        printf("The Binary equivalent number of the octal number %d is: ", num);
	while(temp > 0)
	{
		int rem = temp % 10;
		strcpy(binary[i++], Binary[rem]);
		temp = temp / 10;

	}
	for(int j = i - 1; j >= 0; j--)
	{
		printf("%s", binary[j]);
	}
}



/* Function to Convert Binary number to Octal Number */
void Binary_to_Octal()
{
	unsigned char Binary[100];
	printf("Enter the Binary number: ");
	scanf("%s", Binary);
	int dec = 0, base = 1, i = 0;

	for(i = strlen(Binary) - 1; i >= 0; i--)
	{
		if(Binary[i] == '1')
		{
			dec += base;
		}
		base = base * 2;
	}


        int oct[100];
        i = 0;
        
        while(dec != 0)
        {
                oct[i++] = dec % 8;
                dec = dec / 8;
        }
        printf("The Octal equivalent number of the Binary number %s is: ", Binary);
        for(int j = i - 1; j >= 0; j--)
        {
                printf("%d", *(oct + j));
        }

}

