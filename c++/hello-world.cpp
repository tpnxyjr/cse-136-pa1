#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>


using namespace std;
int main()
{
   string colors [16] = {"aqua","black","blue","fuchsia","gray","green","lime","maroon","navy","olive","purple","red","silver","teal","white","yellow"};

   srand((unsigned int) time (NULL));
   int randomint = rand()%15;
   string color = colors[randomint];

   time_t t = time(0);   // get time now
   struct tm * now = localtime( & t );
   char buffer[80];
   strftime(buffer, 80, "%d-%m-%Y %I:%M:%S",now);
   std::string str(buffer);

   cout << "Content-type: text/html" << endl << endl;
   cout << "<html>" << endl;
   cout << "<head> <meta charset='UTF-8'><title>We code in our underpants</title> <head>" << endl;
   cout << "<body bgcolor=\""+color+"\">" << endl;
   cout << " Hello World! from C++ @" << str << endl;
   cout << "   </body>" << endl;
   cout << "</html>" << endl;

   return 0;
}