// ---------------------------------------------------------------
// Programming Assignment:	Course Project
// Developer:			Leah Rieger
// Date Written:		08/29/2019
// Purpose:			Programming Tutorial Program 
// ---------------------------------------------------------------

#include <iostream>
#include <string>
#include <cstdlib>
#include "Project.h"


using namespace std;


int main() {
	system("color 30");		//This changes the background color & the font color.

	//R means it is printing out literals. This is so the compiler does not get hung up on special characters.
	std::cout << R"(	

      ,-._.-._.-._.-._.-.       ,-------------------------------------.
      `-.             ,-'      |  Hi, My name is Alan!                 |
        |             |        |                                       |
        |             |        |             Welcome to your           |
        |             |        |             Programming Tutorial!     |
        |    .. ,.    |        | Follow me & we will begin!            |
      ,-|___|  |  |___|-.      |                                       |
      | |   L__;__J   | |     ,'                                       |
      `|      / \      |'    / _.-------------------------------------'
       |     (   )     |    ;-'
       |      `''      |
       |               |
       |               |
       ;--..._____...--;            ==================================.
      ,'--.._/   \_..--`.                       ,                     |\
     /       `. ,'       \                     /|                     | \
    /    /`.  | |    _l_  \                   / |                     |  \
   /_/   \  \_J |  |"   |\_\ ________________/  |                     |   \
   //     `-.__.'  |    | \\                 |  |                     |   [==]
  ||           |   `---'   ||           _____|_____________________________||
  ||           |           ||          |                                   ||
 ||            |            ||         |   _____________                   ||
 ||            |            ||         |  (             )                  ||
 ||            |            ||         |   `"""""""""""'                   ||
;' |           |           | `;        |                                   ||
 `' \          |          / `'         |                                   ||
     `--..____/ \____..--'             |                                   ||
       |       |       |               |                                   ||
       |       |       |               |                                   ||
       |       |       |               |                                   ||
       |       |       |               |                                   ||
       |       |       |               |                                   ||
       |       |       |     __________|                                   ||
       |       |       |               |                                   ||
       |       |       |               |___________________________________||
       |       |       |
       |       |       |
       |_______|_______|
 _..--'      |   |      `--.._
;________.___|   |___.________;

------------------------------------------------ 

)" << '\n';


	MyClass program;
	program.mainMenu();

	
	return 0;
	system("pause");
}
/*
Thank you for visiting https://asciiart.website/
This ASCII pic can be found at
https://asciiart.website/index.php?art=comics/dilbert


Citing where my ASCII Art came from.

*/