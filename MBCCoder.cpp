#include <iostream>
#include <string>
#include <fstream>
#include <ncurses.h>

int main(){

 /*I means input you can change its variable name
 however then you must update the input variable names
 of all the code that relys on said variable*/

 std::cout << "DISCLAIMER THE FOLLOWING CODE HAS ONLY BEEN TESTED FOR COMPATIBILITY" << "\n" << "ON DEBIAN/DEBIAN BASED LINUX DISTROS IE UBUNTU LINUX-MINT POP!OS ETC COMPATIBILITY ON ARCH,FEDORA,GENTOO,WINDOWS,MAC,ETC IS UNKNOWN" << "\n" << "THE PROGRAM IS STILL WITHIN PRE-ALPHA TESTING STAGES SO ANY FEEDBACK WOULD BE APPRECIATED" << "\n";

 std::cout << "\n" << "REQUIREMENT: If you are on LINUX please install the libncurses5-dev package" << "\n" << "please install the package according to how your distro says you should!" << "\n" << "On Ubuntu the method is sudo apt install libncurses5-dev"; 

 std::string TSN = ""; //Text storage name!

 std::string TI = ""; //Text input!

 std::string I = ""; //Input for commands!

 bool TEE = false; //Text editor exit!
 
 bool AppExit = false;

 while(AppExit !=true){

     std::cout << "\n" << "\n" << "Input Here: ";

     std::cin >> I;
       

      if(I == "--version" || I == "-v" || I == "--about" || I == "-a"){
           
           std::cout << "\n" << "Version: PRE-ALPHA ~0.2~"  << "\n";
           std::cout << "\n" << "Author: MaxBotCoder/MaxBot"  << "\n";
           std::cout << "\n" << "App Name: MBC Terminal Text Editor" << "\n";

            

      }
      
      if(I == "--help" || I == "-h"){
          std::cout << "\n" << "Here is a list of all of the available commands!" << "\n";

          std::cout << "\n" << "To see version/about: --version -v --about -a" << "\n";

          std::cout << "\n" << "To see stop/exit the program: --stop -s --exit -e" <<"\n";

          std::cout << "\n" << "To make a file: --makefile -mkf" << "\n";

          std::cout << "\n" << "To get help: --help -h" << "\n";

          std::cin >> I;
          
          
      }

      

      if(I == "--stop" || I == "--exit" || I == "-s" || I == "-e"){

      AppExit = true;

      exit(true);

 }

     while (TEE == false) {
     
     if(I == "--makefile" || I == "-mkf") {
          
        
          


  } 

}


}


}
