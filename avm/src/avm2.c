# 2 "avm.c"
# 1 "an2-ail.h" 1



# 1 "/usr/local/include/aterm2.h" 1 3
# 14 "/usr/local/include/aterm2.h" 3
# 1 "/usr/local/include/aterm1.h" 1 3
# 9 "/usr/local/include/aterm1.h" 3
# 1 "/usr/include/stdio.h" 1 3
# 28 "/usr/include/stdio.h" 3
# 1 "/usr/include/features.h" 1 3
# 283 "/usr/include/features.h" 3
# 1 "/usr/include/sys/cdefs.h" 1 3
# 284 "/usr/include/features.h" 2 3
# 312 "/usr/include/features.h" 3
# 1 "/usr/include/gnu/stubs.h" 1 3
# 313 "/usr/include/features.h" 2 3
# 29 "/usr/include/stdio.h" 2 3





# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 199 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 3
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3

# 1 "/usr/include/bits/types.h" 1 3
# 26 "/usr/include/bits/types.h" 3
# 1 "/usr/include/features.h" 1 3
# 27 "/usr/include/bits/types.h" 2 3


# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 30 "/usr/include/bits/types.h" 2 3


typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;




typedef struct
{
  long int __val[2];
}
__quad_t;
typedef struct
{
  __u_long __val[2];
}
__u_quad_t;

typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




typedef __quad_t *__qaddr_t;

typedef __u_quad_t __dev_t;
typedef __u_int __uid_t;
typedef __u_int __gid_t;
typedef __u_long __ino_t;
typedef __u_int __mode_t;
typedef __u_int __nlink_t;
typedef long int __off_t;
typedef __quad_t __loff_t;
typedef int __pid_t;
typedef int __ssize_t;
typedef __u_long __rlim_t;
typedef __u_quad_t __rlim64_t;
typedef __u_int __id_t;

typedef struct
{
  int __val[2];
}
__fsid_t;


typedef int __daddr_t;
typedef char *__caddr_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __swblk_t;

typedef long int __clock_t;


typedef int __clockid_t;


typedef int __timer_t;






typedef int __key_t;


typedef unsigned short int __ipc_pid_t;



typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef __quad_t __blkcnt64_t;


typedef __u_long __fsblkcnt_t;
typedef __u_quad_t __fsblkcnt64_t;


typedef __u_long __fsfilcnt_t;
typedef __u_quad_t __fsfilcnt64_t;


typedef __u_quad_t __ino64_t;


typedef __loff_t __off64_t;


typedef long int __t_scalar_t;
typedef unsigned long int __t_uscalar_t;


typedef int __intptr_t;


typedef unsigned int __socklen_t;




# 1 "/usr/include/bits/pthreadtypes.h" 1 3
# 23 "/usr/include/bits/pthreadtypes.h" 3
# 1 "/usr/include/bits/sched.h" 1 3
# 68 "/usr/include/bits/sched.h" 3
struct __sched_param
{
  int __sched_priority;
};
# 24 "/usr/include/bits/pthreadtypes.h" 2 3


struct _pthread_fastlock
{
  long int __status;
  int __spinlock;

};



typedef struct _pthread_descr_struct *_pthread_descr;





typedef struct __pthread_attr_s
{
  int __detachstate;
  int __schedpolicy;
  struct __sched_param __schedparam;
  int __inheritsched;
  int __scope;
  size_t __guardsize;
  int __stackaddr_set;
  void *__stackaddr;
  size_t __stacksize;
}
pthread_attr_t;



typedef struct
{
  struct _pthread_fastlock __c_lock;
  _pthread_descr __c_waiting;
}
pthread_cond_t;



typedef struct
{
  int __dummy;
}
pthread_condattr_t;


typedef unsigned int pthread_key_t;





typedef struct
{
  int __m_reserved;
  int __m_count;
  _pthread_descr __m_owner;
  int __m_kind;
  struct _pthread_fastlock __m_lock;
}
pthread_mutex_t;



typedef struct
{
  int __mutexkind;
}
pthread_mutexattr_t;



typedef int pthread_once_t;
# 140 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;
# 144 "/usr/include/bits/types.h" 2 3
# 37 "/usr/include/stdio.h" 2 3
# 45 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 55 "/usr/include/stdio.h" 3
typedef struct _IO_FILE __FILE;
# 65 "/usr/include/stdio.h" 3
# 1 "/usr/include/libio.h" 1 3
# 32 "/usr/include/libio.h" 3
# 1 "/usr/include/_G_config.h" 1 3
# 9 "/usr/include/_G_config.h" 3
# 1 "/usr/include/bits/types.h" 1 3
# 10 "/usr/include/_G_config.h" 2 3




# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 287 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 3
typedef long int wchar_t;
# 312 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 3
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3
# 24 "/usr/include/_G_config.h" 3
# 1 "/usr/include/wchar.h" 1 3
# 48 "/usr/include/wchar.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 49 "/usr/include/wchar.h" 2 3

# 1 "/usr/include/bits/wchar.h" 1 3
# 51 "/usr/include/wchar.h" 2 3
# 67 "/usr/include/wchar.h" 3
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  }
  __value;
}
__mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
}
_G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
}
_G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3
# 1 "/usr/include/gconv.h" 1 3
# 26 "/usr/include/gconv.h" 3
# 1 "/usr/include/features.h" 1 3
# 27 "/usr/include/gconv.h" 2 3

# 1 "/usr/include/wchar.h" 1 3
# 48 "/usr/include/wchar.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 49 "/usr/include/wchar.h" 2 3

# 1 "/usr/include/bits/wchar.h" 1 3
# 51 "/usr/include/wchar.h" 2 3
# 29 "/usr/include/gconv.h" 2 3


# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 32 "/usr/include/gconv.h" 2 3





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
			    const unsigned char **, const unsigned char *,
			    unsigned char **, size_t *, int, int);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
				  struct __gconv_step_data *, void *,
				  const unsigned char *,
				  const unsigned char **,
				  const unsigned char *, unsigned char **,
				  size_t *);


typedef int (*__gconv_trans_context_fct) (void *, const unsigned char *,
					  const unsigned char *,
					  unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (const char *, const char ***,
					size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  struct __gconv_step_data __data[1];
}
 *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  }
  __combined;
}
_G_iconv_t;

typedef int _G_int16_t;
typedef int _G_int32_t;
typedef unsigned int _G_uint16_t;
typedef unsigned int _G_uint32_t;
# 33 "/usr/include/libio.h" 2 3
# 53 "/usr/include/libio.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stdarg.h" 1 3
# 43 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3
# 160 "/usr/include/libio.h" 3
struct _IO_jump_t;
struct _IO_FILE;
# 170 "/usr/include/libio.h" 3
typedef void _IO_lock_t;





struct _IO_marker
{
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 193 "/usr/include/libio.h" 3
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 261 "/usr/include/libio.h" 3
struct _IO_FILE
{
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _blksize;
  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 305 "/usr/include/libio.h" 3
  __off64_t _offset;





  void *__pad1;
  void *__pad2;

  int _mode;

