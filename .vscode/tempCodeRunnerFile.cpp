
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