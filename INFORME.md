El informe a continuación detalla el proceso para la implementación de una nueva llamada al sistema "getppid" en xv6. 
Esta llamada retorna el ID del proceso padre del proceso que la invoca.

En primer lugar se añadió la función sys_getppid en sysproc.c para implementar la funcionalidad de la llamada al sistema getppid. Esta función obtiene el proceso actual (myproc()) y retorna el ID del proceso padre (p->parent->pid).

Luego se añadió una nueva constante SYS_getppid en syscall.h para representar la llamada al sistema getppid. Tambien se añadió la entrada correspondiente a sys_getppid en la tabla de llamadas al sistema.

Despues e añadió una nueva entrada para la llamada al sistema getppid en el archivo de ensamblador usys.S para que los programas de usuario puedan invocarla, y se añadió la declaración de la función getppid en el archivo de encabezado user.h para que los programas de usuario la puedan utilizar.

Finalmente se creó un programa en C llamado yosoytupadre.c que invoca la llamada al sistema getppid y muestra el ID del proceso padre, y se añadió yosoytupadre a la lista de programas de usuario en el archivo Makefile para que se compile automáticamente con xv6.

Dificultades Encontradas:

   - Error de redefinición en syscall.c: Inicialmente, se produjo un error de redefinición de la tabla syscalls. Esto se resolvió agregando la nueva llamada al sistema en la tabla existente, en lugar de crear una nueva tabla.

   - Error de declaración implícita en yosoytupadre.c: Al compilar el programa yosoytupadre.c, se encontró un error de declaración implícita de la función getppid. Esto se resolvió agregando la declaración de la función en user.h.
