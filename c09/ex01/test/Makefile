all: hey

hey: one.o two.o
	echo $@
	echo $?
	echo $^
	echo $<

one.o:
	touch one

two.o:
	touch two

clean:
	rm -f hey one two