  char _unused2[15 * sizeof (int) - 2 * sizeof (void *)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 344 "/usr/include/libio.h" 3
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
				 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t * __pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 396 "/usr/include/libio.h" 3
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
# 426 "/usr/include/libio.h" 3
extern int _IO_getc (_IO_FILE * __fp);
extern int _IO_putc (int __c, _IO_FILE * __fp);
extern int _IO_feof (_IO_FILE * __fp);
extern int _IO_ferror (_IO_FILE * __fp);

extern int _IO_peekc_locked (_IO_FILE * __fp);





extern void _IO_flockfile (_IO_FILE *);
extern void _IO_funlockfile (_IO_FILE *);
extern int _IO_ftrylockfile (_IO_FILE *);
# 456 "/usr/include/libio.h" 3
extern int _IO_vfscanf (_IO_FILE *, const char *, __gnuc_va_list, int *);
extern int _IO_vfprintf (_IO_FILE *, const char *, __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *);
# 66 "/usr/include/stdio.h" 2 3
# 80 "/usr/include/stdio.h" 3
typedef _G_fpos_t fpos_t;
# 129 "/usr/include/stdio.h" 3
# 1 "/usr/include/bits/stdio_lim.h" 1 3
# 130 "/usr/include/stdio.h" 2 3



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
# 144 "/usr/include/stdio.h" 3
extern int remove (const char *__filename);

extern int rename (const char *__old, const char *__new);




extern FILE *tmpfile (void);
# 163 "/usr/include/stdio.h" 3
extern char *tmpnam (char *__s);




extern char *tmpnam_r (char *__s);
# 180 "/usr/include/stdio.h" 3
extern char *tempnam (const char *__dir, const char *__pfx);




extern int fclose (FILE * __stream);

extern int fflush (FILE * __stream);



extern int fflush_unlocked (FILE * __stream);
# 203 "/usr/include/stdio.h" 3
extern FILE *fopen (const char *__filename, const char *__modes);

extern FILE *freopen (const char *__filename,
		      const char *__modes, FILE * __stream);
# 233 "/usr/include/stdio.h" 3
extern FILE *fdopen (int __fd, const char *__modes);
# 256 "/usr/include/stdio.h" 3
extern void setbuf (FILE * __stream, char *__buf);



extern int setvbuf (FILE * __stream, char *__buf, int __modes, size_t __n);




extern void setbuffer (FILE * __stream, char *__buf, size_t __size);


extern void setlinebuf (FILE * __stream);




extern int fprintf (FILE * __stream, const char *__format, ...);

extern int printf (const char *__format, ...);

extern int sprintf (char *__s, const char *__format, ...);


extern int vfprintf (FILE * __s, const char *__format, __gnuc_va_list __arg);

extern int vprintf (const char *__format, __gnuc_va_list __arg);

extern int vsprintf (char *__s, const char *__format, __gnuc_va_list __arg);



extern int snprintf (char *__s, size_t __maxlen, const char *__format, ...);

extern int vsnprintf (char *__s, size_t __maxlen,
		      const char *__format, __gnuc_va_list __arg);
# 327 "/usr/include/stdio.h" 3
extern int fscanf (FILE * __stream, const char *__format, ...);

extern int scanf (const char *__format, ...);

extern int sscanf (const char *__s, const char *__format, ...);
# 353 "/usr/include/stdio.h" 3
extern int fgetc (FILE * __stream);
extern int getc (FILE * __stream);


extern int getchar (void);







extern int getc_unlocked (FILE * __stream);
extern int getchar_unlocked (void);




extern int fgetc_unlocked (FILE * __stream);




extern int fputc (int __c, FILE * __stream);
extern int putc (int __c, FILE * __stream);


extern int putchar (int __c);







extern int fputc_unlocked (int __c, FILE * __stream);




extern int putc_unlocked (int __c, FILE * __stream);
extern int putchar_unlocked (int __c);





extern int getw (FILE * __stream);


extern int putw (int __w, FILE * __stream);




extern char *fgets (char *__s, int __n, FILE * __stream);
# 419 "/usr/include/stdio.h" 3
extern char *gets (char *__s);
# 443 "/usr/include/stdio.h" 3
extern int fputs (const char *__s, FILE * __stream);
# 453 "/usr/include/stdio.h" 3
extern int puts (const char *__s);



extern int ungetc (int __c, FILE * __stream);



extern size_t fread (void *__ptr, size_t __size, size_t __n, FILE * __stream);

extern size_t fwrite (const void *__ptr, size_t __size,
		      size_t __n, FILE * __s);



extern size_t fread_unlocked (void *__ptr, size_t __size,
			      size_t __n, FILE * __stream);
extern size_t fwrite_unlocked (const void *__ptr, size_t __size,
			       size_t __n, FILE * __stream);




extern int fseek (FILE * __stream, long int __off, int __whence);

extern long int ftell (FILE * __stream);

extern void rewind (FILE * __stream);
# 497 "/usr/include/stdio.h" 3
extern int fgetpos (FILE * __stream, fpos_t * __pos);

extern int fsetpos (FILE * __stream, const fpos_t * __pos);
# 533 "/usr/include/stdio.h" 3
extern void clearerr (FILE * __stream);

extern int feof (FILE * __stream);

extern int ferror (FILE * __stream);



extern void clearerr_unlocked (FILE * __stream);
extern int feof_unlocked (FILE * __stream);
extern int ferror_unlocked (FILE * __stream);




extern void perror (const char *__s);




extern int sys_nerr;
extern const char *const sys_errlist[];
# 564 "/usr/include/stdio.h" 3
extern int fileno (FILE * __stream);




extern int fileno_unlocked (FILE * __stream);






extern FILE *popen (const char *__command, const char *__modes);


extern int pclose (FILE * __stream);





extern char *ctermid (char *__s);
# 611 "/usr/include/stdio.h" 3
extern void flockfile (FILE * __stream);



extern int ftrylockfile (FILE * __stream);


extern void funlockfile (FILE * __stream);
# 10 "/usr/local/include/aterm1.h" 2 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stdarg.h" 1 3
# 110 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stdarg.h" 3
typedef __gnuc_va_list va_list;
# 11 "/usr/local/include/aterm1.h" 2 3
# 1 "/usr/local/include/encoding.h" 1 3
# 97 "/usr/local/include/encoding.h" 3
typedef unsigned int header_type;
# 12 "/usr/local/include/aterm1.h" 2 3
# 1 "/usr/local/include/abool.h" 1 3



typedef enum
{ ATfalse = 0, ATtrue }
ATbool;
# 13 "/usr/local/include/aterm1.h" 2 3
# 24 "/usr/local/include/aterm1.h" 3
typedef struct _ATerm
{
  header_type header;
  struct _ATerm *next;
}
 *ATerm;
# 38 "/usr/local/include/aterm1.h" 3
ATerm ATmake (const char *pattern, ...);
ATbool ATmatch (ATerm t, const char *pattern, ...);

ATerm ATmakeTerm (ATerm pat, ...);
ATbool ATmatchTerm (ATerm t, ATerm pat, ...);
ATerm ATvmake (const char *pat);
ATerm ATvmakeTerm (ATerm pat);
void AT_vmakeSetArgs (va_list * args);
ATbool ATvmatch (ATerm t, const char *pat);
ATbool ATvmatchTerm (ATerm t, ATerm pat);

ATerm ATreadFromTextFile (FILE * file);
ATerm ATreadFromSharedTextFile (FILE * f);
ATerm ATreadFromBinaryFile (FILE * file);
ATerm ATreadFromFile (FILE * file);
ATerm ATreadFromNamedFile (const char *name);
ATerm ATreadFromString (const char *string);
ATerm ATreadFromSharedString (char *s, int size);
ATerm ATreadFromBinaryString (char *s, int size);
# 65 "/usr/local/include/aterm1.h" 3
extern ATbool AT_isEqual (ATerm t1, ATerm t2);
extern ATbool AT_isDeepEqual (ATerm t1, ATerm t2);
# 79 "/usr/local/include/aterm1.h" 3
ATbool ATwriteToTextFile (ATerm t, FILE * file);
long ATwriteToSharedTextFile (ATerm t, FILE * f);
ATbool ATwriteToBinaryFile (ATerm t, FILE * file);
ATbool ATwriteToNamedTextFile (ATerm t, const char *name);
ATbool ATwriteToNamedBinaryFile (ATerm t, const char *name);
char *ATwriteToString (ATerm t);
char *ATwriteToSharedString (ATerm t, int *len);
char *ATwriteToBinaryString (ATerm t, int *len);
ATerm ATsetAnnotation (ATerm t, ATerm label, ATerm anno);
ATerm ATgetAnnotation (ATerm t, ATerm label);
ATerm ATremoveAnnotation (ATerm t, ATerm label);

void ATprotect (ATerm * atp);
void ATunprotect (ATerm * atp);
void ATprotectArray (ATerm * start, int size);
void ATunprotectArray (ATerm * start);







void ATinit (int argc, char *argv[], ATerm * bottomOfStack);
void ATinitialize (int argc, char *argv[]);
void ATsetWarningHandler (void (*handler) (const char *format, va_list args));
void ATsetErrorHandler (void (*handler) (const char *format, va_list args));
void ATsetAbortHandler (void (*handler) (const char *format, va_list args));
void ATwarning (const char *format, ...);
void ATerror (const char *format, ...);
void ATabort (const char *format, ...);
int ATprintf (const char *format, ...);
int ATfprintf (FILE * stream, const char *format, ...);
int ATvfprintf (FILE * stream, const char *format, va_list args);
# 15 "/usr/local/include/aterm2.h" 2 3
# 1 "/usr/local/include/afun.h" 1 3



# 1 "/usr/local/include/atypes.h" 1 3



# 1 "/usr/local/include/abool.h" 1 3
# 5 "/usr/local/include/atypes.h" 2 3

typedef unsigned int ShortHashNumber;







typedef int MachineWord;
typedef unsigned int HashNumber;
# 5 "/usr/local/include/afun.h" 2 3
# 1 "/usr/local/include/encoding.h" 1 3
# 6 "/usr/local/include/afun.h" 2 3
# 17 "/usr/local/include/afun.h" 3
typedef MachineWord AFun;


typedef struct _SymEntry
{
  header_type header;
  struct _SymEntry *next;
  AFun id;
  char *name;
  int count;
  int index;
}
 *SymEntry;
# 39 "/usr/local/include/afun.h" 3
struct _ATerm;
extern struct _ATerm **at_lookup_table_alias;
extern SymEntry *at_lookup_table;

unsigned int AT_symbolTableSize ();
void AT_initSymbol (int argc, char *argv[]);
int AT_printSymbol (AFun sym, FILE * f);
ATbool AT_isValidSymbol (AFun sym);

ATbool AT_isMarkedSymbol (AFun sym);
void AT_freeSymbol (SymEntry sym);
void AT_markProtectedSymbols ();
unsigned int AT_hashSymbol (char *name, int arity);
ATbool AT_findSymbol (char *name, int arity, ATbool quoted);
# 16 "/usr/local/include/aterm2.h" 2 3
# 1 "/usr/local/include/abool.h" 1 3
# 17 "/usr/local/include/aterm2.h" 2 3





typedef struct
{
  header_type header;
  ATerm next;
  int value;
}
 *ATermInt;

typedef struct
{
  header_type header;
  ATerm next;
  double value;
}
 *ATermReal;

typedef struct
{
  header_type header;
  ATerm next;
}
 *ATermAppl;

typedef struct _ATermList
{
  header_type header;
  ATerm next;
  ATerm head;
  struct _ATermList *tail;
}
 *ATermList;

typedef struct
{
  header_type header;
  ATerm next;
  ATerm ph_type;
}
 *ATermPlaceholder;

typedef struct
{
  header_type header;
  ATerm next;
  void *data;
}
 *ATermBlob;

struct _ATermTable;

typedef struct _ATermTable *ATermIndexedSet;
typedef struct _ATermTable *ATermTable;
# 77 "/usr/local/include/aterm2.h" 3
ATermInt ATmakeInt (int value);




ATermReal ATmakeReal (double value);




ATermAppl ATmakeAppl (AFun sym, ...);
ATermAppl ATmakeAppl0 (AFun sym);
ATermAppl ATmakeAppl1 (AFun sym, ATerm arg0);
ATermAppl ATmakeAppl2 (AFun sym, ATerm arg0, ATerm arg1);
ATermAppl ATmakeAppl3 (AFun sym, ATerm arg0, ATerm arg1, ATerm arg2);
ATermAppl ATmakeAppl4 (AFun sym, ATerm arg0, ATerm arg1, ATerm arg2,
		       ATerm arg3);
ATermAppl ATmakeAppl5 (AFun sym, ATerm arg0, ATerm arg1, ATerm arg2,
		       ATerm arg4, ATerm arg5);
ATermAppl ATmakeAppl6 (AFun sym, ATerm arg0, ATerm arg1, ATerm arg2,
		       ATerm arg4, ATerm arg5, ATerm arg6);







ATermAppl ATsetArgument (ATermAppl appl, ATerm arg, int n);


ATermList ATgetArguments (ATermAppl appl);
ATermAppl ATmakeApplList (AFun sym, ATermList args);
ATermAppl ATmakeApplArray (AFun sym, ATerm args[]);


extern ATermList ATempty;

ATermList ATmakeList (int n, ...);




ATermList ATmakeList1 (ATerm el0);
# 144 "/usr/local/include/aterm2.h" 3
ATermList ATgetTail (ATermList list, int start);
ATermList ATreplaceTail (ATermList list, ATermList newtail, int start);
ATermList ATgetPrefix (ATermList list);
ATerm ATgetLast (ATermList list);
ATermList ATgetSlice (ATermList list, int start, int end);
ATermList ATinsert (ATermList list, ATerm el);
ATermList ATinsertAt (ATermList list, ATerm el, int index);
ATermList ATappend (ATermList list, ATerm el);
ATermList ATconcat (ATermList list1, ATermList list2);
int ATindexOf (ATermList list, ATerm el, int start);
int ATlastIndexOf (ATermList list, ATerm el, int start);
ATerm ATelementAt (ATermList list, int index);
ATermList ATremoveElement (ATermList list, ATerm el);
ATermList ATremoveElementAt (ATermList list, int idx);
ATermList ATremoveAll (ATermList list, ATerm el);
ATermList ATreplace (ATermList list, ATerm el, int idx);
ATermList ATreverse (ATermList list);
ATermList ATsort (ATermList list,
		  int (*compare) (const ATerm t1, const ATerm t2));
int ATcompare (ATerm t1, ATerm t2);
ATerm ATdictCreate ();
ATerm ATdictGet (ATerm dict, ATerm key);
ATerm ATdictPut (ATerm dict, ATerm key, ATerm value);
ATerm ATdictRemove (ATerm dict, ATerm key);

ATermTable ATtableCreate (long initial_size, int max_load_pct);
void ATtableDestroy (ATermTable table);
void ATtableReset (ATermTable table);
void ATtablePut (ATermTable table, ATerm key, ATerm value);
ATerm ATtableGet (ATermTable table, ATerm key);
void ATtableRemove (ATermTable table, ATerm key);
ATermList ATtableKeys (ATermTable table);
ATermList ATtableValues (ATermTable table);

ATermIndexedSet ATindexedSetCreate (long initial_size, int max_load_pct);
void ATindexedSetDestroy (ATermIndexedSet set);
void ATindexedSetReset (ATermIndexedSet set);
long ATindexedSetPut (ATermIndexedSet set, ATerm elem, ATbool * isnew);
long ATindexedSetGetIndex (ATermIndexedSet set, ATerm elem);
void ATindexedSetRemove (ATermIndexedSet set, ATerm elem);
ATermList ATindexedSetElements (ATermIndexedSet set);
ATerm ATindexedSetGetElem (ATermIndexedSet set, long index);


ATermList ATfilter (ATermList list, ATbool (*predicate) (ATerm));


ATermPlaceholder ATmakePlaceholder (ATerm type);




ATermBlob ATmakeBlob (int size, void *data);





void ATregisterBlobDestructor (ATbool (*destructor) (ATermBlob));
void ATunregisterBlobDestructor (ATbool (*destructor) (ATermBlob));

AFun ATmakeAFun (char *name, int arity, ATbool quoted);
# 215 "/usr/local/include/aterm2.h" 3
void ATprotectAFun (AFun sym);

void ATunprotectAFun (AFun sym);

void ATprotectMemory (void *start, int size);
void ATunprotectMemory (void *start);






ATerm AT_getAnnotations (ATerm t);
ATerm AT_setAnnotations (ATerm t, ATerm annos);
ATerm AT_removeAnnotations (ATerm t);


ATerm ATremoveAllAnnotations (ATerm t);




unsigned char *ATchecksum (ATerm t);
ATbool ATdiff (ATerm t1, ATerm t2, ATerm * templ, ATerm * diffs);

void ATsetChecking (ATbool on);
ATbool ATgetChecking (void);


extern int at_gc_count;


int ATcalcUniqueSubterms (ATerm t);
int ATcalcUniqueSymbols (ATerm t);

int ATcalcTextSize (ATerm t);

void AT_writeToStringBuffer (ATerm t, char *buffer);
# 5 "an2-ail.h" 2
# 1 "../../ail/src/ail.h" 1




# 1 "../../abf/src/abf.h" 1




# 1 "/usr/include/obstack.h" 1 3
# 153 "/usr/include/obstack.h" 3
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};

struct obstack
{
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  int temp;
  int alignment_mask;




