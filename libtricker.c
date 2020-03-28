#include <stdio.h>
#include <dlfcn.h>

// Our definition of coolfunction which will be found before the original one (same symbol name)
int coolfunction(int a, int b)
{
    // Declare function pointer to original function we want to hook
    int (*hooked_coolfunction)(int a, int b);

    // Obtain address of original function (target symbol) anywhere in a shared objects or executable
    hooked_coolfunction = dlsym(RTLD_NEXT, "coolfunction");

		//Print all the variables originally passed to us
    printf("[HOOK] coolfunction: a:%i b:%i\n", a, b);
		
		// Change 'a' to trick the hooked original function
		int locala = 42;

		//Execute the original function and return control to original application
    return hooked_coolfunction(locala, b);
}
