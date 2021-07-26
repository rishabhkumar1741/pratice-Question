#include <iostream>
using namespace std;
namespace Ris
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
    //  learing about continue and break statment
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

}

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
        short int x ;
        cin>>x;
        for(int i =x ;i>0;i--)
        {
            for(int j=i ; j>0 ;j--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
    void halfPyramidAfter180Rotation()
    {
        cout<<"program is start"<< endl;
        short int x ;
        cin>>x ;
        
        for(int i=x;i>=1;i--)
        {
          
            for(int j =1;j<=x;j++)
            {
                if(i==j || j>=i)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }

        
    }
    void halfPyramidUsingNumber()
    {
        short int x ;
        cin >>x;
        
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<< i;
            }
            
            cout<<endl;
        }

    }
    void floydsTiangle()
    {
        short int  x ; 
        cin>>x;
        short int floydTriangle= 1;
        
        for(int i=1;i<=x;i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<floydTriangle<<" ";
                floydTriangle++;
            }
            cout<<endl;
            
        }


    }
    void butterFly()
    {
        short int x;
        cin>>x;
        
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=x*2;j++)
            {
                if (j<=i||(x*2 -j <i))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        for(int i=x;i>=1;i--)
        {
            for(int j=1;j<=x*2;j++)
            {
                if (j<=i||(x*2 -j <i))
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    
    }
    


}
