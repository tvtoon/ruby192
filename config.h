/* Only in "parse.*", but not used from here!
#define OLD_YACC 1
*/

#define CANONICALIZATION_FOR_MATHN 1
#define DLEXT_MAXLEN 3
/* Kanji code. */
#define DEFAULT_KCODE KCODE_NONE
/* Only "eval.c" and... stubs! */
#define DLEXT ".so"

/* Only in "file.c", the checkup should be done by the header as gid_t is STANDARD! */
#define GETGROUPS_T gid_t
#define GETPGRP_VOID 1

/* HAVE_BEGIN */

#define HAVE__SETJMP 1
#define HAVE_ALLOCA_H 1
#define HAVE_CLOCK_GETTIME 1
/* Also used in a "stub" so... */
#define HAVE_DLOPEN 1
#define HAVE_FCHMOD 1
#define HAVE_FCHOWN 1
#define HAVE_FCNTL 1
#define HAVE_FCNTL_H 1
#define HAVE_FLOAT_H 1
#define HAVE_FORK 1
#define HAVE_GETGROUPS 1
#define HAVE_LANGINFO_H 1
#define HAVE_LIMITS_H 1
/* "dir.c" and "file.c". */
#define HAVE_LSTAT 1
#define HAVE_PTHREAD_H 1
#define HAVE_RB_FD_INIT 1
#define HAVE_SETENV 1
#define HAVE_SETEUID 1
#define HAVE_SETITIMER 1
#define HAVE_SETPGRP 1
#define HAVE_SETREUID 1
#define HAVE_SETRESUID 1
#define HAVE_SETSID 1
#define HAVE_SIGALTSTACK 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_UINT64_T 1
#define HAVE_UNISTD_H 1
#define HAVE_UNSETENV 1
#define HAVE_VA_ARGS_MACRO 1

/* Standard to be removed: "dir.c", "dln.c", "file.c", "eval.c", "process.c", "regex.c", "ruby.*", "util.c"... */
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1

/* Forced in "defines.h" if __int64 exists. */
#define HAVE_LONG_LONG 1
/* They serve no purpose other than covering actual arguments with "_()", forced if compiled with C++. */
#define HAVE_PROTOTYPES 1
#define HAVE_STDARG_PROTOTYPES 1

/* BEGIN "dir.c" */
#define HAVE_CHROOT 1
#define HAVE_DIRENT_H 1
#define HAVE_READDIR_R 1
#define HAVE_SEEKDIR 1
#define HAVE_TELLDIR 1
/* "dir.c" END */

/* BEGIN "eval.c" */
#define HAVE_PAUSE 1
#define HAVE_UCONTEXT_H 1
/* "eval.c" END */

/* BEGIN "file.c" */
#define HAVE_EACCESS 1
#define HAVE_FTRUNCATE 1
#define HAVE_LCHMOD 1
#define HAVE_LCHOWN 1
#define HAVE_LINK 1
#define HAVE_PWD_H 1
#define HAVE_READLINK 1
/* The stat structure always have these members! */
#define HAVE_ST_BLKSIZE 1
#define HAVE_ST_BLOCKS 1
#define HAVE_ST_RDEV 1
#define HAVE_STRUCT_STAT_ST_ATIM 1
#define HAVE_STRUCT_STAT_ST_MTIM 1
#define HAVE_STRUCT_STAT_ST_CTIM 1
#define HAVE_SYMLINK 1
#define HAVE_SYS_FILE_H 1
#define HAVE_TRUNCATE 1
#define HAVE_UTIME_H 1
#define HAVE_UTIMENSAT 1
#define HAVE_UTIMES 1
/* "file.c" END */

/* BEGIN "gc.c" */
#define HAVE_GETRLIMIT 1
#define HAVE_SYS_RESOURCE_H 1
/* "gc.c" END */

/* BEGIN "io.c" */
#define HAVE_FDATASYNC 1
#define HAVE_FSEEKO 1
#define HAVE_FSYNC 1
#define HAVE_FTELLO 1
/* Fallback to long. */
#define HAVE_OFF_T 1
#define HAVE_PREAD 1
#define HAVE_SENDFILE 1
#define HAVE_SHUTDOWN 1
#define HAVE_SYS_FCNTL_H 1
#define HAVE_SYS_SENDFILE_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_SYSCALL_H 1
#define HAVE_SYSCALL 1
/* "io.c" END */

