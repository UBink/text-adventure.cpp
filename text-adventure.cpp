#include <iostream>
#include <stdlib.h>
int main() {
//intro
  std::cout << "Unknown man: HAHAHAH!!\n" << "Welcome my new prisoner! " << "I will be back soon.\n" << "*Man Leaves*\n\n";
  std::cout << "*After man leaves, you realize you are in a small cell that has a dirty mattress, a small window, and a tiny little sink* \n\n" << "*As soon as you realize you are in a prison cell, you are determined to escape..." << "But it won't be that easy...\n\n\n";
//rest or no
  std::cout << "First and foremost, you feel very tired. What are you going to do?\n" << "1) Rest\n" << "2) Don't rest and look around\n" << ">";

  //setup
  int players_choice =0;
  char cont = 'y';
  std::cin >> players_choice;


  while (players_choice ==1 && players_choice != 2) {

  if (players_choice ==1) {
  std::cout << "You have rested and now you have a lot more energy but you also lost some time sleeping.\n\n" << "Press button to continue\n" << " >\n";
  std::cin >> cont; 
  std::cout << "\n";

//where to look
  std::cout << "*Now that you are well rested, you start looking around*\n\n" << "Where will you look?\n" << "1) Under the mattress\n" << "2) Look at the window...?\n" << "3) Look around the sink\n" << " >\n";
  std::cin >> players_choice;

  std::cout << "Press a button to continue\n" << " >\n";
  std::cin >> cont;
//bed choice
  while (players_choice == 1 && players_choice != 2 && players_choice != 3) {

 //bed ending
  std::cout << "*You got lucky and found a paper clip.\n\n" << "After a lot of effort and trying for a while, you managed to escape!\n\n\n";

  //game over
  std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

  return players_choice == 0;
 }
//window or sink
  while (players_choice != 1 && players_choice == 2 || players_choice == 3) {

 //window ending
  if (players_choice == 2) {

  std::cout << "*You look at the window and see that it is blocked with really rusty bars.*\n\n" << "*While you are inspecting the bars, you realize there is something odd going on with one of them.\n\n";

  std::cout << "Press a button to continue\n" << " >\n";
  std::cin >> cont;

  std::cout << "*On the side of one of the bars, you see a filer*\n\n" << "You use the metal file to cut through the bars and manage to make your escape!\n\n";

  //game over
  std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

  return players_choice == 0;
  }
 //sink
  else if (players_choice == 3) {

  //check the window?
   std::cout << "*While you are looking around the sink, you find a metal file*\n\n" << "Take the metal file and check the window?\n\n" << "1) Yes\n" << "2) No\n";
   std::cin >> players_choice;

   std::cout << "Press a button to continue\n" << " >\n";
   std::cin >> cont;

  //sink ending
     if (players_choice == 1) {
    std::cout << "*You look at the window and see that it is blocked with really rusty bars.*\n\n";

   std::cout << "Press a button to continue\n" << " >\n";
   std::cin >> cont;

   std::cout <<"You use the metal file to cut through the bars and manage to make your escape!\n\n";

   //game over
   std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

   return players_choice == 0;
   }
   // dont check the window
    else if (players_choice == 2) {
    std::cout << "You found a metal file. However, you did not find an opprtunity to use it in time before the unknown man comes back.\n\n";

    //game over
    std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

    return players_choice == 0;
    }
  }

 } 
 } 
 }
//dont rest
    while (players_choice == 2 && players_choice !=1) {
    std::cout << "**You decided not to rest and started to look...*" << "Where will you look?\n" << "1) Under the mattress\n" << "2) Look at the window...?\n" << "3) Look around the sink\n" << " >\n";
   std::cin >> players_choice;

   std::cout << "Press a button to continue\n" << " >\n";
   std::cin >> cont;
 //no rest mattress
  if (players_choice == 1) {
  std::cout << "*While you are looking around the mattress, you feel your eyes closing and your head getting heavy*\n\n" << "When you wake up, the man is back and you missed your window to escape!\n\n";
  //game over
   std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

   return players_choice == 0;
  }
 //no rest window
   else if (players_choice == 2) {
    std::cout << "*You look at the window and see that it is blocked with really rusty bars.*\n\n" << "*While you are inspecting the bars, you realize there is something odd going on with one of them.\n\n";

  std::cout << "Press a button to continue\n" << " >\n";
  std::cin >> cont;

  std::cout << "*On the side of one of the bars, you see a filer*\n\n" << "*However, you are too tired to file the bars...*\n" << "*You feel your eyes closing and your head getting heavy*\n\n" << "When you wake up, the man is back and you missed your window to escape!\n\n";
  //game over
   std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

   return players_choice == 0;
  }
 
//no rest sink
  else if (players_choice == 3){
  std::cout << "*While you are looking around the sink, you find a metal file*\n\n" << "Take the metal file and check the window?\n\n" << "1) Yes\n" << "2) No\n";
  std::cin >> players_choice;

  std::cout << "Press a button to continue\n" << " >\n";
  std::cin >> cont;

  //sink ending (check the window)
     if (players_choice == 1) {
    std::cout << "*You look at the window and see that it is blocked with really rusty bars.*\n\n";

   std::cout << "Press a button to continue\n" << " >\n";
   std::cin >> cont;
   std::cout << "*On the side of one of the bars, you see a filer*\n\n" << "*However, you are too tired to file the bars...*\n" << "*You feel your eyes closing and your head getting heavy*\n\n" << "When you wake up, the man is back and you missed your window to escape!\n\n";
   //game over
   std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

   return players_choice == 0;
   }
 // dont check the window
    else if (players_choice == 2) {
    std::cout << "You found a metal file. However, you did not find an opportunity to use it in time before the unknown man comes back.\n\n";

    //game over
    std::cout << "==========\n\n" << "   GAME OVER.   \n\n" << "==========\n\n";

    return players_choice == 0;
    }
  } 
 }
}