CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_RECURSIVE=basicClassification.o advancedClassificationRecursion.o
OBJECTS_LIB_LOOP=basicClassification.o advancedClassificationLoop.o
FLAGS= -Wall -g

all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloop.a
libclassloop.a:$(OBJECTS_LIB_LOOP)
	$(AR) -rcs libclassloop.a $(OBJECTS_LIB_LOOP)
recursives: libclassrec.a
libclassrec.a:$(OBJECTS_LIB_RECURSIVE)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_RECURSIVE)
recursived:libclassrec.so
libclassrec.so:$(OBJECTS_LIB_RECURSIVE)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_RECURSIVE)
loopd:libclassloop.so
libclassloop.so:$(OBJECTS_LIB_LOOP)
	$(CC) -shared -o libclassloop.so $(OBJECTS_LIB_LOOP)
mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloop.so
maindrec: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
main.o: main.c numClass.h
	$(CC) $(FLAGS) -c main.c
basicClassification.o:  basicClassification.c numClass.h
	$(CC) $(FLAGS) -fPIC -c basicClassification.c
advancedClassificationLoop.o:  advancedClassificationLoop.c numClass.h
	$(CC) $(FLAGS) -fPIC -c advancedClassificationLoop.c	
advancedClassificationRecursion.o:  advancedClassificationRecursion.c numClass.h
	$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c	

.PHONY:	all clean	

clean:
	rm -f *.o *.a *.so mains maindrec maindloop

# loops:$(OBJECTS_LIB_LOOP)
# 	$(AR) -rcs libclassloop.a $(OBJECTS_LIB_LOOP)
# recursives:$(OBJECTS_LIB_RECURSIVE)
# 	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_RECURSIVE)
# recursived:$(OBJECTS_LIB_RECURSIVE)
# 	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_RECURSIVE)
# loopd:$(OBJECTS_LIB_LOOP)
# 	$(CC) -shared -o libclassloop.so $(OBJECTS_LIB_LOOP)
