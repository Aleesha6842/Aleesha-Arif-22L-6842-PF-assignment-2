//Psuedocode:
//1. Declare number
//2. Ask user to enter number
//3. Input number
//4. Declare temp1 = num
//5. Declare sum = 0
//6. While (temp1 != 0)
//7. Declare digit = temp1 % 10
//8. Declare factorial = 1
//9. Declare a = 1
//10. While a <= digit
//11. factorial *= i
//12. a++
//13. sum += factorial
//14. temp1 /= 10
//15. If sum == number
//16. Print " Given Number is a strong number"
//17. Else
//18. Print " Given Number is not a strong number"

//

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int temp1 = number;
    int sum = 0;
    while (temp1!= 0)
    {
        int value = temp1% 10;
        int factorial = 1;
        int a = 1;

        while (a <= value)
        {
            factorial *= a;
            ++a;
                
        }

        sum += factorial;
        temp1 /= 10;
    }

    if (sum == number)
    {
        cout << "Given Number is a strong number";
    }
    else
    {
        cout << "Given Number is not a strong number";
    }

    
    return 0;
}