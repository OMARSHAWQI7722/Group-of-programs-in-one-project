#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    int manum, ennum;
    int num, num2, year, result2;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;

    cout << "                                   WELCOME TO C++ BASIC PROJECT\n" << endl;
    cout << "Please Choice one of the following: \n 1- Theoretical section By Dr.Belal. \n 2- Practical section By Dr.Enas." << endl;
    cin >> manum;

    switch (manum) {
        case 1: {
            cout << "                                  Welcome to Theoretical section \n";
            cout << "Please choice only one of three following:\n 1- For Sequence Control Structure.\n 2- For Branching Control Structure \n 3- For Repetition Control Structure \n Enter only (1-3): ";
            cin >> num;

            switch (num) {
                case 1: {
                    cout << "                                         Welcome To Sequence Control Structure\n";
                    cout << "Choice one Program Of The Following:\n 1- Area of Triangle.\n 2- Calculate AGE.\n 3- Convert Minute to Second. \n 4- Calculate Price with Tax. \n 5- Pythagorean Theorem. \n 6- Area of Circle.\n 7- Average of Three Numbers.\n 8- Amount of Sale.\n";
                    cout << "Enter The Number Of Program (Only 1-8): ";
                    cin >> num2;

                    int n1, n2, area, price, total_price;

                    switch (num2) {
                        case 1:
                            cout << "Welcome to program to calculate triangle area\nEnter the base of triangle: ";
                            cin >> n1;
                            cout << "Enter the height of triangle: ";
                            cin >> n2;
                            area = (n1 * n2) * 0.5;
                            cout << "The area of triangle = " << area << endl;
                            break;

                        case 2:
                            cout << "Enter Your Birth Year: ";
                            cin >> year;
                            result2 = currentYear - year;
                            cout << "Your Age is: " << result2 << " Years" << endl;
                            break;

                        case 3:
                            cout << "Welcome to program to convert minutes to seconds\nEnter the minutes: ";
                            int min;
                            cin >> min;
                            cout << "The conversion is: " << min * 60 << " Seconds" << endl;
                            break;

                        case 4:
                            cout << "Welcome to program to calculate total price with tax\nEnter the price: ";
                            cin >> price;
                            total_price = price + (price * 0.15);
                            cout << "The total price is: " << total_price << endl;
                            break;

                        case 5:
                            cout << "Welcome to program to calculate Pythagorean theorem\nEnter the value of a: ";
                            cin >> n1;
                            cout << "Enter the value of b: ";
                            cin >> n2;
                            cout << "The result = " << sqrt(n1 * n1 + n2 * n2) << endl;
                            break;

                        case 6:
                            cout << "Welcome to program to calculate area of circle\nEnter the radius: ";
                            int r;
                            cin >> r;
                            cout << "The area of circle is: " << 3.14 * r * r << endl;
                            break;

                        case 7:
                            cout << "Welcome to program to calculate average of three numbers\n";
                            int num1, num2, num3;
                            cout << "Enter the first number: ";
                            cin >> num1;
                            cout << "Enter the second number: ";
                            cin >> num2;
                            cout << "Enter the third number: ";
                            cin >> num3;
                            cout << "The average is: " << (num1 + num2 + num3) / 3.0 << endl;
                            break;

                        case 8:
                            cout << "Welcome to program to calculate total amount of sale\nEnter the price of book one: ";
                            int u, x;
                            cin >> u;
                            cout << "Enter the price of book two: ";
                            cin >> x;
                            cout << "The total amount is: " << u + x << endl;
                            break;

                        default:
                            cout << "Error! You should only enter (1-8)!" << endl;
                    }
                    break; // Don't forget to break the outer case!
                }

                case 2: {
                    cout << "                                  Welcome To Branching Control Structure\n";
                    cout << "Choice one Program Of The Following:\n 1- Check if number is positive, negative, or zero.\n 2- Check the maximum between two numbers.\n 3- Check if number is divisible by 5.\n 4- Check if number is odd or even.\n 5- Check if character is an alphabet or not.\n";
                    cout << "Only choice between (1-5): ";
                    int num6;
                    cin >> num6;

                    switch (num6) {
                        case 1: {
                            cout << "Enter the number: ";
                            int num0;
                            cin >> num0;
                            string result1 = (num0 > 0) ? "Positive" : (num0 < 0) ? "Negative" : "Zero";
                            cout << "The number " << num0 << " is " << result1 << endl;
                            break;
                        }

                        case 2: {
                            cout << "Welcome to program to check the maximum between two numbers\n";
                            int nu1, nu2;
                            cout << "Enter the first number: ";
                            cin >> nu1;
                            cout << "Enter the second number: ";
                            cin >> nu2;
                            cout << "The maximum of the numbers is: " << (nu1 > nu2 ? nu1 : nu2) << endl;
                            break;
                        }

                        case 3: {
                            cout << "Enter a number: ";
                            int num;
                            cin >> num;
                            if (num % 5 == 0) {
                                cout << num << " is divisible by 5." << endl;
                            } else {
                                cout << num << " is not divisible by 5." << endl;
                            }
                            break;
                        }

                        case 4: {
                            cout << "Enter a number: ";
                            int num;
                            cin >> num;
                            cout << num << " is " << (num % 2 == 0 ? "even." : "odd.") << endl;
                            break;
                        }

                        case 5: {
                            cout << "Enter a character: ";
                            char c;
                            cin >> c;
                            if (isalpha(c)) {
                                cout << c << " is an alphabet." << endl;
                            } else {
                                cout << c << " is not an alphabet." << endl;
                            }
                            break;
                        }

                        default:
                            cout << "Error! You should only enter between (1-5)!" << endl;
                    }
                    break;
                }

                case 3: {
                    cout << "                 Welcome to Repetition Control Structure.\n Choice one of the following:\n 1- Print your name 5 times \n 2- print the even numbers from 0-10. \n 3- Program to calculate the multiplication of 5 (from 1 to 5).\n 4- Find the summation of first 10 numbers (from 1 to 50). \n 5- Calculate area of circle 3 times \n 6- Print the even numbers from 0 to 10 and summation \n 7- Calculate and print multiplication table from 1 to 12. \n 8- Calculate and print area of parallelogram 6 times \n 9- Simulate the division operation giving two numbers without using (/). \n 10- Simulate the multiplication operation giving two numbers without using (*)." << endl;
                    cout << "Only choice between (1-10): ";
                    int num9;
                    cin >> num9;

                    switch (num9) {
                        case 1: {
                            string name;
                            cout << "Enter your name: ";
                            cin >> name;
                            for (int i = 0; i < 5; i++)
                                cout << name << endl;
                            break;
                        }

                        case 2: {
                            cout << "Even numbers from 0 to 10: ";
                            for (int i = 0; i <= 10; i += 2) {
                                cout << i << " ";
                            }
                            cout << endl;
                            break;
                        }

                        case 3: {
                            cout << "Multiplication of 5 from 1 to 5:" << endl;
                            for (int i = 1; i <= 5; i++) {
                                cout << "5 x " << i << " = " << 5 * i << endl;
                            }
                            break;
                        }

                        case 4: {
                            int sum = 0;
                            for (int i = 1; i <= 10; i++) {
                                sum += i;
                            }
                            cout << "The summation of the first 10 numbers is: " << sum << endl;
                            break;
                        }

                        case 5: {
                            for (int i = 0; i < 3; i++) {
                                int r;
                                cout << "Enter the radius of the circle: ";
                                cin >> r;
                                cout << "The area of the circle is: " << 3.14 * r * r << endl;
                            }
                            break;
                        }

                        case 6: {
                            int sumEven = 0;
                            cout << "Even numbers from 0 to 10: ";
                            for (int i = 0; i <= 10; i += 2) {
                                cout << i << " ";
                                sumEven += i; // Summation of even numbers
                            }
                            cout << "\nThe summation of even numbers is: " << sumEven << endl;
                            break;
                        }

                        case 7: {
                            for (int i = 1; i <= 12; i++) {
                                cout << "Multiplication table for " << i << ":" << endl;
                                for (int j = 1; j <= 10; j++) {
                                    cout << i << " x " << j << " = " << i * j << endl;
                                }
                                cout << endl;
                            }
                            break;
                        }

                        case 8: {
                            for (int i = 0; i < 6; i++) {
                                int base, height;
                                cout << "Enter the base of the parallelogram: ";
                                cin >> base;
                                cout << "Enter the height of the parallelogram: ";
                                cin >> height;
                                cout << "The area of the parallelogram is: " << base * height << endl;
                            }
                            break;
                        }

                        case 9: {
                            int num1, num2;
                            cout << "Enter two numbers: ";
                            cin >> num1 >> num2;
                            int quotient = 0, remainder = num1;

                            while (remainder >= num2) {
                                remainder -= num2;
                                quotient++;
                            }
                            cout << "The quotient is: " << quotient << " and the remainder is: " << remainder << endl;
                            break;
                        }

                        case 10: {
                            int num1, num2, result = 0;
                            cout << "Enter two numbers: ";
                            cin >> num1 >> num2;
                            for (int i = 0; i < num2; i++) {
                                result += num1; // Simulating multiplication
                            }
                            cout << "The result of multiplication is: " << result << endl;
                            break;
                        }

                        default:
                            cout << "Error! You should only enter (1-10)!" << endl;
                    }
                    break; // Don't forget to break the outer case!
                }

                default:
                    cout << "Error! You should only enter (1-3)!" << endl;
            }
            break; // Don't forget to break the outer case!
        }

        case 2: {
            cout << "                         Welcome to practical section by Dr.Enas \n Please choice one the following:";
            cout << "1- Program to display your first name and last name. \n 2- Program to write HELLO in different ways. \n 3- Basic Calculator \n 4- Program to calculate area of square. \n 5- Program to calculate area of triangle. \n 6- Program to display $6 just for 8 years and younger or 65 years and older. \n 7- Program to display odd positive or even positive and odd negative or even negative. \n 8- Program to check whether character is vowel or consonant letter. \n 9- Program to print hello 10 times. \n 10- Program that enters 10 numbers and prints the sum only of odd numbers. \n 11- Program that prints these series 5, 10, 15, 20, ..., 100. \n 12- Program that enters 15 numbers and prints the product of numbers." << endl;
            cin >> ennum;

            string name1, name2;
            switch (ennum) {
                case 1:
                    cout << "Enter your first name: ";
                    cin >> name1;
                    cout << "Enter your last name: ";
                    cin >> name2;

                    cout << "Your name is: " << name1 << " " << name2 << endl;
                    break;

                case 2:
                    cout << "Hello          Hello\nHello  Hello\nHello" << endl;
                    break;

                case 3: {
                    int num1, num2;
                    char oper;

                    cout << "Enter The Number One: ";
                    cin >> num1;

                    cout << "Enter The Number Two: ";
                    cin >> num2;

                    cout << "Enter The Number operation: \n (Only +,-,*,/,%): ";
                    cin >> oper;

                    switch (oper) {
                        case '+':
                            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                            break;

                        case '-':
                            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                            break;

                        case '*':
                            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                            break;

                        case '/':
                            if (num2 == 0) {
                                cout << "Error: Division by zero\n";
                            } else {
                                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                            }
                            break;

                        case '%':
                            cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
                            break;

                        default:
                            cout << "Error! Enter a correct operator." << endl;
                    }
                    break;
                }

                case 4: {
                    int sq;
                    cout << "Enter the side of square: ";
                    cin >> sq;
                    cout << "The area of square is: " << sq * sq << endl;
                    break;
                }

                case 5: {
                    int tra, hie;
                    cout << "Enter the base of triangle: ";
                    cin >> tra;
                    cout << "Enter the height of triangle: ";
                    cin >> hie;
                    float result_triangle = 0.5 * tra * hie;
                    cout << "The area of triangle: " << result_triangle << endl;
                    break;
                }

                case 6: {
                    int age;
                    cout << "Enter the age of person: ";
                    cin >> age;
                    if (age <= 8 || age >= 65) {
                        cout << "You have to pay only $6." << endl;
                    } else {
                        cout << "You have to pay $20." << endl;
                    }
                    break;
                }

                case 7: {
                    int number;
                    cout << "Enter a number: ";
                    cin >> number;

                    if (number > 0) {
                        if (number % 2 == 0) {
                            cout << "The number is a positive even number." << endl;
                        } else {
                            cout << "The number is a positive odd number." << endl;
                        }
                    } else if (number < 0) {
                        if (number % 2 == 0) {
                            cout << "The number is a negative even number." << endl;
                        } else {
                            cout << "The number is a negative odd number." << endl;
                        }
                    } else {
                        cout << "The number is zero." << endl;
                    }
                    break;
                }

                case 8: {
                    char ch;
                    cout << "Enter the character: ";
                    cin >> ch;
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                        cout << "This is a vowel letter." << endl;
                    } else {
                        cout << "This is a consonant letter." << endl;
                    }
                    break;
                }

                case 9: {
                    for (int i = 0; i < 10; i++)
                        cout << "Hello" << endl;
                    break;
                }

                case 10: {
                    int nnum, sum = 0, count = 0;
                    cout << "Enter ten numbers:" << endl;
                    while (count < 10) {
                        cin >> nnum;
                        if (nnum % 2 != 0)
                            sum += nnum;
                        count++;
                    }
                    cout << "Summation of odd numbers is: " << sum << endl;
                    break;
                }

                case 11: {
                    for (int i = 5; i <= 100; i += 5) {
                        cout << i << " ";
                    }
                    cout << endl;
                    break;
                }

                case 12: {
                    int product = 1, number;
                    cout << "Enter 15 numbers: " << endl;
                    for (int i = 0; i < 15; i++) {
                        cin >> number;
                        product *= number;
                    }
                    cout << "The product of the numbers is: " << product << endl;
                    break;
                }

                default:
                    cout << "Error!! You should Enter only (1-12)!" << endl;
            }
            break;
        }

        default:
            cout << "Error! You should only enter (1 or 2)!" << endl;
    
}
    cout << "This program is done by Omar Shawqi"<<endl;
}