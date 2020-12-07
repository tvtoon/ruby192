PROJECT = ruby192
MAJVER = 1.9
MINVER = 2
#p330
LIBS = ${PROJECT}
PROGS = ${PROJECT}

include make/conf
include make/zlib.mk

#DEFINES  = -DWORKDIR_CURRENT -D_REENTRANT
# -Werror -I. -D_GNU_SOURCE
CFLAGS := -DRUBY_EXEC_PREFIX=\"${PREFIX}\" -D_VERSION_=\"${VERSION}\" -O2 -Wall -Wextra -Wno-unused-parameter -g -o
DOCS = 
INFOS =
INCLUDES = config.h defines.h encoding.h intern.h io.h missing.h oniguruma.h
INCLUDES += re.h regex.h ruby.h st.h util.h version.h vm.h win32.h
# backward directory
INCLUDES += rubyio.h rubysig.h backward_st.h backward_util.h

MANS =
#?  prec.c regex.c
SRC = array.c bignum.c class.c compar.c compile.c complex.c cont.c debug.c
SRC += dir.c dln.c dln_find.c encoding.c enum.c enumerator.c error.c eval.c
SRC += file.c gc.c hash.c inits.c io.c iseq.c load.c marshal.c math.c
SRC += miniprelude.c newline.c node.c numeric.c object.c pack.c parse.c
SRC += process.c proc.c random.c range.c rational.c re.c regcomp.c regenc.c
SRC += regerror.c regexec.c regparse.c regsyntax.c ruby.c safe.c signal.c
SRC += sprintf.c st.c strftime.c string.c strlcat.c strlcpy.c struct.c
SRC += thread.c time.c transcode.c util.c variable.c version.c vm.c vm_dump.c

SRC += enc/ascii.c enc/us_ascii.c enc/unicode.c enc/utf_8.c
# Only the encoding and module needed for tapir...
SRC += enc/trans/single_byte.c enc/trans/utf_16_32.c enc/trans/japanese_sjis.c
SRC += ext/zlib/zlib.c

LIBSRC := ${SRC}
PROGSRC = main.c
#SRC += ${PROGSRC}

include make/exconf
include make/build

${PROGS}: main.o

dist-clean: clean

include make/pack
include make/rules
include make/thedep
