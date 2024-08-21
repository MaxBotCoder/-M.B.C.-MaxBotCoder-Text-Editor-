#include <iostream>
#include <string>
#include <fstream>
#include <X11/XF86keysym.h>
#include <X11/Xlib.h>

int main(){

 /*I means input you can change its variable name
 however then you must update the input variable names
 of all the code that relys on said variable*/

 std::cout << "DISCLAIMER THE FOLLOWING CODE HAS ONLY BEEN TESTED FOR COMPATIBILITY" << "\n" << "ON DEBIAN/DEBIAN BASED LINUX DISTROS COMPATIBILITY ON ARCH,FEDORA,GENTU,WINDOWS,MAC,ETC IS UNKNOWN" << "\n" << "THE PROGRAM IS STILL WITHIN PRE-ALPHA TESTING STAGES SO ANY FEEDBACK WOULD BE APPRECIATED" << "\n"; 

 std::string TS = ""; //Text Storage!

 std::string TI = ""; //Text input!

 std::string I = ""; //Input for commands!

 while(I != "--stop" || I != "-s" || I != "e" || I != "--exit"){

     std::cout << "\n" <<  "Input Here: ";

     std::cin >> I;
       

      if(I == "--version" || I == "-v" || I == "--about" || I == "-a"){
           
           std::cout << "\n" << "Version: PRE-ALPHA ~0.1~"  << "\n";
           std::cout << "\n" << "Author: MaxBotCoder/MaxBot"  << "\n";
           std::cout << "\n" << "App Name: MBC Terminal Text Editor" << "\n";

      }
      
      if(I == "--help" || I == "-h"){
          std::cout << "\n" << "Here is a list of all of the available commands!" << "\n";

          std::cout << "\n" << "To see version/about: --version -v --about -a" << "\n";

          std::cout << "\n" << "To see stop/exit the program: --stop -s --exit -e" <<"\n";

          std::cout << "\n" << "To make a file: --makefile -mkf" << "\n";

          std::cout << "\n" << "To get help: --help -h" << "\n";

      }

      if(I == "--stop" || I == "--exit" || I == "-s" || I == "-e"){

      exit(true);

 }

     if(I == "--makefile" || I == "-mkf") {
          
         while(KeyPress != 112 || KeyPress != 113){
          
          std::ofstream myfile;

          std::cout << "\n" << "Type in file file name of your file [To exit without saving press f1] or [To exit and save press f2]" << "\n";

          std::cin >> TS;

          std::cout << "\n" << "Input your text you want to have saved" << "\n";

          std::cin >> TI;

         
         } 
if(KeyPress == 112) {
  
  
  std::fstream outFile(TS);

  break;


}

if(KeyPress == 113) {
    
    break;

}

}


}
}
