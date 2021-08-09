#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
namespace zeroLevel
{
    int sums(int a, int b)
    {
        cout << "the sum is a fuck";
        cout << a + b;
        return 0;
    }
    int takeinput()
    {
        int x;
        cin >> x;
        while (x >= 0)
        {
            cin >> x;
        }

        cout << "the ans is ";
        cout << x;
        return 0;
    }
    //  learning about continue and break statment
    int count(int x)
    {
        for (int i = 0; i <= 10; i++)
        {
            if (i % 2 == 0)
            {
                continue;
            }
            else if (i == 5)
            {
                break;
            }

            else
            {
                cout << x * i;
                cout << endl;
            }
        }
        return 0;
    }
    // switch statment
    void calculater()
    {
        int x;
        int y;
        cin >> x >> y;
        char opertater;
        cin >> opertater;
        cout << "program is start and your operater is ";
        cout << opertater;

        switch (opertater)
        {
        case '+':
            cout << "addition is ";
            cout << x + y;
            break;
        case '-':
            cout << "subtration is ";
            cout << x - y;
            break;
        case '*':
            cout << "multi is ";
            cout << x * y;
            break;
        case '/':
            cout << "divider is ";
            cout << x / y;
            break;

        default:
            break;
        }
    }
}
namespace operation
{
    // operation
    void bitwise()
    {
        try
        {
            int a = 14;
            cout << (a >> 1);
        }
        catch (const exception &e)
        {
            cerr << e.what() << '\n';
        }
    }
}
namespace pattern
{
    /* 
    hollow_rectangle
    inverted_half_pyramid
    halfPyramidAfter180Rotation
    halfPyramidUsingNumber
    floydsTiangle
    butterFly
    invertedPattern
    zeroOnePattern
    rhombusPattern
    numberPattern
    palindromicPattern
    starPattern
    zigZagPattern
    */
    void hollow_rectangle()
    {
        short int row;
        short int col;
        cin >> row;
        cin >> col;
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                if (i == 1 || j == 1 || j == col || i == row)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    void inverted_half_pyramid()
    {
        short int x;
        cin >> x;
        for (int i = x; i > 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    void halfPyramidAfter180Rotation()
    {
        cout << "program is start" << endl;
        short int x;
        cin >> x;

        for (int i = x; i >= 1; i--)
        {

            for (int j = 1; j <= x; j++)
            {
                if (i == j || j >= i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    void halfPyramidUsingNumber()
    {
        short int x;
        cin >> x;

        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }

            cout << endl;
        }
    }
    void floydsTiangle()
    {
        short int x;
        cin >> x;
        short int floydTriangle = 1;

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << floydTriangle << " ";
                floydTriangle++;
            }
            cout << endl;
        }
    }
    void butterFly()
    {
        short int x;
        cin >> x;

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= x * 2; j++)
            {
                if (j <= i || (x * 2 - j < i))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (int i = x; i >= 1; i--)
        {
            for (int j = 1; j <= x * 2; j++)
            {
                if (j <= i || (x * 2 - j < i))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    void invertedPattern(int x)
    {
        for (int i = x; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    void zeroOnePattern(int x)
    {
        bool boolValue = true;

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << boolValue << " ";
                boolValue = !boolValue;
            }
            cout << endl;
        }
    }
    void rhombusPattern(int x)
    {
        for (int i = x; i >= 1; i--)
        {
            for (int j = 1; j <= 2 * x - 1; j++)
            {
                if (j < i || j - i >= 5)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*"
                         << " ";
                }
            }
            cout << endl;
        }
    }
    void numberPattern(int x)
    {
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= x - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    void palindromicPattern(int x)
    {
        for (int i = 1; i <= x; i++)
        {
            for (int j = i; j < x; j++)
            {
                cout << " "
                     << " ";
            }
            for (int dec = i; dec >= 1; dec--)
            {
                cout << dec << " ";
            }
            for (int inc = 2; inc <= i; inc++)
            {
                cout << inc << " ";
            }
            cout << endl;
        }
    }
    void starPattern(int x)
    {
        for (int i = 1; i <= x; i++)
        {
            for (int j = i; j <= x - 1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }

            cout << endl;
        }

        for (int i = x; i >= 1; i--)
        {
            for (int j = x; j > i; j--)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }

            cout << endl;
        }
    }
    void zigZagPattern(int x)
    {
        try
        {
            if (x != 9)
            {
                throw "input number should be 9";
            }
        }
        catch (char const *errType)
        {
            cout << errType;
        }
    }
}
namespace basicProgram
{
    /*
    isPrime
    reverseOfaNumber
    armstrongNumber
    */
    void isPrime(int x)
    {
        try
        {
            bool flag = false;
            for (int i = 2; i <= x / 2 + 1; i++)
            {
                if (x % i == 0)
                {
                    cout << "number is not prime";
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                cout << "number is a prime number";
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    void reverseOfaNumber(int x)
    {
        int reverse = 0;
        while (x > 0)
        {
            int temp = x % 10;
            reverse = reverse * 10 + temp;
            x = x / 10;
        }
        cout << reverse;
    }
    void armstrongNumber(int x)
    {
        int number = x;
        int armstrong = 0;
        while (x > 0)
        {
            int temp = x % 10;
            armstrong = armstrong + temp * temp * temp;
            x = x / 10;
        }

        if (number == armstrong)
        {
            cout << true;
        }
        else
        {
            cout << false;
        }
    }
}
namespace functionProgram
{
    /* all function written with the help of a function  (funny) i know but  i am tring to show how the function work  */
    /* 
    primeNumber
    fibenacciSequence
    factorial
    ncr
    pascalTriangle
    sunOfNumber
    pythagorianTriplet
    */
    int fac(int x)
    {
        try
        {
            if (x < 0)
            {
                throw "Error number must be positive";
            }
            if (x == 0)
            {
                return 1;
            }
            else
            {
                int factorial = 1;
                for (int i = x; i >= 1; i--)
                {
                    factorial = factorial * i;
                }
                return factorial;
            }
        }
        catch (const char *err)
        {
            cout << err;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        return -1;
    }
    int nCr(int n, int r)
    {
        int nfac = fac(n);
        int NminusR = fac(n - r);
        int rfac = fac(r);
        return nfac / (NminusR * rfac);
    }
    void fib(int numberOfTerm)
    {
        int fnum = 0;
        int snum = 1;
        int nextTerm = 0;
        for (int i = 1; i <= numberOfTerm; i++)
        {
            cout << fnum << endl;
            nextTerm = fnum + snum;
            fnum = snum;
            snum = nextTerm;
        }
    }
    int primeNumber(int num1, int num2)
    {
        bool prime = true;
        try
        {
            if (num1 > num2)
            {
                throw " error num2 must be greater then num1";
            }
            if (num1 < 0 || num2 << 0)
            {
                throw " erroe number must be positive ";
            }
            for (int i = num1; i <= num2; i++)
            {
                prime = true;
                if (i == 1)
                {
                    continue;
                }

                for (int j = 2; j < sqrt(i); j++)
                {

                    if (i % j == 0)
                    {
                        prime = false;
                        break;
                    }
                }
                if (prime == true)
                {
                    cout << i << endl;
                }
            }
        }
        catch (const char *err)
        {
            cout << err;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        return 0;
    }
    void fibenacciSequence(int x)
    {
        fib(x);
    }
    void factorial(int x)
    {
        cout << fac(x);
    }
    void ncr(int n, int r)
    {
        cout << nCr(n, r);
    }
    void pascalTriangle(int x)
    {
        try
        {
            if (x < 0)
            {
                throw "number must be positive";
            }
            else
            {
                for (int i = 0; i < x; i++)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << nCr(i, j) << " ";
                    }
                    cout << endl;
                }
            }
        }
        catch (const char *err)
        {
            cout << err;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    void sunOfNumber(int n)
    {
        cout<<(n*(n+1))/2;
    }
    void pythagorianTriplet(int x,int y,int z)
    {
        int maxNum  = max(x,max(y,z));
        if(maxNum==x)
        {
            if (x*x==(y*y+z*z))
            {
                cout<< true;
            }
            else
            {
                cout<<false;
            }
        }
        else if (maxNum==y)
        {
            if (y*y==(x*x+z*z))
            {
                cout<< true;
            }
            else
            {
                cout<<false;
            }
        }
        else
        {
            if (z*z==(x*x+y*y))
            {
                cout<< true;
            }
            else
            {
                cout<<false;
            }

        }
        
    }
}
namespace conversion
{
    /*
    binaryToDecimal
    octalToDecimal
    hexademialToDecimal
    decimalToBinary
    */
    void binaryToDecimal(int binarynumber)
    {
        int ans = 0;
        int base=1;
        while(binarynumber>0)
        {
            int power = binarynumber%10;
            ans += base*power;
            base *= 2;
            binarynumber = binarynumber/10;
        }
        cout<<ans;

    }
    void octalToDecimal(int octalnumber)
    {
        int ans = 0 ; 
        int base = 1;
        while(octalnumber>0)
        {
            int remender = octalnumber%10;
            ans +=base*remender;
            base*=8;
            octalnumber/=10;
        }
        cout<<ans;


    }
    void hexademialToDecimal(string hexanumber)
    {
        int ans =0;
        int base =1;
        int sizeOfHexaNumber=  hexanumber.size();
        for(int i = sizeOfHexaNumber-1; i>=0;i--)
        {
            if(hexanumber[i]>'0'&& hexanumber[i]<'9')
            {
                ans+=base*(hexanumber[i]-'0');
            }
            else if(hexanumber[i]>='A'&& hexanumber[i]<='F')
            {
                ans +=base*(hexanumber[i]-'A' + 10);
            }
            base*=16;
        }
        cout<<ans;


    }
    void decimalToBinary(int decimalnumber)
    {
        int ans=0;
        int power=1;
        while(decimalnumber>0)
        {
            int temp = decimalnumber%2;
            ans = ans + power*temp;
            power *=10;
            decimalnumber /= 2;
        }
        cout<<ans;
       
        
    }   
    int decimalToOctal(int octalnumber)
    {
        int ans =0;
        int power = 1;
        while (octalnumber>0)
        {
            int remender = octalnumber %8;
            ans += remender*power;
            power *=10;
            octalnumber /=8;
        }
        return ans;
        
    }
    
}
namespace binaryoperatation
{
    
  
    int binaryAddition(int a ,int b)
    {
        int carry =0;
        int ans = 0;
        while (a>0 && b>0)
        {
            if(a%2==0&&b%2==0)
            {
                ans = ans*10 + carry;
            }
            else if ((a%2==1&&b%2==0)&&(a%2==0&&b%2==1))
            {
               if (carry==1)
               {
                   ans = ans*10 +0;
                   carry = 1;
               }
               else
               {
                   ans = ans*10 +1;
                   carry = 0;
               }
            }
            else
            {
                ans = ans*10 +carry;
                carry=1;
            
            }
            a /=10;
            b /=10;            
        }
        while (a>0)
        {
            if(carry == 1)
            {
                ans = ans*10 +0;
                carry=1;
            }
            else{
                ans = ans*10 ;
            }
        }
        
        

        return ans;
    }
}
namespace searching
{
    int linearsearch(int arr[],int size,int find)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==find)
            {
                return i;
            }
        }
        return -1;
    }

    int binarySearch(int arr[],int n,int find)
    {
        int startPoint=0;
        int endPoint = n-1;
        while (endPoint>=startPoint)
        {
           
            int midpoint  = (startPoint + endPoint)/2;
           
            if (arr[midpoint]==find)
            {
                return midpoint;
            }
            else if (arr[midpoint]>find)
            {
                endPoint = midpoint -1;
            }
            else
            {
                startPoint = midpoint +1;
            }
            
        }
        return -1;
        
    }
}


