# Installation

Move to GMP Libary folder and do the following

1. Extract the `mpfr-3.1.3.tar.bz2` to a folder
2. Extract the `gmp-6.0.0a.tar.bz2` to a folder
3. Move to `mpfr-3.1.3` created folder and do the following
4. `./configure`
5. `make`
6. `make check`
7. `sudo make install`
8. Move out of the `mpfr` directory and then move to `gmp-6.0.0` directory
9. Perform the following commands
10. `./configure`
11. `make`
12. `make check`
13. `sudo make install`

The GMP and MPFR libraries should now be setup and be compiled with GXX on the -lgmp and -lmpfr	

