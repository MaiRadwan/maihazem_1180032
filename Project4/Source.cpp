#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{

    // game loop
    while (1)
    {
        for (int i = 0; i < 8; i++)
        {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
        }    
        

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        
    
         cout<<"0"<<endl;
         cout<<"1"<<endl;
         cout<<"2"<<endl;
         cout<<"3"<<endl;
         cout<<"4"<<endl;
         cout<<"5"<<endl;
         cout<<"6"<<endl;
         cout<<"7"<<endl;
         cerr <<"Descending mountains"<<endl;
   
          cout<<"0"<<endl;
         cout<<"1"<<endl;
         cout<<"2"<<endl;
         cout<<"5"<<endl;
         cout<<"4"<<endl;
         cout<<"3"<<endl;
         cout<<"6"<<endl;
         cout<<"7"<<endl;
          cerr <<"Scattered mountains"<<endl;
          
          
          
      cerr<<"Strong mountains 1"<<endl;
      
      
      
    }
    
}