/* "main.c" */
#define HAVE_LOCALE_H 1

/* BEGIN "math.c" */
#define HAVE_COSH 1
#define HAVE_LOG2 1
#define HAVE_SINH 1
#define HAVE_TANH 1
/* "math.c" END */

/* BEGIN "numeric.c" */
#define HAVE_FMOD 1
#define HAVE_ROUND 1
/* "numeric.c" END */

/* BEGIN "pack.c" */
#define HAVE_INT16_T 1
#define HAVE_INT32_T 1
#define HAVE_INT64_T 1
#define HAVE_UINT32_T 1
/* "pack.c" END */

/* BEGIN "process.c" */
#define HAVE_GETPGID 1
#define HAVE_GETPGRP 1
#define HAVE_GETPRIORITY 1
#define HAVE_GRP_H 1
#define HAVE_INITGROUPS 1
/*#define HAVE_ISSETUGID 1*/
#define HAVE_SETEGID 1
#define HAVE_SETGID 1
#define HAVE_SETGROUPS 1
#define HAVE_SETPGID 1
#define HAVE_SETREGID 1
#define HAVE_SETRESGID 1
#define HAVE_SETRLIMIT 1
#define HAVE_SETUID 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_TIMES 1
#define HAVE_WAIT4 1
#define HAVE_WAITPID 1
#define HAVE__SC_CLK_TCK 1
/* "process.c" END */

/* "ruby.h" */
#define HAVE_PTHREAD_H 1

/* "signal.c" */
#define HAVE_SIGPROCMASK 1

/* BEGIN "strftime.c" */
#define HAVE_GETTIMEOFDAY 1
#define HAVE_TIMEZONE 1
#define HAVE_VAR_TIMEZONE 1
/* "strftime.c" END */

/* BEGIN "thread_pthread.c" */
#define HAVE_PTHREAD_ATTR_GETSTACK 1
#define HAVE_PTHREAD_ATTR_SETINHERITSCHED 1
#define HAVE_PTHREAD_GETATTR_NP 1
#define HAVE_SCHED_YIELD 1
/* "thread_pthread.c" END */

/* BEGIN "time.c" */
#define HAVE_DAYLIGHT 1
#define HAVE_GMTIME_R 1
#define HAVE_MKTIME 1
#define HAVE_STRUCT_TM_TM_GMTOFF 1
#define HAVE_TIMEGM 1
#define HAVE_TM_ZONE 1
/* "time.c" END */

/* "util.c" */
#define HAVE_GETCWD 1

/* BEGIN "win32.h" */
#define HAVE_FSEEKO 1
#define HAVE_FSEEKO64 1
#define HAVE_FTELLO 1
#define HAVE_FTELLO64 1
#define HAVE_FTRUNCATE64 1
#define HAVE_TRUNCATE64 1
/* "win32.h" END */

/* "ext/digest/defs.h" */
#define HAVE_INTTYPES_H 1
/* "ext/pty/pty.c" */
#define HAVE_SYS_IOCTL_H 1

/* "ext/socket/socket.c" */
#define HAVE_NETINET_IN_SYSTM_H 1
#define HAVE_SOCKETPAIR 1

/* Those comming from "missing.*". */
#define HAVE_ACOSH 1
#define HAVE_CRYPT 1
#define HAVE_DUP2 1
#define HAVE_ERF 1
/* Diffuse logic making it also be used in the function flo_is_finite_p ("numeric.c"), for no good reason. */
#define HAVE_FINITE 1
#define HAVE_FLOCK 1
#define HAVE_HYPOT 1
#define HAVE_LOCKF 1
#define HAVE_MEMMOVE 1
#define HAVE_MKDIR 1
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1
#define HAVE_STRERROR 1
#define HAVE_STRFTIME 1
#define HAVE_STRCHR 1
#define HAVE_STRSTR 1
#define HAVE_STRTOUL 1
#define HAVE_VSNPRINTF 1
/* "missing.*" END */

/* Used only inside missing...
#define HAVE_CBRT 1
#define HAVE_LGAMMA_R 1
#define HAVE_SIGNBIT 1
#define HAVE_STRLCAT 1
#define HAVE_STRLCPY 1
#define HAVE_STRUCT_TIMESPEC 1
#define HAVE_STRUCT_TIMEZONE 1
#define HAVE_TGAMMA 1
*/

