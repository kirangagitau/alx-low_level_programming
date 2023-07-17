@Author Gitau MUguro
Files in this directory are dealing with handling the C struct as an elment 
of data structures in C languae.
A struct is a group of vatrious data of various types all under one name.
typedef is used to give a type a new name, especially common in functions.
typedef is in some way a manner of alliasing, see example below
	typedef unsigned char byte;
	
	int main(void)
	{
		byte c;

		c = 200;
		return (0);
	}

The identifier 'byte' can be used as an abbreviation for the type unsigned char.
