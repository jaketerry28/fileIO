//fileIO.cpp

#include <fstream>
#include <iostream>
#include <sstream>

int main(){
    
    //reading from a file
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream ss;

    std::string sNum1;
    std::string sNum2;
    std::string text;
    int num1;
    int num2;

    inFile.open("data.csv");
    while(getline(inFile, currentLine)){
        
        //clear the stringstream
        ss.clear();
        //pass this line into the stringstream
        ss.str(currentLine);
            
        getline(ss, sNum1, ',');
        getline(ss, sNum2, ',');
        getline(ss, text);

        ss.clear();
        ss.str("");
        ss << sNum1 << " " << sNum2;
        ss >> num1 >> num2;
        
        int sum = num1 + num2;

        for (int i = 0; i < sum; i++){
            std::cout << text << " ";
        } // end for    
        
        std::cout << std::endl;

    } // end while

    inFile.close();

    return(0);

} // end main

