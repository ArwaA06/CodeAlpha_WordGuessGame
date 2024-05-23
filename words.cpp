#include "words.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


class Words{
   private:

	  int index;

   public:
	   //constructor
	   Words() {
		   //for random
		   srand(static_cast<unsigned int>(time(0)));

	   }
	
    string WordsList() const{

		vector<string> wordChoice =
		   { "Sky" , "Rose" , "Petal" , "Sorrow"
		    ,"Rain" , "Cry" , "Enjoy", "Hell"
		    ,"Happy","Toy" };


		//for random
		int index = rand() % wordChoice.size();
     	
		return wordChoice[index];
     }

};
