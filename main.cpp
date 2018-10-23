#include <iostream>
using namespace std;
#include <ctime>
#include <string>
#include <sstream>
#include "Common.h"
#include "Validator.h"
#include "Book.h"
#include "Book_Manager.h"
#include "Subscriber.h"
#include "Subscriber_Manager.h"
#include "Transactor.h"
#include "Transactor_Manager.h"
#include "Menu_Controller.h"

// This is the launching program for library application project
//*****SOME PARTS HAVE BEEN CODED UNDER EXPERT GUIDANCE*****
// As you can see that lots of user defined header files are included above
// You need to open each of the header files to understand the whole application
// Each header file contain seperate classes for different reasons
// Only exception is the common.h, which contains the commonly used functions used through out the program.


int main()
{
   // The main function to launch the main menu of the Library Management Application
   cout<< "Date : "<< getTodayDay()<<"-"<<getTodayMonth()<<"-"<<getTodayYear()<<endl;
   cout<<"***********************************************************"<<endl;
   cout<<"***      Welcome to the Library Management Project      ***"<<endl;
   cout<<"***********************************************************"<<endl;
   MenuControl mc;
   mc.showMain();
   return 0;
}
