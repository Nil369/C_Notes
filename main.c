#include <stdio.h>

int main()
{
    // This is a single line comment: This will be ignored by  GCC compiler

    /*
    This is a
    multiline comment:
    This will also be ignored by the compiler
    */

    int a1 = 3; // 2-4 byte
    //   unsigned short integer = 9; //2 bytes
    //   long integer1 = 99; //4 bytes
    //   short integer1 = 69; //2 bytes

    float b1 = 6; // 4 bytes-->6 decimal places precission
                  //  double myfloat1 = 7.888889; //8 bytes-->15 decimal places precission
                  //  long double myfloat2 = 8.999999999999999; //10 bytes-->19 decimal places precission

    char c1 = 'A'; // 1 byte1

    /*
    for int type--> %d ;
    for float type-->%f;
    for char type--> %c;
    */

    printf("Hello %d %f %c", a1, b1, c1); // for single value to be printed -->printf "%d",a

    printf("The size taken by integer is %d\n", sizeof(int));
    printf("The size taken by unsigned integer is %d\n", sizeof(unsigned int));
    printf("The size taken by long integer is %d\n", sizeof(long int));
    printf("The size taken by short  integer is %d\n", sizeof(short int));
    printf("The size taken by float is %f\n", sizeof(float));

    printf("\n*************Rules for creating variables***************");

    int akashName;   // This is variable initialization
    akashName = 69;  // This is variable decleration
    char five = '5'; // This is variable initialization & decleration

    const int i = 99;
    // i= 100; Can't chnage value bcoz we commanded i to constant with a value of 99

    printf("\n************* Types of Operations in C ***************\n");

    /*
       Arithmetic Operators
        Relational Operators
        Logical Operators
        Bitwise Operators
        Assignment Operators
        Misc Operators
       */
    // Arithmetic Operators
    int a = 60, b = 7, c = 8;
    printf("The sum of a and b is %d\n", a + b);
    printf("The difference of a and b is %d\n", a - b);
    printf("The multiplication result of a and b is %d\n", a * b);
    printf("The division result of a and b is %d\n", a / b);
    printf("The modulo result of a and b is %d\n", a % b);
    printf("The increment result of a is %d\n", ++a);
    printf("The decrement result of a is %d\n", --b);

    // Relational Operators
    int harry = 9, rohan = 45;
    printf("%d\n", harry == rohan);
    printf("%d\n", harry != rohan);
    printf("%d\n", harry > rohan);
    printf("%d\n", harry < rohan);

    // Logical Operators
    int h = 0, j = 1;
    printf("The logical operator returned %d\n", h && j); // and operator
    printf("The logical operaTor returned %d\n", h || j); // or operator
    printf("The logical operator returned %d\n", !j);     // not operator
    printf("The logical operator returned %d\n", !h);     //  operator

    // Bitwise Operators
    // A = 60 B=13
    // A = 00111100
    // B = 00001101
    // R = 00001100
    int A = 60, B = 14;
    printf("Bitwise and operator returned %d\n", A & B);
    printf("Bitwise or operator returned %d\n", A | B);
    printf("Bitwise xor operator returned %d\n", A ^ B);
    printf("Bitwise ones complement operator returned %d\n", ~B);
    printf("Bitwise left shift operator operator returned %d\n", A << B);
    printf("Bitwise right shift operator operator returned %d\n", A >> B);

    // Assignment Operators
    // =, +=, -=, *=, %=, etc
    int ha = 9;
    ha += 9;
    printf("ha is %d\n", ha);

    // Misc Operators - &, *, ?:

    printf("************Taking input from users****************");
    int harryInput;
    printf("\n Please Enter the value of harryInput: ");
    scanf("%d", &harryInput);
    printf("\nYou Entered %d as harryInput\n", harryInput);

    // int num1, num2;
    // scanf("%d", &num1);
    // scanf("%d", &num2);
    // printf("\n num1/num2 is %f", (float)num1/num2);

    printf("\n\n*******Decision Making in C*********\n\n");
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your age\n");

    age = 44;
    if (age < 18)
    {
        printf("You can drive");
    }
    else if (age >= 18 && age <= 24)
    {
        printf("You are banned from driving");
    }
    else
    {
        printf("You can drive but drive carefully");
    }
    // Exercise: Tell me about Switch statement
    int i4 = age > 3 ? 100 : 200; // short hand if else
    printf(" %d ", i4);

    printf("\n\n*******Loop in C*********\n\n");
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }

    for(int j = 0; j < 67; j++)
    {
        printf("%d\n", j);
    }

    do
    {
        printf("do while loop is runnig");
    } while (j>65656);
    

    return 0;
}