  struct _obstack_chunk *(*chunkfun) (void *, long);
  void (*freefun) (void *, struct _obstack_chunk *);
  void *extra_arg;





  unsigned use_extra_arg:1;
  unsigned maybe_empty_object:1;



  unsigned alloc_failed:1;


};




extern void _obstack_newchunk (struct obstack *, int);
extern void _obstack_free (struct obstack *, void *);
extern int _obstack_begin (struct obstack *, int, int,
			   void *(*)(long), void (*)(void *));
extern int _obstack_begin_1 (struct obstack *, int, int,
			     void *(*)(void *, long),
			     void (*)(void *, void *), void *);
extern int _obstack_memory_used (struct obstack *);
# 215 "/usr/include/obstack.h" 3
void obstack_init (struct obstack *obstack);

void *obstack_alloc (struct obstack *obstack, int size);

void *obstack_copy (struct obstack *obstack, const void *address, int size);
void *obstack_copy0 (struct obstack *obstack, const void *address, int size);

void obstack_free (struct obstack *obstack, void *block);

void obstack_blank (struct obstack *obstack, int size);

void obstack_grow (struct obstack *obstack, const void *data, int size);
void obstack_grow0 (struct obstack *obstack, const void *data, int size);

void obstack_1grow (struct obstack *obstack, int data_char);
void obstack_ptr_grow (struct obstack *obstack, const void *data);
void obstack_int_grow (struct obstack *obstack, int data);

void *obstack_finish (struct obstack *obstack);

int obstack_object_size (struct obstack *obstack);

int obstack_room (struct obstack *obstack);
void obstack_make_room (struct obstack *obstack, int size);
void obstack_1grow_fast (struct obstack *obstack, int data_char);
void obstack_ptr_grow_fast (struct obstack *obstack, const void *data);
void obstack_int_grow_fast (struct obstack *obstack, int data);
void obstack_blank_fast (struct obstack *obstack, int size);

void *obstack_base (struct obstack *obstack);
void *obstack_next_free (struct obstack *obstack);
int obstack_alignment_mask (struct obstack *obstack);
int obstack_chunk_size (struct obstack *obstack);
int obstack_memory_used (struct obstack *obstack);
# 260 "/usr/include/obstack.h" 3
extern void (*obstack_alloc_failed_handler) (void);





extern int obstack_exit_failure;
# 6 "../../abf/src/abf.h" 2
# 1 "/usr/include/stdlib.h" 1 3
# 25 "/usr/include/stdlib.h" 3
# 1 "/usr/include/features.h" 1 3
# 26 "/usr/include/stdlib.h" 2 3







# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 34 "/usr/include/stdlib.h" 2 3
# 94 "/usr/include/stdlib.h" 3
typedef struct
{
  int quot;
  int rem;
}
div_t;



typedef struct
{
  long int quot;
  long int rem;
}
ldiv_t;
# 133 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max (void);



extern double atof (const char *__nptr);

extern int atoi (const char *__nptr);

extern long int atol (const char *__nptr);
# 150 "/usr/include/stdlib.h" 3
extern double strtod (const char *__nptr, char **__endptr);
# 163 "/usr/include/stdlib.h" 3
extern long int strtol (const char *__nptr, char **__endptr, int __base);

extern unsigned long int strtoul (const char *__nptr,
				  char **__endptr, int __base);
# 250 "/usr/include/stdlib.h" 3
extern double __strtod_internal (const char *__nptr,
				 char **__endptr, int __group);
extern float __strtof_internal (const char *__nptr,
				char **__endptr, int __group);
extern long double __strtold_internal (const char *__nptr,
				       char **__endptr, int __group);

extern long int __strtol_internal (const char *__nptr,
				   char **__endptr, int __base, int __group);



extern unsigned long int __strtoul_internal (const char *__nptr,
					     char **__endptr,
					     int __base, int __group);
# 384 "/usr/include/stdlib.h" 3
extern char *l64a (long int __n);


extern long int a64l (const char *__s);


# 1 "/usr/include/sys/types.h" 1 3
# 26 "/usr/include/sys/types.h" 3
# 1 "/usr/include/features.h" 1 3
# 27 "/usr/include/sys/types.h" 2 3



# 1 "/usr/include/bits/types.h" 1 3
# 31 "/usr/include/sys/types.h" 2 3



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 61 "/usr/include/sys/types.h" 3
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 99 "/usr/include/sys/types.h" 3
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3
# 1 "/usr/include/time.h" 1 3
# 67 "/usr/include/time.h" 3
# 1 "/usr/include/bits/types.h" 1 3
# 68 "/usr/include/time.h" 2 3


typedef __time_t time_t;
# 79 "/usr/include/time.h" 3
# 1 "/usr/include/bits/types.h" 1 3
# 80 "/usr/include/time.h" 2 3


typedef __clockid_t clockid_t;
# 91 "/usr/include/time.h" 3
# 1 "/usr/include/bits/types.h" 1 3
# 92 "/usr/include/time.h" 2 3


typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3
# 146 "/usr/include/sys/types.h" 3
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 147 "/usr/include/sys/types.h" 2 3



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 162 "/usr/include/sys/types.h" 3
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;






typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;




typedef int register_t;
# 212 "/usr/include/sys/types.h" 3
# 1 "/usr/include/endian.h" 1 3
# 22 "/usr/include/endian.h" 3
# 1 "/usr/include/features.h" 1 3
# 23 "/usr/include/endian.h" 2 3
# 37 "/usr/include/endian.h" 3
# 1 "/usr/include/bits/endian.h" 1 3
# 38 "/usr/include/endian.h" 2 3
# 213 "/usr/include/sys/types.h" 2 3


# 1 "/usr/include/sys/select.h" 1 3
# 25 "/usr/include/sys/select.h" 3
# 1 "/usr/include/features.h" 1 3
# 26 "/usr/include/sys/select.h" 2 3


# 1 "/usr/include/bits/types.h" 1 3
# 29 "/usr/include/sys/select.h" 2 3


# 1 "/usr/include/bits/select.h" 1 3
# 32 "/usr/include/sys/select.h" 2 3


# 1 "/usr/include/bits/sigset.h" 1 3
# 23 "/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t;




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
}
__sigset_t;
# 35 "/usr/include/sys/select.h" 2 3



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3
# 106 "/usr/include/time.h" 3
struct timespec
{
  __time_t tv_sec;
  long int tv_nsec;
};
# 45 "/usr/include/sys/select.h" 2 3

# 1 "/usr/include/bits/time.h" 1 3
# 63 "/usr/include/bits/time.h" 3
# 1 "/usr/include/bits/types.h" 1 3
# 64 "/usr/include/bits/time.h" 2 3



struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 47 "/usr/include/sys/select.h" 2 3


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;







typedef struct
{






  __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


}
fd_set;






typedef __fd_mask fd_mask;
# 102 "/usr/include/sys/select.h" 3
extern int select (int __nfds, fd_set * __readfds,
		   fd_set * __writefds,
		   fd_set * __exceptfds, struct timeval *__timeout);
# 216 "/usr/include/sys/types.h" 2 3


# 1 "/usr/include/sys/sysmacros.h" 1 3
# 35 "/usr/include/sys/sysmacros.h" 3
# 1 "/usr/include/endian.h" 1 3
# 36 "/usr/include/sys/sysmacros.h" 2 3
# 219 "/usr/include/sys/types.h" 2 3
# 230 "/usr/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 391 "/usr/include/stdlib.h" 2 3






extern long int random (void);


extern void srandom (unsigned int __seed);





extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen);



