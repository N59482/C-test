#include <iostream>

using namespace std;

int main()
{
    int val1;
    int val2;
    cin>>val1>>val2;
    
    int memory2 = val2; // запоминаем второе число
    
    int digit1 = 0; // переменные для цифр первого и второго числа
    int digit2 = 0;

    while(val1 != 0)// проход по первому числу (по одной цифре с конца)
        {
            digit1 = val1 % 10;
            val1 = val1 / 10;
            while(val2 != 0)// проход по второму числу (по одной цифре с конца)
                {
                    digit2 = val2 % 10;
                    val2 = val2 / 10;
                    if(digit1 == digit2) 
                        {
                            cout<<digit1;
                            break;
                        };
                };
            val2 = memory2; // "вспоминаем" второе число
        };
    cout<<endl;


    return 0;
}
