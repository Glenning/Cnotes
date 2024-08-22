#include <stdio.h>
#include <stdlib.h>

int main()
{
    char msg[] = "Hello World!";
    int nmb = 999;

    printf("%s\n", msg); //backslash n makes a new line, using the %s allows for C to access and insert a string
    printf("%d\n", nmb); //%d does the same but for int

    nmb = 333; //change the value of a variable anywhere and next instance of it will be updated
    printf("%d\n", nmb);

    int nmbr = 123; //functions exactly like in C#
    double dcml = 5.5; //--||--
    char crcter = 'C'; //string but only for one character, uses single quotes
    char sntnc[] = "A whole sentence"; //the brackets allow for multiple chars, uses an array

    printf("Printing special chars \" in a print\n"); //backslash before a special char like " allows it to be printed
    printf("Visit Tesla's grave for the %dth time today\n", 9); //format specifiers are implemented via %, % followed by d is int, can be used in tandem with regular chars
    printf("%s %d five forked tongue\n", "Triple", 6); //%s = string, the order in which you put the specifiers is the order you need to put them via commas after the end of the printed line
    printf("This is a decimal %f\n", 4.5); //%f = float

    printf("%f\n", 3.3 + 3.3); //can do math within the print, float specifiers can ONLY print floats
    printf("%f and %f\n", pow(3, 3), sqrt(36)); //to the power of and square root
    printf("%f and %f\n", ceil(5.567), floor(4.98)); //ceil rounds up to the next whole, floor down

    const int NUM = 4; //can't modify unlike usual ints, usually people write in all caps for consts
    printf("%d\n", NUM); //general things written in prints are also considered consts

    //comment out whatever doesn't need to be tested, dunno how to ask for multiple things in a row properly yet
    int age;
    char initial;
    char study[25]; //how many chars it allows
    printf("Enter age: ");
    scanf("%d", &age); //allows C to scan for an int ONLY, & is a pointer that indicates that we're storing the input in the int, if asking for a float, use %lf
    printf("You are %d years old", age);

    printf("Enter your initial: ");
    scanf("%c", &initial);
    printf("Your initial is %C", initial); //same concept but for single char,

    printf("Enter your study: ");
    fgets(study, 25, stdin); //scanf but scans a whole line with spaces and all, stdin means standard input
    printf("You are a %s student", study);

    return 0;
}
