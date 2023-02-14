#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; 


        // FULL SQUARE


    // for (int row = 0; row < n; row += 1)
    // {
        
    //     for (int col = 0; col < n ; col += 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // HOLLOW SQUARE 
    // for (int row = 0; row < n; row += 1)
    // {
    //     if(row==0 || row==n-1){
    //     for (int col = 0; col < n ; col += 1){
    //         cout << "* ";
    //     }
    //     }
        
    //     else{
    //         cout<<"* ";
    //         for (int col=0;col<n-2;col+=1){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout << endl;
    // }

    // // HOLLOW inerted half pyramid
    // for (int row = 0; row < n; row += 1)
    // {
    //     if(row==0 || row==n-1){
    //     for (int col = 0; col < n-row ; col += 1){
    //         cout << "* ";
    //     }
    //     }
    //     else{
    //         cout<<"* ";
    //         for(int col = 0; col < n-row-2 ; col += 1){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;


    //  // HOLLOW half inverted Numeric pyramid
    // for (int row = 0; row < n; row += 1)
    // {
    //     int col;
    //     if(row==0 || row==n-1){
    //     for ( col = 0; col < n-row ; col += 1){
    //         cout << col+1 <<" ";
    //     }
    //     }
    //     else{ 

    //         cout<<"1 ";
    //         for(col = 0; col < n-row-2 ; col += 1){
    //             cout<<"  ";
    //         }
    //         cout<<n-row<<" ";
    //     }
    //     cout<<endl;
    // }



    //  // HOLLOW half inverted Numeric pyramid
    // for (int row = 0; row < n; row += 1)
    // {
    //     int col;
    //     if(row==0 ){
    //     for ( col = 0; col < n-row ; col += 1){
    //         cout << col+1 <<" ";
    //     }
    //     }
    //     else{ 

    //         cout<<row+1<<" ";
    //         for(col = 0; col < n-row-2 ; col += 1){
    //             cout<<"  ";
                
    //         }
    //         if(row!=n-1){
    //         cout<<n<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }



    //  // HOLLOW half  Numeric pyramid
    // for (int row = 0; row < n; row += 1)
    // {
    //     int col;
    //     if(row==0 || row==n-1){
    //     for ( col = 0; col < row+1; col += 1){
    //         cout << col+1 <<" ";
    //     }
    //     }
    //     else{ 

    //         cout<<"1 ";
    //         for(col = 0; col < row+1-2 ; col += 1){
    //             cout<<"  ";
    //         }
    //         cout<<row+1<<" ";
    //     }
    //     cout<<endl;
    // }

    //           // Pattern printing - hollow full pyramid

    // for (int row = 0; row < n; row += 1)
    // {
    //     // spaces
    //     for (int col = 0; col < n - row - 1; col += 1)
    //     {
    //         cout << " ";
    //     }
    //     // Star
    //     if(row==0 || row==n-1)
    //     {
    //     for (int col = 0; col < row+1; col += 1){
        
    //         cout << "* ";
    //     }
    //     }
    //     else{
    //         cout<<"* ";
    //          for (int col = 0; col < row-1; col += 1){
    //         cout<<"  ";
    //          }
    //          cout<<"* ";

    //     }
    //     cout << endl;
    // }
   

        
//               // Pattern printing - NUMERIC PALINDROME EQUILATERAL pyramid

//     for (int row = 0; row < n; row += 1)
//     {
//         // spaces
//         for (int col = 0; col < n - row - 1; col += 1)
//         {
//             cout << " ";
// }                                   
//         // NUMERIC PATTERN
//         for (int col = 0; col < row+1; col += 1){
        
//             cout <<col+1;
//         }
//     //    IF ROW NOT ZERO
//         if(row!=0){
//             // REVERSE NUMBER 
//         for (int col = row; col>=1; col -= 1){
        
//             cout <<col;
//         }
//         }
//         cout << endl;
//     }



    //           // Pattern printing - Fancy pattern 1

    // for (int row = 0; row < n; row += 1)
    // {
    //     // STARS
    //     for (int col = 0; col < n + 3 - row ; col += 1)
    //     {
    //         cout << "*";
    //     }                                   
    //     // NUMERIC PATTERN
    //     for (int col = 0; col < row+1; col += 1){
        
    //         cout <<row+1;
    //         if(row!=col){
    //             cout<<"*";
    //         }
    //     }

    //     // STARS
    //     for (int col = 0; col < n + 3 - row ; col += 1)
    //     {
    //         cout << "*";
    //     } 
    //     cout << endl;
    // }
        

  //SOLID HALF DIAMOND

    for (int row = 0; row < n; row += 1)
    {
        // HALD PYRAMID OF STAR
        for (int col = 0; col < row + 1; col += 1)
        {
            cout << "*";
        }  
         cout<<endl;
        //  if last row then 
         if(row==n-1){
          
            for (int row = 0; row < n; row += 1)
    {
        // HALD PYRAMID OF STAR
        for (int col = 0; col < n-row-1; col += 1)
        {
            cout << "*";
        } 
         
    
        cout<<endl;
         }
    }
    }
    


     
   
    
}