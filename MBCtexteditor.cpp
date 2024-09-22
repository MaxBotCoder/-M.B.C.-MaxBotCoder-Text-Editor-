#include <iostream>
#include <ncurses.h>
#include <curses.h>
#include <fstream>
#include <string>
#include <sstream>

int main(){

 std::cout << "\n" << "MBC TEXT EDITOR IS IN ALPHA STAGES EXPECT BUGS" << "\n" << "MBC Text Editor has only been tested on Debian/Debian based linux distros specificaly ubuntu 22.04 " << "compatibility with Windows,Mac,Unix,FreeBSD,Fedora,Arch,Gentoo,etc is unknown." << "\n" << "MBC Text Editor requires the following system package to be installed libncurses5-dev please install the package according to how your OS says you should." << "\n";

 std::string input;

 bool fileopen = false;

 while(input != "exit"){

       if(fileopen == false){

        if(fileopen == false){
        
        std::cout << "\n" << "Input commands here: ";
        
        std::cin >> input;   

       }

       } 

        if(input == "help") {
        std::cout << "\n" << "MBC TEXT EDITOR VERSION 0.3.5 alpha" << "\n";

        std::cout << "\n" << "help ~ Activates help menu" << "\n";
        std::cout << "\n" << "exit ~ Exits program" << "\n";
        std::cout << "\n" << "makefile ~ Makes a new file" << "\n";
        std::cout << "\n" << "about ~ Gives info about MBC text editor IE version,release date,author,application name" << "\n";
        std::cout << "\n" << "chlog ~ Whats new menu" << "\n";

        } //HELP END

        if(input == "chlog"){
        std::cout << "\n" << "Version 0.3.5 alpha" << "\n";
        std::cout << "\n" << "Added:" << "\n";
        std::cout << "\n" << "~Multi character text support." << "\n";
        std::cout << "\n" << "Removed:" << "\n";
        std::cout << "\n" << "~Old code." << "\n";
        std::cout << "\n" << "Altered:" << "\n";
        std::cout << "\n" << "~Multi character text support." << "\n";
     } //CHLOG END
 
         if(input == "about"){
        std::cout << "\n" << "Name: MBC Text Editor" << "\n";
        std::cout << "\n" << "Version: 0.3.5 alpha" << "\n";
        std::cout << "\n" << "Author: Max Bot Coder" << "\n";
        std::cout << "\n" << "Release date september 8th 2024" << "\n";

    } //ABOUT END
        if(input == "makefile"){

            int keycode;

            std::string YN;

            std::cout << "\n" << "Do you want to make a file y/n: ";

            std::cin >> YN;

            while(YN == "y" || YN == "Y"){

            std::string filename;
            std::string textstorage;
            
            if(fileopen == false){ 

            std::cout << "\n" << "Please enter file name: ";

            }
            
            std::cin >> filename;

            if(fileopen == false){
            
            std::cout << "\n" << "Notification: To save and exit press ctrl & S simultaniously or to exit without saving press ctrl & D simultaniously." << "\n";

            }

            std::ofstream myfile(filename + ".txt");
            int keycode;
            initscr();
            keycode = getch();
            
            if(myfile.is_open()){
                fileopen = true;
               
            }

            
            std::cin >> textstorage;
                    
            if(keycode == 19){
            
            myfile << textstorage;
            myfile.close();
            std::cout << "Saving...";

            }

            }
            
            if(YN == "n" || YN == "N"){
            std::cout << "\n" << "Exiting..." << "\n";
            }

    } //MAKEFILE END

    } //WHILE END

     if(input != "exit"){
        exit(false);
    } else if (input == "exit"){
        exit(true);
    } //EXIT END

    } //END
