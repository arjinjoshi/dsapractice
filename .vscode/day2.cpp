#include <iostream>
using namespace std;
int main()
{
//     // // declare integer type variable
//     // int score;
//     // // print enter the score
//     // cout << "enter the score" << endl;
//     // // take input to score table
//     // cin >> score;

//     // // if condition
//     // if (score < 300)
//     // {
//     //     cout << "Nepal Wins" << endl;
//     // }
//     // cout << "India Wins" << endl;
//     // if else condition
//     // if (score < 300)
//     // {
//     //     cout << "Nepal Wins" << endl;
//     // }
//     // else
//     // {
//     //     cout << "India Wins" << endl;
//     // }

//     // nested if else
//     int marks;
//     cout << "enter marks:" << endl;
//     cin >> marks;
//     if (marks >= 90)
//     {
//         cout << "A grade" << endl;
//     }
//     else
//     {
//         if (marks >= 80)
//         {
//             cout << "B grade" << endl;
//         }
//         else
//         {
//             if (marks >= 60)
//             {
//                 cout << "c grade" << endl;
//             }
//             else
//             {
//                 if (marks >= 40)
//                 {
//                     cout << "D grade" << endl;
//                 }
//                 else
//                 {
//                     cout << "A grade" << endl;
//                 }
//             }
//         }
//     }

//     // if else if else

//     cout << "enter marks:" << endl;
//     cin >> marks;
//     if (marks >= 90)
//     {
//         cout << "A grade" << endl;
//     }
//     else if (marks >= 80)
//     {
//         cout << "B grade" << endl;
//     }
//     else if (marks >= 60)
//     {
//         cout << "c grade" << endl;
//     }
//     else if (marks >= 40)
//     {
//         cout << "d grade" << endl;
//     }
//     else
//     {
//         cout << "f grade" << endl;
//     }

//     int bronum;
//     cin >> bronum;
//     if (bronum == 0)
//     {
//         cout << "Baat banjayegi" << endl;
//     }
//     else
//     {
//         cout << "Baat nahi banegi" << endl;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Arjin Joshi" << endl;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << i << endl;
//     }
//     cout << endl;

//     for (int i = 5; i > 0; i--)
//     {
//         cout << i << endl;
//     }
//     cout << endl
//          << endl;

//     for (int i = 1; i <= 10; i++)
//     {
//         cout << 2 * i << endl;
//     }
//     cout << endl
//          << endl;

//     // to print odd number between 1 t0 10
//     for (int i = 1; i <= 10; i = i + 2)
//     {
//         cout << i << endl;
//     }

//     // to print even number between 1 t0 10
//     for (int i = 0; i <= 10; i = i + 2)
//     {
//         cout << i << endl;
//     }

//     // to find the given number is prime or not
//     int n;
//     cin >> n;
//     bool isPrime = true;
//     for (int i = 2; i < n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime)
//     {
//         cout << "Prime" << endl;
//     }
//     else
//     {
//         cout << "Not Prime" << endl;
//     }

//     for (int i = 5; (i >= 5 && i <= 10); i = i + 1)
//     {
//         cout << i << endl;
//     }

//     if (cin >> n)
//     {
//         cout << "arjin" << endl;
//     }

//     if (cout << "joshi" << endl)
//     {
//         cout << "arjin" << endl;
//     }

//     // Pattern printing - Solid Rectangle

//     // outr loop - row observe
//     for (int row = 0; row < 3; row += 1)
//     {
//         // outr loop - col observe
//         for (int col = 0; col < 5; col += 1)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Pattern printing - Solid square

//     // outr loop - row observe

//     for (int row = 0; row < n; row += 1)
//     {
//         // outr loop - col observe
//         for (int col = 0; col < n; col += 1)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // Pattern printing - hollow rectangle

// // outr loop - row observe

// for(int row = 0; row < 3; row += 1)
// {
//     // first and last row -> PRINT 5*
//     if (row == 0 || row == 2)
//     {
//         for (int col = 0; col < 5; col += 1)
//         {

//             cout << "* ";
//         }
//     }
//     else
//     {
//         // remaining middle rows
//         // first star
//         cout << "* ";
//         // spaces
//         for (int i = 0; i < 3; i += 1)
//         {
//             cout << "  ";
//         }
//         // last star
//         cout << "* ";
//     }
//     cout << endl;

//     // Pattern printing - hollow rectangle in generic way

//     // outr loop - row observe
//     int rowCount, colCount;
//     cin >> rowCount;
//     cin >> colCount;

//     for (int row = 0; row < rowCount; row += 1)
//     {
//         // first and last row -> PRINT 5*
//         if (row == 0 || row == rowCount - 1)
//         {
//             for (int col = 0; col < colCount; col += 1)
//             {

//                 cout << "* ";
//             }
//         }
//         else
//         {
//             // remaining middle rows
//             // first star
//             cout << "* ";
//             // spaces
//             for (int i = 0; i < colCount - 2; i += 1)
//             {
//                 cout << "  ";
//             }
//             // last star
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     // Pattern printing - Half pyramid

//     // outr loop - row observe

//     for (int row = 0; row < n; row += 1)
//     {
//         // outr loop - col observe
//         for (int col = 0; col < row + 1; col += 1)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     // Pattern printing -Inverted Half pyramid

//     for (int row = 0; row < n; row += 1)
//     {
//         // outr loop - col observe
//         for (int col = 0; col < n - row; col += 1)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     //       // Pattern printing -NUmber Half pyramid

//     for (int row = 0; row < n; row += 1)
//     {
//         // outr loop - col observe
//         for (int col = 0; col < row + 1; col += 1)
//         {
//             cout << col + 1;
//         }
//         cout << endl;
//     }


//     //       // Pattern printing -NUmber Inverted Half pyramid

//     for (int row = 0; row < n; row += 1)
//     {
//         // outr loop - col observe
//         for (int col = 0; col < n - row; col += 1)
//         {
//             cout << col + 1;
//         }
//         cout << endl;
//     }

//     //       // Pattern printing -full pyramid

//     for (int row = 0; row < n; row += 1)
//     {
//         // spaces
//         for (int col = 0; col < n - row - 1; col += 1)
//         {
//             cout << " ";
//         }
//         // Star
//         for (int col = 0; col < row+1; col += 1)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

    //       // Pattern printing -Inverted full pyramid
 int n;
 cin>>n;
    for (int row = 0; row < n; row += 1)
    {
        // spaces
        for (int col = 0; col < row; col += 1)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < n - row; col += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}