extern char *setstate (char *__statebuf);







struct random_data
{
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};

extern int random_r (struct random_data *__buf, int32_t * __result);

extern int srandom_r (unsigned int __seed, struct random_data *__buf);

extern int initstate_r (unsigned int __seed, char *__statebuf,
			size_t __statelen, struct random_data *__buf);

extern int setstate_r (char *__statebuf, struct random_data *__buf);





extern int rand (void);

extern void srand (unsigned int __seed);



extern int rand_r (unsigned int *__seed);







extern double drand48 (void);
extern double erand48 (unsigned short int __xsubi[3]);


extern long int lrand48 (void);
extern long int nrand48 (unsigned short int __xsubi[3]);


extern long int mrand48 (void);
extern long int jrand48 (unsigned short int __xsubi[3]);


extern void srand48 (long int __seedval);
extern unsigned short int *seed48 (unsigned short int __seed16v[3]);
extern void lcong48 (unsigned short int __param[7]);





struct drand48_data
{
  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};


extern int drand48_r (struct drand48_data *__buffer, double *__result);
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__buffer, double *__result);


extern int lrand48_r (struct drand48_data *__buffer, long int *__result);
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__buffer, long int *__result);


extern int mrand48_r (struct drand48_data *__buffer, long int *__result);
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__buffer, long int *__result);


extern int srand48_r (long int __seedval, struct drand48_data *__buffer);

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer);

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer);
# 527 "/usr/include/stdlib.h" 3
extern void *malloc (size_t __size);

extern void *calloc (size_t __nmemb, size_t __size);





extern void *realloc (void *__ptr, size_t __size);

extern void free (void *__ptr);



extern void cfree (void *__ptr);



# 1 "/usr/include/alloca.h" 1 3
# 22 "/usr/include/alloca.h" 3
# 1 "/usr/include/features.h" 1 3
# 23 "/usr/include/alloca.h" 2 3


# 1 "/usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h" 1 3
# 26 "/usr/include/alloca.h" 2 3







extern void *alloca (size_t __size);
# 547 "/usr/include/stdlib.h" 2 3




extern void *valloc (size_t __size);
# 561 "/usr/include/stdlib.h" 3
extern void abort (void);



extern int atexit (void (*__func) (void));




extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg);





extern void exit (int __status);
# 587 "/usr/include/stdlib.h" 3
extern char *getenv (const char *__name);



extern char *__secure_getenv (const char *__name);





extern int putenv (char *__string);





extern int setenv (const char *__name, const char *__value, int __replace);


extern int unsetenv (const char *__name);






extern int clearenv (void);
# 623 "/usr/include/stdlib.h" 3
extern char *mktemp (char *__template);







extern int mkstemp (char *__template);
# 650 "/usr/include/stdlib.h" 3
extern char *mkdtemp (char *__template);




extern int system (const char *__command);
# 672 "/usr/include/stdlib.h" 3
extern char *realpath (const char *__name, char *__resolved);






typedef int (*__compar_fn_t) (const void *, const void *);
# 689 "/usr/include/stdlib.h" 3
extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar);



extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar);



extern int abs (int __x);
extern long int labs (long int __x);
# 710 "/usr/include/stdlib.h" 3
extern div_t div (int __numer, int __denom);
extern ldiv_t ldiv (long int __numer, long int __denom);
# 728 "/usr/include/stdlib.h" 3
extern char *ecvt (double __value, int __ndigit, int *__decpt, int *__sign);




extern char *fcvt (double __value, int __ndigit, int *__decpt, int *__sign);




extern char *gcvt (double __value, int __ndigit, char *__buf);




extern char *qecvt (long double __value, int __ndigit,
		    int *__decpt, int *__sign);
extern char *qfcvt (long double __value, int __ndigit,
		    int *__decpt, int *__sign);
extern char *qgcvt (long double __value, int __ndigit, char *__buf);




extern int ecvt_r (double __value, int __ndigit, int *__decpt,
		   int *__sign, char *__buf, size_t __len);
extern int fcvt_r (double __value, int __ndigit, int *__decpt,
		   int *__sign, char *__buf, size_t __len);

extern int qecvt_r (long double __value, int __ndigit,
		    int *__decpt, int *__sign, char *__buf, size_t __len);
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__decpt, int *__sign, char *__buf, size_t __len);






extern int mblen (const char *__s, size_t __n);


extern int mbtowc (wchar_t * __pwc, const char *__s, size_t __n);


extern int wctomb (char *__s, wchar_t __wchar);



extern size_t mbstowcs (wchar_t * __pwcs, const char *__s, size_t __n);

extern size_t wcstombs (char *__s, const wchar_t * __pwcs, size_t __n);







extern int rpmatch (const char *__response);
# 858 "/usr/include/stdlib.h" 3
extern int getloadavg (double __loadavg[], int __nelem);
# 7 "../../abf/src/abf.h" 2
# 1 "/usr/local/include/aterm1.h" 1 3
# 8 "../../abf/src/abf.h" 2
# 1 "/usr/include/stdio.h" 1 3
# 9 "../../abf/src/abf.h" 2

