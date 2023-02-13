#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    //DIAMOND SHAPED PYRAMID CODE
    //full pyramid code

    for (int row = 0; row < n; row += 1)
    {
        // spaces
        for (int col = 0; col < n - row -1; col += 1)
        {
            cout << " ";
        }
        // Star
        for (int col = 0; col < row+1; col += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // inverted full pyramid code 
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


    //hollow SHAPED diamond pyramid code
    //hollow full pyramid

    for (int row = 0; row < n; row += 1)
    {
        // spaces
        for (int col = 0; col < n - row -1; col += 1)
        {
            cout << " ";
        }
        // Star
        //characterrr
        for (int col = 0; col < 2*row+1; col += 1)
        {
            //first or last character
        if(col==0||col==2*row){
            cout << "*";
        }
        //remaining character
        else{
            cout<<" ";
        }
        }
        cout << endl;
    }

    // inverted hollow pyramid code 
     for (int row = 0; row < n; row += 1)
    {
        // spaces
        for (int col = 0; col < row; col += 1)
        {
            cout << " ";
        }
        
        // stars
        for (int col = 0; col < 2*n-1-2*row; col += 1){
        if(col == 0 || col == 2*n - 2*row - 2)
        {
            cout << "*";
        }
        else{
            cout<<" ";
        }
        }
    
    
        cout<<endl;
    }

    // FLIPED SOLID DIAMOND code 

    // UPPER HALF 
     for (int row = 0; row < n; row += 1)
    {
        //HALF PYRAMID  star
        for (int col = 0; col < n- row; col += 1)
        {
            cout << "*";
        }
        //full PYRAMID space
        for (int col = 0; col < 2*row+1; col += 1)
        {
            cout << " ";
        }
        //HALF PYRAMID 
        for (int col = 0; col < n- row; col += 1)
        {
            cout << "*";
        }
        cout<<endl;
    }

    

    //LOWER HALF
     for (int row = 0; row < n; row += 1)
    {
        //HALF PYRAMID  star
        for (int col = 0; col<row+1; col += 1)
        {
            cout << "*";
        }
        //full PYRAMID space
        for (int col = 0; col < 2*n-2*row-1; col += 1)
        {
            cout << " ";
        }
        //HALF PYRAMID 
        for (int col = 0; col < row+1; col += 1)
        {
            cout << "*";
        }
        cout<<endl;
    }
        


    //     //fancy pattern-1

     
    //  for (int row = 0; row < n; row += 1)
    // {
       
    //     for (int col = 0; col<row+1; col += 1)
    //     {
    //         cout << row+1;
    //     }
    //     cout<<endl;
    // }


     //fancy pattern-2
     for (int row = 0; row < n; row += 1)
    {
       
        for (int col = 0; col<row+1; col += 1)
        {
            cout << row+1;
            if(col!=row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
     for (int row = 0; row < n; row += 1)
    {
       
        for (int col = 0; col<n-row; col += 1)
        {
            cout << n-row;
            if(col!=n-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for (int row = 0; row<n; row+=1){
        int col;
        for (col=0; col<row+1; col++){
            cout<<col+1;
        }

        // reverse counting printing 
        for(col=col-1; col>=1; col=col-1)
        {
            cout<<col;
        }
        cout<<endl;
    }


    for (int row = 0; row<n; row+=1){
        int col;
        for (col=0; col<row+1; col++){
            int ans=col;
            char ch= ans+ 'A';
            cout<<ch;
        }

        // reverse counting printing 
        for(col=row; col>=1; col=col-1)
        {
            int ans=col;
            char ch=ans+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
    


}