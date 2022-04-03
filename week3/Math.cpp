
#include "Math.h"

int Math::suma = 0;

int Math::produs = 1;


const char* Math::result;


   int Math:: Add(int number1 , int number2) {

	
	suma = number1 + number2;
	return suma;

}

   int Math::Add(int number1, int number2, int number3) {

	   suma = number1 + number2 + number3;
	   return suma;
}
   int Math::Add(double dnumber1, double dnumber2) {
	 
	   suma = dnumber1 + dnumber2;
	   return suma;

 }
   int Math:: Add(double dnumber1, double dnumber2, double dnumber3) {
	   
	   suma = dnumber1 + dnumber2 + dnumber3;
	   return suma;



}
   int Math::Mul(int number1, int number2) {
	
	   produs = number1 * number2;
	   return produs;
}
   int Math::Mul(int number1, int number2, int number3) {

	   produs = number1 * number2 * number3;
	   return produs;

 }
   int Math::Mul(double dnumber1, double dnumber2) {
	
	   produs = dnumber1 * dnumber2;
	   return produs;


 }
   int Math::Mul(double dnumber1, double dnumber2, double dnumber3) {

	   produs = dnumber1 * dnumber2 * dnumber3;
	   return produs;



}
   int Math::Add(int count, ...) {
	   suma = 0;
	   //std::cout << suma << endl;
	   va_list ap;
	   va_start(ap, count);

	   for (int i = 1; i <= count; i++) {
		   int a = va_arg(ap, int);
		   suma = suma + a;
		   //std::cout << suma << endl;
	   }
	   va_end(ap);

	   return suma;
   }

   const char* Math::Add(const char* a, const char* b) 
   {

	   char n=sizeof(a);
	   char *m;
	   char** s;
	   char** p;
	  

	   

	   if (a != nullptr && b != nullptr) {
		   
		 
		 char q = *a;
		 char t = *b;
		 string s1 = a;
		 string s2 = b;
		   m = &q;
		
		  
		   size_t len1 = strlen(a);
		   size_t len2 = strlen(b);
		  // char* total{ new char[strlen(a) + strlen(b) + 1] };
		   //total=strcpy(total, a);
		   //total = strcat(total, b);
		   //std::cout << total;
		   //char* total = malloc(a + b + 1);
		   string rez = s1 + s2;
		 
		 
	   }


   
	   return result;
   }