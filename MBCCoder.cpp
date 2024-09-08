#include <iostream>
#include <ncurses.h>
#include <curses.h>
#include <fstream>
#include <string>
#include <sstream>

int main(){

    std::cout << "\n" << "MBC TEXT EDITOR IS IN ALPHA STAGES EXPECT BUGS" << "\n" << "MBC Text Editor has only been tested on Debian/Debian based linux distros specificaly ubuntu 22.04 " << "compatibility with Windows,Mac,Unix,FreeBSD,Fedora,Arch,Gentoo,etc is unknown." << "\n" << "MBC Text Editor requires the following system package to be installed libncurses5-dev please install the package according to how your OS says you should." << "\n";

    std::string input;

    bool cwk = true;

    while(input != "exit"){

        std::cout << "\n" << "Input commands here: ";
        
        std::cin >> input;

     if(input == "help") {
        std::cout << "\n" << "MBC TEXT EDITOR VERSION 0.3 alpha" << "\n";

        std::cout << "\n" << "help ~ Activates help menu" << "\n";
        std::cout << "\n" << "exit ~ Exits program" << "\n";
        std::cout << "\n" << "makefile ~ Makes a new file" << "\n";
        std::cout << "\n" << "about ~ Gives info about MBC text editor IE version,release date,author,application name" << "\n";
        std::cout << "\n" << "chlog ~ Whats new menu" << "\n";

        }

        if(input == "chlog"){
        std::cout << "\n" << "Version 0.3 alpha" << "\n";
        std::cout << "\n" << "Added:" << "\n";
        std::cout << "\n" << "~Testing text input functionality" << "\n";
        std::cout << "\n" << "Removed:" << "\n";
        std::cout << "\n" << "~None" << "\n";
        std::cout << "\n" << "Altered:" << "\n";
        std::cout << "\n" << "~Updated internal code" << "\n";
    

     }

     if(input == "about"){
        std::cout << "\n" << "Name: MBC Text Editor" << "\n";
        std::cout << "\n" << "Version: 0.3 alpha" << "\n";
        std::cout << "\n" << "Author: Max Bot Coder" << "\n";
        std::cout << "\n" << "Release date september 8th 2024" << "\n";
    }
        
    if(input == "makefile"){
        
        int keycode;
        std::string linp;
        std::cout << "\n" << "Are you sure you want to make a file? Y/N: ";
        std::cin >> linp;

        if(linp == "y" || linp == "Y"){

        std::string filename;
        std::string textstorage;
        std::cout << "\n" << "Please enter file name: ";
        std::cin >> filename;
        std::ofstream outfile(filename + ".txt");
        std::cout << "[To save and exit press ctrl & a simultaniously] [To exit without saving press ctrl & b simultaniously]";

        initscr();
        keycode = getch();            
        
        while((keycode = getch())){
            if(keycode >= 32 || keycode <= 126){
                printw("%c", keycode);
                std::cin >> textstorage; 
                std::ofstream outfile(filename + ".txt", std::ios::app);
                    if(keycode == 1){
                        std::cout << "Exiting while saving...";
                        outfile << textstorage;
                        outfile.close();
                        std::cout << "\n" << "Input commands here: ";
                        std::cin >> input;
                } else if (keycode == 2){
                    std::cout << "Exiting without saving...";
                    outfile.close();
                    std::cout << "\n" << "Input commands here: ";
                    std::cin >> input;
                    
                }
            }        
        }

        } else if (linp == "n" || linp == "N") {
            std::cout << "\n" << "Exiting..." << "\n";
        }

    }

    }
        
    if(input != "exit"){
        exit(false);
    } else if (input == "exit"){
        exit(true);
    }
}




}
