# INFORME DE INSTALACIÓN DE XV6

## Pasos Seguidos para Instalar xv6
1. Descargar una virtual machine.
   -    Debido a que en mi sistema operativo MacOS Monterey 12.7.6 no pude instalar el XV6 despues de varios dias, tome la decisión de descargar VirtualBox y instalar xv6 a través de Ubuntu.
   -    Luego de descargar VirtualBox, configure e instale Ubuntu 24.04 LTS
2. Clonar el repositorio oficial de xv6
   -    git clone https://github.com/mit-pdos/xv6-riscv.git
   -    cd xv6-riscv
3. Crear una nueva rama
   -    git checkout -b julian_reyes_t0
5. Instalar las dependencias necesarias
   -    sudo apt-get install git build-essential gdb-multiarch qemu-system-misc gcc-riscv64-linux-gnu binutils-riscv64-linux-gnu riscv64-linux-gnu-gcc --version
    
6. Ejecutar xv6 en QEMU:
   -    make qemu
8. Verificar la instalación (Imagenes se encuentran en la entrega de webc)
    Se utilizaron los comandos:
    -    echo "hola mundo"
    -    ls
    -    cat README
    


## Problemas Encontrados y Soluciones
-    Problema: Errores de Compilación en MacOs Monterey.
Tras constantes fallas del toolchain, y buscando respuestas en internet, resulta que personas con el mismo sistema operativo tuvieron el mismo error y la respuesta de uno de los colaboradores del repositorio homebrew-riscv fue: "I can't reproduce the error, but I do not have machine with macOS 12 currently. The error message appears to originating in rvv code, which in general, is quite recent. I suspect the issue might be that code is expecting a different C++ version. This error may not have occurred for others since their compiler's default C++ version is sufficient. The gcc code could be more compatible if it made the version expectation explicit with a compiler flag. Thus, this might be an issue with riscv-gnu-toolchain.
Esto fue utlizando el packet manager HOMEBREW, Tambien intente con macports pero de igual manera no se pudo instalar correctamente el toolchain de riscv. En conclusión, Tras Llevar muchos intentos y muchas horas intentando correr xv6 en el SO de mi laptop, opte por utilizar otro sistema operativo.

Solución: Utilice Ubuntu a través de una virtual machine, luego la instalación de XV6 se realizo sin problemas.

## Pasos realizados en git  
-    Para moverse entre ramas:
        -    git checkout riscv
        -    git checkout -b julian_reyes_t0
-    En la rama julian_reyes_t0, para agregar y subir cambios
        -    git add .
#Configuración de usuario
        -    git config --global user.name "Julián Reyes"
        -    git config --global user.email "julianreyesbollo1@gmail.com"
#Para el commit
        -    git commit -m "Instalación y ejecución de xv6"
        -    git push origin julian_reyes_t0 
#Para corroborar o rehacer el fork:
        -    git remote add fork https://github.com/jreyess99/xv6-riscv.git
        -    git push fork julian_reyes_t0 
