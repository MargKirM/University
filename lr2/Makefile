TARGET = menu

.PHONY: clean
all: $(TARGET)

index_first_zero.o: index_first_zero.c index_first_zero.h
	gcc -c index_first_zero.c -o index_first_zero.o

index_last_zero.o: index_last_zero.c index_last_zero.h
	gcc -c index_last_zero.c -o index_last_zero.o

sum_before_and_after.o: sum_before_and_after.c sum_before_and_after.h
	gcc -c sum_before_and_after.c -o sum_before_and_after.o

sum_between.o: sum_between.c sum_between.h
	gcc -c sum_between.c -o sum_between.o

menu.o: menu.c index_first_zero.h index_last_zero.h sum_between.h sum_before_and_after.h
	gcc -c menu.c -o menu.o

$(TARGET): menu.o index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o
	gcc menu.o index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o -o $(TARGET)

clean:
	rm -f *.o $(TARGET)