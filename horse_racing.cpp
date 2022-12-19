#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include <windows.h>
using namespace std;
int main (){
  system("cls");
    srand(time(0));
  const int size=60;
  int position[9];
  int finish_horse = 0;
  int finish_numer = 0;
  int Place[9];
  bool right_num = false;
  int your_horse_place;
  for (int i = 0; i < 9; i++)
  position[i] = 0;
  int guess;
  int horse[9];
  cout << "Guess number of horse that you think wil win (between 1 & 9) :";
            while(!right_num)
            {
            cin >> guess;
            if(guess > 0 && guess < 10)
            {
                cout << "\nNumber should be between 1 to 9\n";
                right_num = true;
            }
            else  cout<<"Re-enter number:\n ";
            }
   while (finish_horse < 9) {
    for (int j = 0; j < 9; j++)
    {
    cout << "|START|" ;
    for (int i=0; i<size;i++) {
      if (i == position[j]) 
        cout << j+1;
      else cout << " ";}
    cout << "|FINISH|" << endl;
    int move = rand()%2;
    position[j] = position[j] + move; 
    if (position[j] == size - 1)
    {
    position[j] = size+1;
    Place[finish_numer] = j+1;
    finish_numer++;
    finish_horse++;
    }
    }
  Sleep(50);
  system("cls");
  }   
  for (int i = 0; i < 9; i++)
  {
    cout<<i+1<<" place - hourse number "<<Place[i]<<endl;;
    cout<< endl;
    if (Place[i] == guess)
    your_horse_place = i + 1;
  }
  cout<<endl;
  cout<< "Your hourse finish on "<<your_horse_place<<" place!";
}