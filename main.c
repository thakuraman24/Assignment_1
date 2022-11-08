/*
1. Write a program to print Hello Students on the screen.
#include <stdio.h>

int main() {
    printf("Hello");
    return 0;
}


2. Write a program to print Hello in the first line and Students in the second line.
#include <stdio.h>

int main() {
    printf("Hello\nStudents");
    return 0;
}


 3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

#include <stdio.h>

int main() {
    printf("\"My Sir G\"");
    return 0;
}


 4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
 Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.

#include <stdio.h>

int main() {
    printf("Enter the radius of circle whose area you wish to calculate\n");
    int r;
    scanf("%d", & r);
    printf("Area of circle is %f having the radius %d.",3.14*r*r,r);
    return 0;
}


5. WAP to calculate the length of String using printf function.

#include <stdio.h>

int main() {
    int x = printf("Raman Thakur");
    printf(", Length = %d",x);
    return 0;
}


6. WAP to print the name of the user in double quotes.

#include <stdio.h>

int main() {
    printf("Enter Your Name\n");
    char Name[100];
    scanf("%s",Name);
    printf("\"%s\"",Name);
    return 0;
}


7. WAP to print “%d” on the screen.
#include<stdio.h>

int main(){
    printf("%%d");
}



8. WAP to print “\n” on the screen.

#include <stdio.h>

int main() {
    printf("\\n");
    return 0;
}




9. WAP to print “\\” on the screen.

#include <stdio.h>

int main() {
    printf("\\\\");
    return 0;
}



10. WAP to take date as an input in below given format and convert the date format and display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)

#include <stdio.h>

int main() {
    int DD,MM,YYYY;
    printf("Enter Date in DD/MM/YYYY\n");
    scanf("%d%d%d",&DD,&MM,&YYYY);
    printf("Day - %d , Month - %d , Year - %d\n",DD,MM,YYYY);
    return 0;
}




11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
User Input date format – “HH:MM” Output format – “HH hour and MM Minute” Example – “11:25”
converted to “11 Hour and 25 Minute”.

#include <stdio.h>

int main() {
    int HH,MM;
    printf("Enter Date in HH:MM\n");
    scanf("%d%d",&HH,&MM);
    printf("%d:%d",HH,MM);
    return 0;
}




12. Find output of below code:
int main() {
    int x = printf("ineuron");
    printf(“%d”,x);
    return 0;
}

The output of above programme is:
ineuron7
 */