typedef char *ABF;

typedef struct obstack ABFBuffer;




void abf_init_buffer (ABFBuffer * buffer);

void abf_start_stream (ABFBuffer * buffer);

int abf_add_byte (ABFBuffer * buffer, char c);

int abf_add_int (ABFBuffer * buffer, int n);

int abf_add_aterm (ABFBuffer * buffer, ATerm t);

int abf_add_aterm_ptr (ABFBuffer * buffer, ATerm * t);

int abf_add_ptr (ABFBuffer * buffer, void *ptr);

int abf_add_string (ABFBuffer * buffer, char *s);

int abf_add_byte_array (ABFBuffer * buffer, char *s, int len);

ABF abf_finish_stream (ABFBuffer * buffer, int *size);

void abf_release_stream (ABFBuffer * buffer, ABF * abf);

void abf_fwrite (FILE * f, ABF abf, int size);
ABF abf_fread (ABFBuffer * buffer, FILE * f, int size);
# 6 "../../ail/src/ail.h" 2
# 1 "/usr/local/include/aterm2.h" 1 3
# 7 "../../ail/src/ail.h" 2


typedef ATermBlob AIL_ByteCode;
# 6 "an2-ail.h" 2
# 1 "an2-ail-impl.h" 1
# 7 "an2-ail.h" 2
# 476 "an2-ail.h"
char *AN2_getStringForOpcode (int op);
void AN2_disassemble (FILE * f, AIL_ByteCode bc);
void AN2_compile (FILE * f, AIL_ByteCode bc);
# 3 "avm.c" 2
# 1 "support/machine.h" 1




# 1 "../../ail/src/ail.h" 1
# 6 "support/machine.h" 2
# 1 "../../dn2/src/dn2.h" 1




# 1 "/usr/local/include/aterm1.h" 1 3
# 6 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/data.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/data.h" 2

# 1 "../../dn2/src/list.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/list.h" 2
# 8 "../../dn2/src/data.h" 2
# 7 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/datum.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/datum.h" 2
# 8 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/int.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/int.h" 2
# 9 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/bool.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/bool.h" 2
# 10 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/cell.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/cell.h" 2
# 11 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/list.h" 1
# 12 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/agent.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/agent.h" 2
# 13 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/map.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/map.h" 2
# 14 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/pair.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/pair.h" 2
# 15 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/set.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/set.h" 2
# 1 "../../dn2/src/bbtree.h" 1






# 1 "/usr/include/stdio.h" 1 3
# 8 "../../dn2/src/bbtree.h" 2
# 1 "/usr/local/include/aterm2.h" 1 3
# 9 "../../dn2/src/bbtree.h" 2


typedef ATermAppl ATermBBTree;
# 20 "../../dn2/src/bbtree.h"
typedef int (*ATermComparator) (ATerm, ATerm);


extern ATermBBTree ATemptyBBTree;







void ATbbtreeInit ();
# 48 "../../dn2/src/bbtree.h"
int ATbbtreeSize (ATermBBTree t);







ATbool ATbbtreeMember (ATermBBTree t, ATerm elt, ATermComparator comparator);
# 66 "../../dn2/src/bbtree.h"
ATerm ATbbtreeGet (ATermBBTree tree, ATerm elt, ATermComparator comparator);







ATermBBTree ATmakeBBTree (ATerm elt, ATermBBTree l, ATermBBTree r);







ATermBBTree ATbbtreeInsert (ATermBBTree t, ATerm elt,
			    ATermComparator comparator);







ATermBBTree ATbbtreeDelete (ATermBBTree t, ATerm elt,
			    ATermComparator comparator);







ATermBBTree ATbbtreeUnion (ATermBBTree t1, ATermBBTree t2,
			   ATermComparator comparator);







ATermBBTree ATbbtreeHUnion (ATermBBTree t1, ATermBBTree t2,
			    ATermComparator comparator);







ATermBBTree ATbbtreeDifference (ATermBBTree t1, ATermBBTree t2,
				ATermComparator comparator);







ATermBBTree ATbbtreeIntersection (ATermBBTree t1, ATermBBTree t2,
				  ATermComparator comparator);
# 131 "../../dn2/src/bbtree.h"
void ATftreeToDot (FILE * f, ATermBBTree t);
# 7 "../../dn2/src/set.h" 2
# 1 "../../dn2/src/bool.h" 1
# 8 "../../dn2/src/set.h" 2
# 1 "../../dn2/src/int.h" 1
# 9 "../../dn2/src/set.h" 2



int AN_setElementComparator (ATerm a1, ATerm a2);
# 16 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/token.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/token.h" 2
# 17 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/stack.h" 1




# 1 "/usr/local/include/aterm2.h" 1 3
# 6 "../../dn2/src/stack.h" 2

typedef struct _ATermList *AN_Stack;
# 18 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/store.h" 1



# 1 "/usr/local/include/aterm2.h" 1 3
# 5 "../../dn2/src/store.h" 2
# 1 "/usr/include/stdio.h" 1 3
# 6 "../../dn2/src/store.h" 2




typedef ATermTable AN_Store;

void AN_init_store (AN_Store * s);
void AN_release_store (AN_Store * s);
# 22 "../../dn2/src/store.h"
void AN_fprint_store (FILE * f, AN_Store s);
# 19 "../../dn2/src/dn2.h" 2
# 1 "../../dn2/src/taggedbuffers.h" 1







# 1 "/usr/local/include/aterm2.h" 1 3
# 9 "../../dn2/src/taggedbuffers.h" 2

typedef ATermTable AN_TaggedBuffers;


void AN_init_tagged_buffers (AN_TaggedBuffers * t);
void AN_release_tagged_buffers (AN_TaggedBuffers * t);
# 20 "../../dn2/src/dn2.h" 2

typedef struct _ATerm *AN_Data;
# 7 "support/machine.h" 2
# 1 "support/schedule.h" 1




# 1 "support/acb.h" 1




# 1 "/usr/include/stdlib.h" 1 3
# 6 "support/acb.h" 2

# 1 "../../dn2/src/dn2.h" 1
# 8 "support/acb.h" 2
# 1 "support/frames.h" 1



# 1 "support/address.h" 1




typedef char *AN_Address;
# 5 "support/frames.h" 2



typedef AN_Address AN_Frame;

typedef struct _AN_Frames
{
  int top;
  AN_Frame *stack;
}
AN_Frames;
# 27 "support/frames.h"
void AN_alloc_frames (AN_Frames * fs);
void AN_init_frames (AN_Frames * fs);
void AN_release_frames (AN_Frames * fs);
# 9 "support/acb.h" 2
# 1 "support/address.h" 1
# 10 "support/acb.h" 2
# 1 "support/saved.h" 1



# 1 "support/context.h" 1



# 1 "../../dn2/src/dn2.h" 1
# 5 "support/context.h" 2
# 1 "support/throwable.h" 1




typedef enum
{ AN_EXCEPTION = 1, AN_FAILURE = 2 }
AN_Throwable;
# 6 "support/context.h" 2
# 1 "support/address.h" 1
# 7 "support/context.h" 2
# 1 "support/frames.h" 1
# 8 "support/context.h" 2

typedef struct _AN_Context
{
  AN_Throwable kind;
  AN_Stack args, nresult, eresult, scope;
  AN_Address handler;
  AN_Frames frames;
}
AN_Context;
# 24 "support/context.h"
void AN_init_context (AN_Context * c);
void AN_release_context (AN_Context * c);
# 5 "support/saved.h" 2



typedef struct _AN_Saved
{
  int top;
  AN_Context *stack;
}
AN_Saved;

void AN_alloc_saved (AN_Saved * s);
void AN_init_saved (AN_Saved * s);
void AN_free_saved (AN_Saved * s);
# 11 "support/acb.h" 2
# 1 "support/exits.h" 1




typedef int AN_ExitStatus;
# 12 "support/acb.h" 2

typedef struct _AN_ACB
{
  AN_Frames frame_stack;
  AN_Stack arg_stack;
  AN_Stack eresult, nresult;
  AN_Stack scope_stack;
  AN_Saved saved_stack;
  AN_TaggedBuffers tagged_buffers;
  AN_Data agent;
  AN_Address pc;
  AN_Data nreg, ereg;
  AN_ExitStatus exit_status;
  int lock;
  struct _AN_ACB *prev;
}
 *AN_ACB;


void AN_alloc_acb (AN_ACB * acb);
void AN_init_acb (AN_ACB * acb);
void AN_release_acb (AN_ACB * acb);

void AN_fprint_acb (FILE * f, AN_ACB acb);
# 6 "support/schedule.h" 2

typedef struct _AN_Schedule
{
  AN_ACB defuncts;
  AN_ACB first;
  AN_ACB last;
}
 *AN_Schedule;

void AN_alloc_schedule (AN_Schedule * s);
void AN_init_schedule (AN_Schedule * s, AN_ACB acb);
void AN_release_schedule (AN_Schedule * s);
# 52 "support/schedule.h"
void AN_schedule_prepend_acb (AN_Schedule schedule, AN_ACB acb);
void AN_schedule_remove_acb (AN_Schedule schedule, AN_ACB acb);
# 8 "support/machine.h" 2
# 1 "support/address.h" 1
# 9 "support/machine.h" 2


