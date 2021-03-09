#include <iostream>
#include <string>
#include "snowman.hpp"
#include <bits/stdc++.h>
using namespace std;
const int ten = 10, hundred = 100, thousand = 1000, tenThousand = 10000, hundredThousand = 100000, million = 1000000, tenMillion = 10000000;

namespace ariel{

    // bool isDigitContains(long number){
    //     while(number > 0){
    //         if(number%ten > 4 || number%ten < 1) {return false;}
    //           number = number/ten;  
    //     }
    //     return true;    
    // }

    //  int countDigit(long n)
    // {
    //     int count = 0;
    //     while (n != 0) 
    //     {
    //         n = n / ten;
    //         ++count;
    //     }
    //     return count;
    // }

    string snowman(long number){
        // const int digit = 8;
        // if(countDigit(number) == digit && isDigitContains(number)){
        //         string str;
        //         while(number != 0){
        //             switch (number/tenMillion%ten) //Hat
        //             {
        //                 case 1:
        //                     str.append("\n _===_\n"); 
        //                     break;
        
        //                 case 2:
        //                     str.append("\n  ___\n");
        //                     str.append(" .....\n");
        //                     break;
        
        //                 case 3:
        //                     str.append("\n   -\n");
        //                     str.append("  /_\\\n");
        //                     break;
        
        //                 case 4:
        //                     str.append("\n  ___\n");
        //                     str.append(" (_*_)\n");
        //                     break;
        //             }

        //             switch (number/thousand%ten) //Right arm
        //             {
        //                 case 2:
        //                     str.append("\\");
        //                     break;
                    
        //                 // default:
        //                 //     str.append(" ");
        //                 //     break;
        //             }

        //             switch (number/hundredThousand%ten) //Right eye
        //             {
        //                 case 1:
        //                     if(number/thousand%ten != 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("(.");
        //                     break;
        
        //                 case 2:
        //                     if(number/thousand%ten != 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("(o");
        //                     break;
        
        //                 case 3:
        //                     if(number/thousand%ten != 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("(O");
        //                     break;

        //                 case 4:
        //                     if(number/thousand%ten != 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("(-");
        //                     break;
        //             }

        //             switch (number/million%ten) //Nose
        //             {
        //                 case 1:
        //                     str.append(",");
        //                     break;
        
        //                 case 2:
        //                     str.append(".");
        //                     break;
        
        //                 case 3:
        //                     str.append("_");
        //                     break;
        
        //                 case 4:
        //                     str.append(" ");
        //                     break;
        //             }

        //             switch (number/tenThousand%ten) //Left eye
        //             {
        //                 case 1:
        //                     str.append(".)");
        //                     if(number/hundred%ten != 2){
        //                         str.append("\n");
        //                     }
        //                     break;
        
        //                 case 2:
        //                     str.append("o)");
        //                     if(number/hundred%ten != 2){
        //                         str.append("\n");
        //                     }
        //                     break;

        //                 case 3:
        //                     str.append("O)");
        //                     if(number/hundred%ten != 2){
        //                         str.append("\n");
        //                     }
        //                     break;

        //                 case 4:
        //                     str.append("-)");
        //                     if(number/hundred%ten != 2){
        //                         str.append("\n");
        //                     }
        //                     break;
        //             }

        //             switch (number/hundred%ten) //Left arm
        //             {        
        //                 case 2:
        //                     str.append("/\n");
        //                     break;
        //                 // default:
        //                 //     str.append("\n");
        //                 //     break;
        //             }

        //             switch (number/thousand%ten) //Right arm
        //             {
        //                 case 1:
        //                     str.append("<");
        //                     break;
        
        //                 case 3:
        //                     str.append("/");
        //                     break;
        
        //                 case 4:
        //                     str.append(" ");
        //                     break;
                    
        //                 // default:
        //                 //     str.append(" ");
        //                 //     break;
        //             }

        //             switch (number/ten%ten) //Torso
        //             {
        //                 case 1:
        //                     if(number/thousand%ten == 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("( : )");
        //                     if(number/hundred%ten == 2){
        //                         str.append("\n");
        //                     }
        //                     break;
        
        //                 case 2:
        //                     if(number/thousand%ten == 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("(] [)");
        //                     if(number/hundred%ten == 2){
        //                         str.append("\n");
        //                     }
        //                     break;
        
        //                 case 3:
        //                     if(number/thousand%ten == 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("(> <)");
        //                     if(number/hundred%ten == 2){
        //                         str.append("\n");
        //                     }
        //                     break;

        //                 case 4:
        //                     if(number/thousand%ten == 2){
        //                         str.append(" ");
        //                     }
        //                     str.append("(   )");
        //                     if(number/hundred%ten == 2){
        //                         str.append("\n");
        //                     }
        //                     break;
        //             }

        //             switch (number/hundred%ten) //Left arm
        //             {
        //                 case 1:
        //                     str.append(">\n");
        //                     break;
        
        //                 case 3:
        //                     str.append("\\\n");
        //                     break;
        
        //                 case 4:
        //                     str.append("\n");
        //                     break;
                    
        //                 // default:
        //                 //     str.append("\n");
        //                 //     break;
        //             }

        //             switch (number%ten) //Base
        //             {
        //                 case 1:
        //                     str.append(" ( : )");
        //                     break;
        
        //                 case 2:
        //                     str.append(" (\" \")") ;
        //                     break;

        //                 case 3:
        //                     str.append(" (___)");
        //                     break;

        //                 case 4:
        //                     str.append(" (   )");
        //                     break;
        //                 }
        //                 return str;
        //             }
        //     }
        // throw std::exception();    
        return "snowman";
    }
}; 