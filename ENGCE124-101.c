#include<stdio.h>
#include<math.h>

void displayMenu() {                        //main menu
    printf(" 1. Dec to Binary\n");
    printf(" 2. Binary to Dec\n");
    printf(" 3. Dec to ASCII\n");
    printf(" 4. Exit this Program\n");
}

void DECTOBINARY(int decimal) {            //แปลงเลขฐาน 10 เป็น ฐาน 2
    int binary[100];
    int i = 0;
    
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    printf(" Binary is: ");
    
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    
    printf("\n");
}

void BINARYTODEC(int binary) {      //แปลงเลขฐาน 10 เป็น 2
    int decimal = 0;
    int i = 0;

    while(binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf(" Decimal is: %d\n", decimal);
}

void DECTOASCII(int decimal) {             //แปลงเลขฐาน 10เป็นASCII
    printf(" ASCII is: %c\n", decimal);
}

int main() {
    int choice ;
    
    do {
        displayMenu() ;  
        scanf("%d", &choice);  

        switch (choice) {
            case 1: {
                int decimal;
                printf(" You chose Dec to Binary\n");
                printf(" Please input your dec: ");
                scanf("%d", &decimal);
                DECTOBINARY(decimal);
                break;
            }
            case 2: {
                int binary;
                printf(" You chose Binary to Dec\n");
                printf(" Please input your binary: ");
                scanf("%d", &binary);
                BINARYTODEC(binary);
                break;
            }
            case 3: {
                int decimal;
                printf(" You chose Dec to ASCII\n");
                printf(" Please input your dec: ");
                scanf("%d", &decimal);
                DECTOASCII(decimal);
                break;
            }
            case 4:
                printf(" Close the program.\n");
                break;
            default:
                printf(" Please select 1-4.\n"); 
        }
        
        printf("\n");
    } while (choice != 4);  // Loop until the user chooses to close the program
    
    return 0;
}