typedef ATermTable AN_ReflectionCache;

void AN_init_reflection_cache (AN_ReflectionCache * rc);
void AN_release_reflection_cache (AN_ReflectionCache * rc);
# 28 "support/machine.h"
typedef struct _AN_Machine
{
  ABFBuffer *buffer;
  AN_Store store;
  AN_Schedule schedule;
  AN_Address code_start, code_end, exit_address;

  int cell_counter, agent_counter;
  AN_ReflectionCache reflection_cache;
}
 *AN_Machine;


void AN_alloc_machine (AN_Machine * machine);
void AN_init_machine (AN_Machine * machine);
void AN_release_machine (AN_Machine * machine);

void AN_load_ail_program (AN_Machine m, AIL_ByteCode prg,
			  AN_Address exit_address);
void AN_load_program (AN_Machine m, AN_Address start, AN_Address end,
		      AN_Address exit_address);

void AN_fprint_debug_info (FILE * f, AN_Machine m);
# 4 "avm.c" 2

int
main (int argc, char **argv)
{
  static void *AN2_opcode_labels[] = {[0] && do_abs,[1] && do_prov,[2]
      && do_eprov,[3] && do_publish,[4] && do_epublish,[5] && do_unpublish,[6]
      && do_enter,[7] && do_leave,[8] && do_trye,[9] && do_tryf,[10]
      && do_catch,[11] && do_goto,[12] && do_return,[13] && do_lock,[14]
      && do_unlock,[15] && do_frame,[16] && do_enact,[17] && do_raise,[18]
      && do_throw,[19] && do_fail,[20] && do_merge,[21] && do_emerge,[22]
      && do_push,[23] && do_epush,[24] && do_drop,[25] && do_edrop,[26]
      && do_copy,[27] && do_ecopy,[28] && do_create,[29] && do_inspect,[30]
      && do_destroy,[31] && do_update,[32] && do_activate,[33]
      && do_deactivate,[34] && do_send,[35] && do_receive,[36] && do_time,[37]
      && do_agent,[38] && do_scope,[39] && do_random,[40] && do_add,[41]
      && do_sub,[42] && do_mul,[43] && do_csub,[44] && do_bind,[45]
      && do_find,[46] && do_not,[47] && do_override,[48] && do_d_union,[49]
      && do_then,[50] && do_and_then,[51] && do_and,[52] && do_provide,[53]
      && do_exceptionally,[54] && do_and_exceptionally,[55]
      && do_otherwise,[56] && do_indivisibly,[57] && do_hence,[58]
      && do_cast,[59] && do_component,[60] && do_eq,[61] && do_lt,[62]
      && do_gt,[63] && do_leq,[64] && do_geq,[65] && do_tupleToList,[66]
      && do_debug,[67] && do_yield };
  ATerm bos;
  AIL_ByteCode bc = ((void *) 0);
  FILE *f;
  AN_Machine m;
  ABF abf;
  int n, i;
  ATinit (argc, argv, &bos);
  f = fopen (argv[1], "r");
  bc = ((ATermBlob) ATreadFromBinaryFile (f));

  AN_alloc_machine (&m);
  AN_init_machine (&m);
  AN_load_ail_program (m, bc, &&THE_END);

  goto AN2_start;

  {
  AN2_start:goto
      *(AN2_opcode_labels
	[(*((((((((m)->schedule)->last))))->pc)))]);
  do_abs:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AIL_ByteCode bc =
	((ATermBlob)
	 (ATreadFromBinaryString
	  (((((((((((m)->schedule)->last))))->pc)))) + sizeof (int),
	   (*((int *) (((((((((((m)->schedule)->last))))->pc))))))))));
      ((((((((((((m)->schedule)->last))))->pc)))) +=
	(sizeof (int) +
	 (*((int *) ((((((((((m)->schedule)->last))))->pc)))))))));
      {
	AN_machine_put_nreg (m, AN_makeAction (bc));
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_prov:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATerm d =
	(ATreadFromBinaryString
	 ((((((((((m)->schedule)->last))))->pc))) + sizeof (int),
	  (*((int *) ((((((((((m)->schedule)->last))))->pc))))))));
      ((((((((((m)->schedule)->last))))->pc))) +=
       (sizeof (int) + (*((int *) (((((((((m)->schedule)->last))))->pc)))))));
      {
	(((((((((m)->schedule)->last)))->nreg) = d)));
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_eprov:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATerm d =
	(ATreadFromBinaryString
	 ((((((((((m)->schedule)->last))))->pc))) + sizeof (int),
	  (*((int *) ((((((((((m)->schedule)->last))))->pc))))))));
      ((((((((((m)->schedule)->last))))->pc))) +=
       (sizeof (int) + (*((int *) (((((((((m)->schedule)->last))))->pc)))))));
      {
	(((((((((m)->schedule)->last)))->ereg) = d)));
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_publish:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((((m)->schedule)->last)))->arg_stack) =
	  (AN_Stack) (ATinsert
		      ((ATermList) (((((m)->schedule)->last)))->arg_stack,
		       (ATerm) (((((m)->schedule)->last)))->nreg))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_epublish:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((((m)->schedule)->last)))->arg_stack) =
	  (AN_Stack) (ATinsert
		      ((ATermList) (((((m)->schedule)->last)))->arg_stack,
		       (ATerm) (((((m)->schedule)->last)))->ereg))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_unpublish:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (((((((((m)->schedule)->last)))->arg_stack) =
	 (AN_Stack) ((((ATermList) (((((m)->schedule)->last)))->arg_stack)->
		      tail)))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_enter:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (((((((((m)->schedule)->last)))->scope_stack) =
	 (AN_Stack) (ATinsert
		     ((ATermList) (((((m)->schedule)->last)))->scope_stack,
		      (ATerm) (((((m)->schedule)->last)))->nreg)))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_leave:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (((((((((m)->schedule)->last)))->scope_stack) =
	 (AN_Stack) ((((ATermList) (((((m)->schedule)->last)))->scope_stack)->
		      tail)))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_trye:(++(((((((((m)->schedule)->last))))->pc))));
    {
      void *label =
	(*((int *) (((((((((m)->schedule)->last))))->pc))))) +
	((((((((m)->schedule)->last))))->pc));
      ((((((((((m)->schedule)->last))))->pc))) += (sizeof (int)));
      {
	(
	  {
	  (((((((m)->schedule)->last)))->saved_stack).top++);
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).kind =
	   (AN_EXCEPTION));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).handler =
	   ((label)));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).args =
	   ((((((m)->schedule)->last)))->arg_stack));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).nresult =
	   ((((((m)->schedule)->last)))->nresult));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).eresult =
	   ((((((m)->schedule)->last)))->eresult));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).scope =
	   ((((((m)->schedule)->last)))->scope_stack));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).frames =
	   ((((((m)->schedule)->last)))->frame_stack));
	  }
	);
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_tryf:(++(((((((((m)->schedule)->last))))->pc))));
    {
      void *label =
	(*((int *) (((((((((m)->schedule)->last))))->pc))))) +
	((((((((m)->schedule)->last))))->pc));
      ((((((((((m)->schedule)->last))))->pc))) += (sizeof (int)));
      {
	(
	  {
	  (((((((m)->schedule)->last)))->saved_stack).top++);
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).kind =
	   (AN_FAILURE));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).handler =
	   ((label)));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).args =
	   ((((((m)->schedule)->last)))->arg_stack));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).nresult =
	   ((((((m)->schedule)->last)))->nresult));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).eresult =
	   ((((((m)->schedule)->last)))->eresult));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).scope =
	   ((((((m)->schedule)->last)))->scope_stack));
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).frames =
	   ((((((m)->schedule)->last)))->frame_stack));
	  }
	);
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_catch:(++(((((((((m)->schedule)->last))))->pc))));
    {
      void *label =
	(*((int *) (((((((((m)->schedule)->last))))->pc))))) +
	((((((((m)->schedule)->last))))->pc));
      ((((((((((m)->schedule)->last))))->pc))) += (sizeof (int)));
      {
	(((((((((m)->schedule)->last)))->saved_stack).top)--));
	{
	  {
	    ((((((m)->schedule)->last)))->pc = (label)));
	  };
	};
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_goto:(++(((((((((m)->schedule)->last))))->pc))));
    {
      void *label =
	(*((int *) (((((((((m)->schedule)->last))))->pc))))) +
	((((((((m)->schedule)->last))))->pc));
      ((((((((((m)->schedule)->last))))->pc))) += (sizeof (int)));
      {
	{
	  ((((((m)->schedule)->last)))->pc = (label)));
	};
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_return:(++(((((((((m)->schedule)->last))))->pc))));
    {
      if ((((((((((((m)->schedule)->last)))->frame_stack).
	       stack[((((((m)->schedule)->last)))->frame_stack).top])))) ==
	   (m)->exit_address))
	{
	  AN_machine_set_exit_status (0);
	  goto *(AN_machine_get_exit_adr (m));
	}
      {
	{
	  ((((((m)->schedule)->last)))->pc =
	   ((((((((((m)->schedule)->last)))->frame_stack).
	       stack[(((((((m)->schedule)->last)))->frame_stack).
		      top)--]))))));
	};
      };
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_lock:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((m)->schedule)->last))))->lock++));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_unlock:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((m)->schedule)->last))))->lock--));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_frame:(++(((((((((m)->schedule)->last))))->pc))));
    {
      void *label =
	(*((int *) (((((((((m)->schedule)->last))))->pc))))) +
	((((((((m)->schedule)->last))))->pc));
      ((((((((((m)->schedule)->last))))->pc))) += (sizeof (int)));
      {
	(AN_acb_frame ((((((m)->schedule)->last))), label));
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_enact:(++(((((((((m)->schedule)->last))))->pc))));
    {
      {
	{
	  ((((((m)->schedule)->last)))->pc =
	   (AN_getActionAddress (((((((((m)->schedule)->last)))->nreg)))))));
	};
      };
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_raise:(++(((((((((m)->schedule)->last))))->pc))));
    {
      {
	((((((((m)->schedule)->last)))->ereg =
	   (((((ATermList) (((((m)->schedule)->last)))->arg_stack)->
	      head))))));
      };
      {
	(
	  {
	  {
	  while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		 &&
		 (((((((((m)->schedule)->last)))->saved_stack).
		    stack[((((((m)->schedule)->last)))->saved_stack).top])).
		  kind) !=
		 AN_EXCEPTION) ((((((((m)->schedule)->last)))->saved_stack).
				 top)--);};
	  if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	  {
	  (((((m)->schedule)->last)))->pc =
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).handler);
	  (((((m)->schedule)->last)))->arg_stack =
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).args);
	  (((((m)->schedule)->last)))->nresult =
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).nresult);
	  (((((m)->schedule)->last)))->nresult =
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).eresult);
	  (((((m)->schedule)->last)))->scope_stack =
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).scope);
	  (((((m)->schedule)->last)))->frame_stack =
	  (((((((((m)->schedule)->last)))->saved_stack).
	     stack[((((((m)->schedule)->last)))->saved_stack).top])).frames);}
	  }
	);
	if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	  {
	    AN_machine_set_exit_status (m, 1);
	    goto *(((m)->exit_address));
	  }
	AN_perform_goto (m,
			 (((((((((((m)->schedule)->last)))->saved_stack).
			      stack[(((((((m)->schedule)->last)))->
				      saved_stack).top)--])).handler))));
      };
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_throw:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (
	{
	{
	while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
	       &&
	       (((((((((m)->schedule)->last)))->saved_stack).
		  stack[((((((m)->schedule)->last)))->saved_stack).top])).
		kind) !=
	       AN_EXCEPTION) ((((((((m)->schedule)->last)))->saved_stack).
			       top)--);};
	if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	{
	(((((m)->schedule)->last)))->pc =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).handler);
	(((((m)->schedule)->last)))->arg_stack =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).args);
	(((((m)->schedule)->last)))->nresult =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).nresult);
	(((((m)->schedule)->last)))->nresult =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).eresult);
	(((((m)->schedule)->last)))->scope_stack =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).scope);
	(((((m)->schedule)->last)))->frame_stack =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).frames);}
	}
      );
      if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	{
	  AN_machine_set_exit_status (m, 1);
	  goto *(((m)->exit_address));
	}
      AN_perform_goto (m,
		       (((((((((((m)->schedule)->last)))->saved_stack).
			    stack[(((((((m)->schedule)->last)))->saved_stack).
				   top)--])).handler))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_fail:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (
	{
	{
	while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
	       &&
	       (((((((((m)->schedule)->last)))->saved_stack).
		  stack[((((((m)->schedule)->last)))->saved_stack).top])).
		kind) !=
	       AN_FAILURE) ((((((((m)->schedule)->last)))->saved_stack).
			     top)--);};
	if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	{
	(((((m)->schedule)->last)))->pc =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).handler);
	(((((m)->schedule)->last)))->arg_stack =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).args);
	(((((m)->schedule)->last)))->nresult =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).nresult);
	(((((m)->schedule)->last)))->nresult =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).eresult);
	(((((m)->schedule)->last)))->scope_stack =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).scope);
	(((((m)->schedule)->last)))->frame_stack =
	(((((((((m)->schedule)->last)))->saved_stack).
	   stack[((((((m)->schedule)->last)))->saved_stack).top])).frames);}
	}
      );
      if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	{
	  AN_machine_set_exit_status (m, 2);
	  goto *(((m)->exit_address));
	}
      AN_perform_goto (m,
		       (((((((((((m)->schedule)->last)))->saved_stack).
			    stack[(((((((m)->schedule)->last)))->saved_stack).
				   top)--])).handler))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_merge:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (((((((((m)->schedule)->last)))->nresult) = (
						    {
						    ATerm __d1 =
						    ((((((m)->schedule)->
							last)))->nresult),
						    __d2 =
						    (((((ATermList)
							(((((m)->schedule)->
							   last)))->nreg)->
						       head)));
						    ATerm __m;
						    if ((((((__d1)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)
							&&
							(((((__d2)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)) __m =
						    ATconcat (__d1, __d2);
						    else
						    if ((((((__d1)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)) __m =
						    ATappend ((ATermList)
							      __d1, __d2);
						    else
						    if ((((((__d2)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)) __m =
						    ATinsert ((ATermList)
							      __d2, __d1);
						    else
						    __m =
						    (ATerm)
						    ATinsert (ATmakeList1
							      (__d2), __d1);
						    __m;}
	 ), (((((((m)->schedule)->last)))->nreg) =
	     (AN_Stack) ((((ATermList) (((((m)->schedule)->last)))->nreg)->
			  tail))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_emerge:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (((((((((m)->schedule)->last)))->eresult) = (
						    {
						    ATerm __d1 =
						    ((((((m)->schedule)->
							last)))->eresult),
						    __d2 =
						    (((((ATermList)
							(((((m)->schedule)->
							   last)))->ereg)->
						       head)));
						    ATerm __m;
						    if ((((((__d1)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)
							&&
							(((((__d2)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)) __m =
						    ATconcat (__d1, __d2);
						    else
						    if ((((((__d1)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)) __m =
						    ATappend ((ATermList)
							      __d1, __d2);
						    else
						    if ((((((__d2)->
							    header) & ((1 <<
									5) |
								       (1 <<
									6) |
								       (1 <<
									7)))
							  >> 5) == 4)) __m =
						    ATinsert ((ATermList)
							      __d2, __d1);
						    else
						    __m =
						    (ATerm)
						    ATinsert (ATmakeList1
							      (__d2), __d1);
						    __m;}
	 ), (((((((m)->schedule)->last)))->ereg) =
	     (AN_Stack) ((((ATermList) (((((m)->schedule)->last)))->ereg)->
			  tail))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_push:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((((m)->schedule)->last)))->nreg) =
	  (AN_Stack) (ATinsert
		      ((ATermList) (((((m)->schedule)->last)))->nreg,
		       (ATerm) (((((m)->schedule)->last)))->nresult))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_epush:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((((m)->schedule)->last)))->ereg) =
	  (AN_Stack) (ATinsert
		      ((ATermList) (((((m)->schedule)->last)))->ereg,
		       (ATerm) (((((m)->schedule)->last)))->eresult))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_drop:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((((m)->schedule)->last)))->nresult) =
	  (AN_Stack) ((((ATermList) (((((m)->schedule)->last)))->nresult)->
		       tail))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_edrop:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((((m)->schedule)->last)))->eresult) =
	  (AN_Stack) ((((ATermList) (((((m)->schedule)->last)))->eresult)->
		       tail))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_copy:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((m)->schedule)->last)))->nreg =
	 (((((ATermList) (((((m)->schedule)->last)))->arg_stack)->head))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_ecopy:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ((((((((m)->schedule)->last)))->ereg =
	 (((((ATermList) (((((m)->schedule)->last)))->arg_stack)->head))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_create:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data cell = ((ATmake ("cell(<int>)", m->cell_counter++)));
      (((((((((m)->schedule)->last)))->nreg) =
	 AN_machine_update (m, cell,
			    ((((((((m)->schedule)->last)))->nreg)))))));
      (((((((((m)->schedule)->last)))->nreg) = cell)));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_inspect:(++(((((((((m)->schedule)->last))))->pc))));
    {
      if (((ATtableGet
	    (m->store,
	     (ATerm) ((((((((m)->schedule)->last)))->nreg)))) !=
	    ((void *) 0))))
	(((((((((m)->schedule)->last)))->nreg) =
	   AN_machine_inspect (m, ((((((((m)->schedule)->last)))->nreg)))))));
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_destroy:(++(((((((((m)->schedule)->last))))->pc))));
    {
      if (((ATtableGet
	    (m->store,
	     (ATerm) ((((((((m)->schedule)->last)))->nreg)))) !=
	    ((void *) 0))))
	{
	  AN_machine_destroy (m, ((((((((m)->schedule)->last)))->nreg))));
	  (((((((((m)->schedule)->last)))->nreg) = (ATempty))));
	}
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_update:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      if (((ATtableGet (m->store, (ATerm) (((d)->head))) != ((void *) 0))))
	{
	  AN_machine_update (m, (((d)->head)), (((((d)->tail))->head)));
	  (((((((((m)->schedule)->last)))->nreg) = (ATempty))));
	}
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_activate:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_deactivate:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_send:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_receive:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_time:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_agent:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_scope:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_machine_put_nreg (m, AN_machine_top_scope (m));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_random:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_add:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m,
			   ((ATmake
			     ("int(<int>)",
			      ((((ATermInt)
				 (*
				  ((ATerm *) ((ATermAppl) AN_getElt1 (d)) +
				   2 + (0))))->value)) +
			      ((((ATermInt)
				 (*
				  ((ATerm *) ((ATermAppl) AN_getElt2 (d)) +
				   2 + (0))))->value))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_sub:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m,
			   ((ATmake
			     ("int(<int>)",
			      ((((ATermInt)
				 (*
				  ((ATerm *) ((ATermAppl) AN_getElt1 (d)) +
				   2 + (0))))->value)) -
			      ((((ATermInt)
				 (*
				  ((ATerm *) ((ATermAppl) AN_getElt2 (d)) +
				   2 + (0))))->value))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_mul:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m,
			   ((ATmake
			     ("int(<int>)",
			      ((((ATermInt)
				 (*
				  ((ATerm *) ((ATermAppl) AN_getElt1 (d)) +
				   2 +
				   (0))))->value)) *
			      ((((ATermInt)
				 (*
				  ((ATerm *) ((ATermAppl) AN_getElt2 (d)) +
				   2 + (0))))->value))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_csub:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m, (
				{
				int __n1 =
				((((ATermInt)
				   (*
				    ((ATerm *) ((ATermAppl) AN_getElt1 (d)) +
				     2 + (0))))->value));
				int __n2 =
				((((ATermInt)
				   (*
				    ((ATerm *) ((ATermAppl) AN_getElt2 (d)) +
				     2 + (0))))->value));
				((__n1 > __n2) ? (__n1 - __n2) : 0);
				}
			   ));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_bind:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m,
			   AN_giveBinding (AN_getElt1 (d), AN_getElt2 (d)));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_find:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m, AN_giveBound (AN_getElt1 (d), AN_getElt2 (d)));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_not:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_machine_put_nreg (m,
			   ((ATmake
			     ("bool(<int>)",
			      !((((ATermInt)
				  (*
				   ((ATerm
				     *) ((ATermAppl) ((((((((m)->schedule)->
							   last)))->nreg)))) +
				    2 + (0))))->value))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_override:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m,
			   AN_giveOverriding (AN_getElt1 (d),
					      AN_getElt2 (d)));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_d_union:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      AN_machine_put_nreg (m,
			   AN_giveDisjointUnion (AN_getElt1 (d),
						 AN_getElt2 (d)));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_then:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_and_then:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_and:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_provide:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_exceptionally:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_and_exceptionally:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_otherwise:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_indivisibly:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_hence:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATabort ("Not yet implemented.\n");
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_cast:(++(((((((((m)->schedule)->last))))->pc))));
    {
      ATerm d =
	(ATreadFromBinaryString
	 ((((((((((m)->schedule)->last))))->pc))) + sizeof (int),
	  (*((int *) ((((((((((m)->schedule)->last))))->pc))))))));
      ((((((((((m)->schedule)->last))))->pc))) +=
       (sizeof (int) + (*((int *) (((((((((m)->schedule)->last))))->pc)))))));
      {
	if (!
	    (ATmatchTerm
	     (((((((((m)->schedule)->last)))->nreg))), d, ((void *) 0))));
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_component:(++(((((((((m)->schedule)->last))))->pc))));
    {
      int n = (*((int *) (((((((((m)->schedule)->last))))->pc)))));
      ((((((((((m)->schedule)->last))))->pc))) += (sizeof (int)));
      {
	AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
	if ((((((d)->header) & ((1 << 5) | (1 << 6) | (1 << 7))) >> 5) == 4)
	    && (n) <= (((int) (((d)->header) >> 8))))
	  AN_machine_put_nreg (m, (ATelementAt (d, n - 1)));
	else
	  {
	    AN_machine_put_ereg (m, (ATempty));
	    {
	      (
		{
		{
		while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		       &&
		       (((((((((m)->schedule)->last)))->saved_stack).
			  stack[((((((m)->schedule)->last)))->saved_stack).
				top])).kind) !=
		       AN_EXCEPTION) ((((((((m)->schedule)->last)))->
					saved_stack).top)--);};
		if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
		{
		(((((m)->schedule)->last)))->pc =
		(((((((((m)->schedule)->last)))->saved_stack).
		   stack[((((((m)->schedule)->last)))->saved_stack).top])).
		 handler);
		(((((m)->schedule)->last)))->arg_stack =
		(((((((((m)->schedule)->last)))->saved_stack).
		   stack[((((((m)->schedule)->last)))->saved_stack).top])).
		 args);
		(((((m)->schedule)->last)))->nresult =
		(((((((((m)->schedule)->last)))->saved_stack).
		   stack[((((((m)->schedule)->last)))->saved_stack).top])).
		 nresult);
		(((((m)->schedule)->last)))->nresult =
		(((((((((m)->schedule)->last)))->saved_stack).
		   stack[((((((m)->schedule)->last)))->saved_stack).top])).
		 eresult);
		(((((m)->schedule)->last)))->scope_stack =
		(((((((((m)->schedule)->last)))->saved_stack).
		   stack[((((((m)->schedule)->last)))->saved_stack).top])).
		 scope);
		(((((m)->schedule)->last)))->frame_stack =
		(((((((((m)->schedule)->last)))->saved_stack).
		   stack[((((((m)->schedule)->last)))->saved_stack).top])).
		 frames);}
		}
	      );
	      if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
		{
		  AN_machine_set_exit_status (m, 1);
		  goto *(((m)->exit_address));
		}
	      AN_perform_goto (m,
			       (((((((((((m)->schedule)->last)))->
				     saved_stack).
				    stack[(((((((m)->schedule)->last)))->
					    saved_stack).top)--])).
				  handler))));
	    };
	  };
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_eq:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      if ((((ATbool)
	    ((ATerm) ((((d)->head))) == (ATerm) ((((((d)->tail))->head)))))))
	(((((((((m)->schedule)->last)))->nreg) = (ATempty))));
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_lt:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      if (AN_checkLt ((((d)->head)), (((((d)->tail))->head))))
	(((((((((m)->schedule)->last)))->nreg) = (ATempty))));
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_gt:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      if (AN_checkGt ((((d)->head)), (((((d)->tail))->head))))
	(((((((((m)->schedule)->last)))->nreg) = (ATempty))));
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_leq:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      if (AN_checkLeq ((((d)->head)), (((((d)->tail))->head))))
	(((((((((m)->schedule)->last)))->nreg) = (ATempty))));
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_geq:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_Data d = ((((((((m)->schedule)->last)))->nreg)));
      if (AN_checkGeq ((((d)->head)), (((((d)->tail))->head))))
	(((((((((m)->schedule)->last)))->nreg) = (ATempty))));
      else
	{
	  AN_machine_put_ereg (m, (ATempty));
	  {
	    (
	      {
	      {
	      while ((((((((m)->schedule)->last)))->saved_stack).top >= 0)
		     &&
		     (((((((((m)->schedule)->last)))->saved_stack).
			stack[((((((m)->schedule)->last)))->saved_stack).
			      top])).kind) !=
		     AN_EXCEPTION) ((((((((m)->schedule)->last)))->
				      saved_stack).top)--);};
	      if ((((((((m)->schedule)->last)))->saved_stack).top >= 0))
	      {
	      (((((m)->schedule)->last)))->pc =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       handler);
	      (((((m)->schedule)->last)))->arg_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       args);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       nresult);
	      (((((m)->schedule)->last)))->nresult =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       eresult);
	      (((((m)->schedule)->last)))->scope_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       scope);
	      (((((m)->schedule)->last)))->frame_stack =
	      (((((((((m)->schedule)->last)))->saved_stack).
		 stack[((((((m)->schedule)->last)))->saved_stack).top])).
	       frames);}
	      }
	    );
	    if (!(((((((((m)->schedule)->last)))->saved_stack).top >= 0))))
	      {
		AN_machine_set_exit_status (m, 1);
		goto *(((m)->exit_address));
	      }
	    AN_perform_goto (m,
			     (((((((((((m)->schedule)->last)))->saved_stack).
				  stack[(((((((m)->schedule)->last)))->
					  saved_stack).top)--])).handler))));
	  };
	};
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_tupleToList:(++(((((((((m)->schedule)->last))))->pc))));
    {
      (((((((((m)->schedule)->last)))->nreg) =
	 ((ATmake
	   ("list([<list>])", ((((((((m)->schedule)->last)))->nreg)))))))));
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_debug:(++(((((((((m)->schedule)->last))))->pc))));
    {
      AN_fprint_debug_info (stderr, m);
    };
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  do_yield:(++(((((((((m)->schedule)->last))))->pc))));
    {
      void *label =
	(*((int *) (((((((((m)->schedule)->last))))->pc))))) +
	((((((((m)->schedule)->last))))->pc));
      ((((((((((m)->schedule)->last))))->pc))) += (sizeof (int)));
      {
	ATabort ("Not yet implemented.\n");
      };
    }
    goto *(AN2_opcode_labels[(*((((((((m)->schedule)->last))))->pc)))]);
  AN2_end:;
  };

THE_END:
  AN_fprint_debug_info (stderr, m);


  return 0;
}