/* Inside "ruby.c" but is blocked by false define (0).
#define HAVE_UINTPTR_T 1
#define SIZEOF_UINTPTR_T 8
*/

/* HAVE_END */

/* "io.c" */
#define NEED_IO_SEEK_BETWEEN_RW 1
/* "time.c" */
#define NEGATIVE_TIME_T 1

#define DEVT2NUM(v) ULONG2NUM(v)
#define GIDT2NUM(v) UINT2NUM(v)
#define NUM2DEVT(v) NUM2ULONG(v)
#define NUM2GIDT(v) NUM2UINT(v)
#define NUM2PIDT(v) NUM2INT(v)
#define NUM2TIMET(v) NUM2LONG(v)
#define NUM2UIDT(v) NUM2UINT(v)
#define PIDT2NUM(v) INT2NUM(v)
#define PRI_DEVT_PREFIX "l"
#define PRI_TIMET_PREFIX "l"

#define TIMET2NUM(v) LONG2NUM(v)
#define UIDT2NUM(v) UINT2NUM(v)

#define NORETURN(x) __attribute__ ((noreturn)) x
#define DEPRECATED(x) __attribute__ ((deprecated)) x
#define NOINLINE(x) __attribute__ ((noinline)) x

#define POSIX_SIGNAL 1
#define RETSIGTYPE void
/* What kind of machine preserves signal? Stupid compilers? */
#define RSHIFT(x,y) ((x)>>(int)(y))
/* Forced at "defines.h", if not set. */
#define RUBY_PLATFORM "x86_64-linux"

/* "version.h" */
#define RUBY_LIB_VERSION_STYLE 3	/* full */
#define RUBY_LIB_PREFIX RUBY_EXEC_PREFIX"/lib/ruby"
/* "version.c" */
#define RUBY_SITE_LIB   RUBY_LIB_PREFIX"/site_ruby"
#define RUBY_VENDOR_LIB RUBY_LIB_PREFIX"/vendor_ruby"

#define RUBY_SETJMP(env) _setjmp(env)
#define RUBY_LONGJMP(env,val) _longjmp(env,val)
/* "vm_core.h:" */
#define RUBY_JMP_BUF jmp_buf

/* BEGIN "ruby.c" */
#define RUBY_SITE_LIB2    RUBY_SITE_LIB   "/" _VERSION_
#define RUBY_LIB          RUBY_LIB_PREFIX "/" _VERSION_
#define RUBY_ARCHLIB      RUBY_LIB        "/" RUBY_PLATFORM
#define RUBY_SITE_ARCHLIB RUBY_SITE_LIB2  "/" RUBY_PLATFORM
/* "ruby.c" END */

#define RUBY_ALIAS_FUNCTION_TYPE(type, prot, name, args) type prot __attribute__((alias(#name)));
#define RUBY_ALIAS_FUNCTION_VOID(prot, name, args) RUBY_ALIAS_FUNCTION_TYPE(void, prot, name, args)

/* "process.c" */
#define SETPGRP_VOID 1

#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF___INT64 0
#define SIZEOF_OFF_T 8
#define SIZEOF_VOIDP 8
#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8

#define SIZEOF_SIZE_T 8
#define SIZEOF_PTRDIFF_T 8
#define SIZEOF_INT64_T 8
#define SIZEOF_UINT64_T 8
#define SIZEOF_TIME_T 8

/* "pack.c" */
#define SIZEOF_INT16_T 2
#define SIZEOF_INT32_T 4

/* "process.c" */
#define SIZEOF_RLIM_T 8

/* "file.c" */
#define SIZEOF_STRUCT_STAT_ST_BLOCKS SIZEOF_LONG
#define SIZEOF_STRUCT_STAT_ST_INO SIZEOF_LONG

#define STACK_GROW_DIRECTION -1

/* Useless, to quote "named" macros. */
#define STRINGIZE(expr) STRINGIZE0(expr)

#define TOKEN_PASTE(x,y) x##y

/* "strftime.c" */
#define TIMEZONE_VOID 1
#define TYPEOF_VAR_TIMEZONE long

/*
#define _REENTRANT 1
#define _THREAD_SAFE 1
*/
