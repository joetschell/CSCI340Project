all: project

project: project.o 
			gcc project.o -o project

project.o: project.c
			gcc -c -Wall -g project.c

clean:
			/bin/rm -f project *.o *.gz

run: 
			./project

tarball:
			tar -cvzf mansour_schell.tar.gz *