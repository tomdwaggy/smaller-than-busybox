CC=diet -Os gcc -static -m32 -nostdinc
PATHS=-I. -DLOCALEDIR=\"$(localedir)\" -I ./libs/ -L./libs/
#LIBS=/opt/diet/lib-i386/libc.a

LIBS=addgrps.o setugid.o tz.o rlogin.o console.o limits.o ulimit.o loginprompt.o port.o chowntty.o basename.o env.o getdef.o dialchk.o failure.o shell.o ttytype.o motd.o age.o setupenv.o xmalloc.o mail.o pwauth.o log.o dialup.o getpass.o encrypt.o pwd2spwd.o isexpired.o gshadow.o fputsx.o sub.o hushed.o
LIBS_LOGIN=utmp.o
LIBS_PASSWD=sgetpwent.o sgetspent.o myname.o putspent.o lockpw.o shadowio.o pwio.o commonio.o utent.o pwd_init.o salt.o obscure.o l64a.o
LIBS_SU=myname.o sulog.o suauth.o list.o

all:	passwd	login su

passwd:	$(LIBS) $(LIBS_PASSWD)
	$(CC) $(PATHS) $(addprefix ./libs/,$(LIBS) $(LIBS_PASSWD)) $(OBJS) ./src/passwd.c -o ./bin/passwd

login:	$(LIBS) $(LIBS_LOGIN)
	$(CC) $(PATHS) $(addprefix ./libs/,$(LIBS) $(LIBS_LOGIN)) $(OBJS) ./src/login.c -o ./bin/login

su:	$(LIBS) $(LIBS_SU)
	$(CC) $(PATHS) $(addprefix ./libs/,$(LIBS) $(LIBS_SU)) $(OBJS) ./src/su.c -o ./bin/su

%.o: ./libs/%.c
	$(CC) -c $(PATHS) $< -o ./libs/$@

clean:
	rm ./libs/*.o
	rm ./bin/*
