#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 55

//Prototypes:
int addThree(int);
void showMessage();
void checkRange(int);

int main()
{ //Start Main()

    checkRange(101);

    /* int num = 1;
    num = addThree(num);
    printf("%d\n", num);
    showMessage();
    */

    return 0;
} //End Main()


int addThree(int x)
{
    return x + 3;
}

void showMessage()
{
    printf("Value is out of range!\n");
}

void checkRange(int enteredValue)
{
 if (enteredValue > MAX || enteredValue < MIN)
    {
        showMessage();
    }
}
