	#@Author Gitau Muguro
This directory deals with static libraries.
A library is a single file that is a collection of two or more object files.
The object files get put together into one file that is usally an archive. A common archiver that achieves this is the 'ar'
to create a library use the command 'ar' :-
		$ar -rc mathlibutil.a add.o sub.0 div.0
	/* -r replace object file */
	/* -c create file*/

After a library is created, then there need for indexing so as when compilling, it can be easy to find symbols(functions, variables and so on)
this is done using the comman 'ranlib'
		$ranlib mathlibutil.a

"index is out of date" erro cause compiler to abort. solve this by re-indexing the library again i.e 'ranlib xxx.a'
Avoid this when copying a library by using the -p option when doing copy i.e 'cp -p xxx.a  destination'
The above error is caus index date of library (stored inside library) is older that files last modification date (stored in file system).

