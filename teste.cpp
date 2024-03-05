/*************************************************************************************
Programming Skills Challenge - Siemens
Exercise 3. The program prints numbers from 1 to 100. Print "Foo" for multiples of 3, 
"Baa" for multiples of 5, and "FooBaa" for multiple numbers simultaneously of 3 and 5.
For validation purpose, please go to: https://www.onlinegdb.com/xafquxA9L

Criado em 01/03/2024 - 12:37am
Autora: Mariana Uzeda - mariana.uzeda@gmail.com
*************************************************************************************/
#include <iostream>

int
main ()
{
  for (int i = 1; i <= 100; i++)
	{
	  std::cout << (i % 3 == 0 ? "Foo" : "")	// Se i é divisível por 3, imprime "Foo"
		<< (i % 5 == 0 ? "Baa" : "")	// Se i é divisível por 5, imprime "Baa"
		<< (i % 3 != 0 && i % 5 != 0 ? std::to_string (i) : "")	// Se não é divisível por 3 e 5, imprime o número
		<< std::endl;
	}
  return 0;
}
