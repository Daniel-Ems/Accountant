CPPFLAGS+= -Wall -Wextra -Wpedantic -Wextra -Wpedantic -Wwrite-strings 
CPPFLAGS+= -Wstack-usage=1024 -Wfloat-equal -Waggregate-return -Winline

CFLAGS+=-std=c11
CFLAGS+=-g
LDLIBS += -lm

all= accountant

bins: $(all)


accountant: accountant.o



.PHONY: clean debug profile




debug: CLFAGS+=-g
debug: $(all)

profile: CFLAGS+=-pg
profile: LDFLAGS+=-pg
profile: $(bins)


clean:
	$(RM) $(all) *.o 







