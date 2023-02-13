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
        