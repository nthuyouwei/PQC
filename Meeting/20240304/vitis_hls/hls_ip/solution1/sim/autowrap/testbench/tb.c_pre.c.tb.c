// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Tool Version Limit: 2022.04
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "/home/ubuntu/FalconHLS/code_hls/tb.c"
# 1 "/home/ubuntu/FalconHLS/code_hls/tb.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 149 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 439 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 440 "/usr/include/features.h" 2 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 31 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef int wchar_t;
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 1 3 4
# 30 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





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
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4








typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 77 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
# 173 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ )) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 279 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ )) ;
# 292 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ )) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 379 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
          ;
# 577 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;







extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 2 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 214 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
# 251 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;





# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56));

}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 75 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 87 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 88 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ ));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







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

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ ));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));







extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
                                         ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__)) ;







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__))
                                      ;



extern void free (void *__ptr) __attribute__ ((__nothrow__ ));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ ));
# 569 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
                                         ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 591 "/usr/include/stdlib.h" 3 4
extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 610 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
# 629 "/usr/include/stdlib.h" 3 4
extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 647 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 784 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 820 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 840 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ ));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ ));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 957 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1003 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1014 "/usr/include/stdlib.h" 2 3 4
# 3 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 122 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 154 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 385 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 410 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 428 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));




# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4
# 34 "/usr/include/strings.h" 3 4
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 4 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 72 "/usr/include/time.h" 3 4
extern clock_t clock (void) __attribute__ ((__nothrow__ ));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ ));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ ));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));
# 104 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ ));
# 119 "/usr/include/time.h" 3 4
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ ));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ ));




extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));




extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ ));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ ));






extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ ));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ ));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ ));



extern int daylight;
extern long int timezone;
# 190 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern int dysize (int __year) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
# 205 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ ));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ ));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ ));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ ));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ ));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ ));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ ));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ ));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ ));
# 5 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/math.h" 2 3 4
# 40 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 41 "/usr/include/math.h" 2 3 4
# 138 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 1 3 4
# 139 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
typedef float float_t;
typedef double double_t;
# 190 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-logb.h" 1 3 4
# 191 "/usr/include/math.h" 2 3 4
# 233 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 1 3 4
# 234 "/usr/include/math.h" 2 3 4
# 289 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));


extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
# 290 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));

extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));

extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));


extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));

extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));

extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));




extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));

extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));

extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
# 85 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));

extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));

extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));





extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));


extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));


extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));


extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));




extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));


extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));






extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));


extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));



extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));




extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));






extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));






extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));





extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));




extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));





extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));







extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));






extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
# 272 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
# 290 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));



extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));



extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
# 400 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
# 291 "/usr/include/math.h" 2 3 4
# 306 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
# 307 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));

extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));

extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));


extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));

extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));

extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));




extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));

extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));

extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
# 85 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));

extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));

extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));





extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));


extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));


extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));


extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));


extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));




extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));


extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));






extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));



extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));




extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));






extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));






extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));





extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));




extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));





extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));







extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));






extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
# 272 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
# 290 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));



extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
# 400 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
# 308 "/usr/include/math.h" 2 3 4
# 349 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
# 350 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
# 85 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));





extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));




extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));






extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));



extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));




extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));






extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));






extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));





extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));




extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));





extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));







extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));






extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
# 272 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
# 290 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
# 400 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
# 351 "/usr/include/math.h" 2 3 4
# 773 "/usr/include/math.h" 3 4
extern int signgam;
# 853 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 6 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2

# 1 "/home/ubuntu/FalconHLS/code_hls/header.h" 1
# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
# 33 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 34 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 2 "/home/ubuntu/FalconHLS/code_hls/header.h" 2



# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 271 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));
# 6 "/home/ubuntu/FalconHLS/code_hls/header.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2022.1/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdbool.h" 1 3
# 7 "/home/ubuntu/FalconHLS/code_hls/header.h" 2




typedef double fpr;

typedef struct {
 union {
  uint64_t A[25];
  uint8_t dbuf[200];
 } st;
 uint64_t dptr;
} inner_shake256_context;



typedef struct {
 union {
  uint8_t d[512];
  uint64_t dummy_u64;
 } buf;
 size_t ptr;
 union {
  uint8_t d[256];
  uint64_t dummy_u64;
 } state;
 int type;
} prng;

typedef struct {
 prng p;
 fpr sigma_min;
} sampler_context;

int static global_cnt = -1;
double static *tree_base_address;
double static *base_address;





uint32_t mq_montymul(uint32_t x, uint32_t y);
uint32_t mq_add(uint32_t x, uint32_t y);
uint32_t mq_sub(uint32_t x, uint32_t y);
uint32_t mq_rshift1(uint32_t x);
uint32_t mq_conv_small(int x);
uint32_t mq_montysqr(uint32_t x);
uint32_t mq_div_12289(uint32_t x, uint32_t y);
void mq_NTT(uint16_t *a, unsigned logn);
void mq_iNTT(uint16_t *a, unsigned logn);
int compute_public(uint16_t *h, const int8_t *f, const int8_t *g, unsigned logn, uint8_t *tmp);
int complete_private(int8_t *G, const int8_t *f, const int8_t *g, const int8_t *F, unsigned logn, uint8_t *tmp);
void to_ntt_monty(uint16_t *h, unsigned logn);
int verify_raw(const uint16_t c0[], const int16_t s2[], const uint16_t h[], unsigned logn,uint8_t *tmp);
void test_vrfy_inner(const uint16_t *h, const char *sig_in, const char *msg_in, const char *nonce_in);
size_t hextobin(uint8_t *buf, size_t max_len, const char *src);
int is_invertible( const int16_t *s2, unsigned logn, uint8_t *tmp);
int verify_recover(uint16_t *h, const uint16_t *c0, const int16_t *s1, const int16_t *s2, unsigned logn, uint8_t *tmp);



size_t modq_encode(void *out, size_t max_out_len, const uint16_t *x, unsigned logn);
size_t trim_i16_decode(int16_t *x, unsigned logn, unsigned bits,const void *in, size_t max_in_len);




void i_shake256_init(inner_shake256_context *sc);
void i_shake256_inject(inner_shake256_context *sc, const uint8_t *in, size_t len);
void i_shake256_extract(inner_shake256_context *sc, uint8_t *out, size_t len);
void i_shake256_flip(inner_shake256_context *sc);
void process_block(uint64_t *state);







void hash_to_point_vartime(inner_shake256_context *sc, uint16_t *x, unsigned logn);
void hash_to_point_ct(inner_shake256_context *sc, uint16_t *x, unsigned logn, uint8_t *tmp);
int is_short(const int16_t *s1, const int16_t *s2, unsigned logn);
int is_short_half(uint32_t sqn, const int16_t *s2, unsigned logn);







uint64_t get_rng_u64(inner_shake256_context *rng);
int mkgauss(inner_shake256_context *rng, unsigned logn);
void poly_small_mkgauss(inner_shake256_context *rng, int8_t *f, unsigned logn);
uint32_t poly_small_sqnorm(const int8_t *f, unsigned logn);
void poly_small_to_fp(fpr *x, const int8_t *f, unsigned logn);
void keygen(int8_t f_out[1024], int8_t g_out[1024], int8_t F_upper_out[1024], int8_t G_upper_out[1024], uint16_t h_out[1024], uint8_t nonce[48]);
void make_fg(uint32_t *data, const int8_t *f, const int8_t *g, unsigned logn, unsigned depth, int out_ntt);
uint32_t modp_set(int32_t x, uint32_t p);
uint32_t modp_ninv31(uint32_t p);
void modp_mkgm2(uint32_t *gm, uint32_t *igm, unsigned logn, uint32_t g, uint32_t p, uint32_t p0i);
uint32_t modp_R2(uint32_t p, uint32_t p0i);
int solve_NTRU_all(unsigned logn_top, const int8_t *f, const int8_t *g, unsigned depth, uint32_t *tmp, uint32_t *tmp2);
int solve_NTRU(unsigned logn, int8_t *F_upper, int8_t *G_upper, const int8_t *f, const int8_t *g, int lim, uint32_t *tmp2);
void modp_NTT2_ext(uint32_t a[1024], size_t stride, const uint32_t gm[1024], unsigned logn, uint32_t p, uint32_t p0i);
void modp_iNTT2_ext(uint32_t a[2048], size_t stride, const uint32_t igm[1024], unsigned logn, uint32_t p, uint32_t p0i);





fpr fpr_of(int64_t i);
fpr fpr_scaled(int64_t i, int sc);
fpr FPR(double v);
fpr fpr_sqrt(fpr x);
fpr fpr_sqr(fpr x);
fpr fpr_div(fpr x, fpr y);
fpr fpr_mul(fpr x, fpr y);
fpr fpr_add(fpr x, fpr y);
fpr fpr_double(fpr x);
fpr fpr_inv(fpr x);
fpr fpr_neg(fpr x);
fpr fpr_sub(fpr x, fpr y);
int fpr_lt(fpr x, fpr y);
int64_t fpr_rint(fpr x);
uint64_t fpr_ulsh(uint64_t x, int n);
int64_t fpr_irsh(int64_t x, int n);
uint64_t fpr_ursh(uint64_t x, int n);
uint64_t fpr_expm_p63(fpr x, fpr ccs);
fpr fpr_half(fpr x);
int64_t fpr_trunc(fpr x);
int64_t fpr_floor(fpr x);





void FFT(fpr f[1024], unsigned logn);
void FFT_streaming(fpr f[1024], unsigned logn);
void iFFT_streaming(fpr f[1024], unsigned logn);
void iFFT_stage(fpr in_r[], fpr in_i[],fpr out_r[],fpr out_i[], int hn, int dt, int t, int hm);
void iFFT_top(fpr f[1024]);


void FFT_stage(fpr in_r[512], fpr in_i[512],fpr out_r[512],fpr out_i[512], int hm, int ht, int t, int m);
void FFT_top(fpr f[1024]);
void poly_invnorm2_fft(fpr *d, const fpr *a, const fpr *b, unsigned logn);
void poly_adj_fft(fpr *a, unsigned logn);
void poly_mulconst(fpr *a, fpr x, unsigned logn);
void poly_mul_autoadj_fft(fpr *a, const fpr *b, unsigned logn);
void iFFT(fpr *f, unsigned logn);
void poly_add(fpr *a, const fpr *b, unsigned logn);
void poly_mul_fft(fpr * a, const fpr * b, unsigned logn);
void poly_add_muladj_fft(fpr * d, const fpr * F, const fpr * G, const fpr * f, const fpr * g, unsigned logn);
void poly_sub(fpr *a, const fpr *b, unsigned logn);
void poly_div_autoadj_fft(fpr *a, const fpr *b, unsigned logn);
void poly_split_fft(fpr * f0, fpr * f1, const fpr * f, unsigned logn);
void poly_merge_fft(fpr * f, const fpr * f0, const fpr * f1, unsigned logn);
void poly_mulselfadj_fft(fpr *a, unsigned logn);
void poly_muladj_fft(fpr * a, const fpr * b, unsigned logn);
void poly_LDLmv_fft(fpr * d11, fpr * l10, const fpr * g00, const fpr * g01, const fpr * g11, unsigned logn);
void poly_LDL_fft(const fpr * g00, fpr * g01, fpr * g11, unsigned logn);
void poly_neg(fpr *a, unsigned logn);





void expand_privkey(fpr *expanded_key,const int8_t *f, const int8_t *g, const int8_t *F_upper, const int8_t *G_upper);
void sign_dyn(int16_t *sig, inner_shake256_context *rng, const int8_t *f, const int8_t *g, const int8_t *F, const int8_t *G, const uint16_t *hm, unsigned logn, uint8_t *tmp);
void sign_tree(int16_t sig[1024], fpr expanded_key[15360], uint16_t hm[1024], uint8_t msg[50], uint8_t seed[48]);
void sign_tree_expand(int16_t sig[1024], const int8_t f[1024], const int8_t g[1024], const int8_t F_upper[1024], const int8_t G_upper[], uint16_t hm[1024], uint8_t seed[48]);
int64_t sampler(void *ctx, fpr mu, fpr isigma);
int64_t gaussian0_sampler(prng *p);
void ffLDL_fft_inner(fpr * tree, fpr * g0, fpr * g1, unsigned logn, fpr * tmp);

void ffSampling_fft_dyntree(void *samp_ctx, fpr *t0, fpr *t1, fpr *g00, fpr *g01, fpr *g11, unsigned orig_logn, unsigned logn, fpr *tmp);
void sampler_test(fpr mu[2048], fpr issigma[2048],int64_t res[2048], fpr dss[2048], fpr a[2048], fpr b[2048], fpr c[2048], fpr d[2048], fpr e[2048], char nonce[7], uint8_t msg[50]);
void ffSampling_fft_test(fpr *tree, fpr t0[1024], fpr t1[1024], fpr tx[1024], fpr ty[1024]);
void decompose_fpr(fpr *mu_in, fpr out[11], int out_int[3], int64_t out_64[1]);
void bug(double *in, double *out, double *out2, int32_t *out_int);






void prng_init(prng *p, inner_shake256_context *src);
void prng_refill(prng *p);
void prng_get_bytes(prng *p, void *dst, size_t len);
uint64_t prng_get_u64(prng *p);
unsigned prng_get_u8(prng *p);
# 207 "/home/ubuntu/FalconHLS/code_hls/header.h"
static const fpr fpr_q = 12289.0;
static const fpr fpr_inverse_of_q = 1.0 / 12289.0;
static const fpr fpr_inv_2sqrsigma0 = .150865048875372721532312163019;
static const fpr fpr_inv_sigma[] = {
 0.0,
 0.0069054793295940891952143765991630516,
 0.0068102267767177975961393730687908629,
 0.0067188101910722710707826117910434131,
 0.0065883354370073665545865037227681924,
 0.0064651781207602900738053897763485516,
 0.0063486788828078995327741182928037856,
 0.0062382586529084374473367528433697537,
 0.0061334065020930261548984001431770281,
 0.0060336696681577241031668062510953022,
 0.0059386453095331159950250124336477482
};
static const fpr fpr_sigma_min[] = {
 0.0,
 1.1165085072329102588881898380334015,
 1.1321247692325272405718031785357108,
 1.1475285353733668684571123112513188,
 1.1702540788534828939713084716509250,
 1.1925466358390344011122170489094133,
 1.2144300507766139921088487776957699,
 1.2359260567719808790104525941706723,
 1.2570545284063214162779743112075080,
 1.2778336969128335860256340575729042,
 1.2982803343442918539708792538826807
};
static const fpr fpr_log2 = 0.69314718055994530941723212146;
static const fpr fpr_inv_log2 = 1.4426950408889634073599246810;
static const fpr fpr_bnorm_max = 16822.4121;
static const fpr fpr_zero = 0.0;
static const fpr fpr_one = 1.0;
static const fpr fpr_two = 2.0;
static const fpr fpr_onehalf = 0.5;
static const fpr fpr_invsqrt2 = 0.707106781186547524400844362105;
static const fpr fpr_invsqrt8 = 0.353553390593273762200422181052;
static const fpr fpr_ptwo31 = 2147483648.0;
static const fpr fpr_ptwo31m1 = 2147483647.0;
static const fpr fpr_mtwo31m1 = -2147483647.0;
static const fpr fpr_ptwo63m1 = 9223372036854775807.0;
static const fpr fpr_mtwo63m1 = -9223372036854775807.0;
static const fpr fpr_ptwo63 = 9223372036854775808.0;
# 287 "/home/ubuntu/FalconHLS/code_hls/header.h"
static const uint8_t max_fg_bits[] = {
 0,
 8,
 8,
 8,
 8,
 8,
 7,
 7,
 6,
 6,
 5
};

static const uint8_t max_FG_bits[] = {
 0,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8,
 8
};
# 344 "/home/ubuntu/FalconHLS/code_hls/header.h"
static const uint8_t max_sig_bits[] = {
 0,
 10,
 11,
 11,
 12,
 12,
 12,
 12,
 12,
 12,
 12
};



static const fpr fpr_gm_tab[] = {
 0, 0,
 -0.000000000000000000000000000, 1.000000000000000000000000000,
  0.707106781186547524400844362, 0.707106781186547524400844362,
 -0.707106781186547524400844362, 0.707106781186547524400844362,
  0.923879532511286756128183189, 0.382683432365089771728459984,
 -0.382683432365089771728459984, 0.923879532511286756128183189,
  0.382683432365089771728459984, 0.923879532511286756128183189,
 -0.923879532511286756128183189, 0.382683432365089771728459984,
  0.980785280403230449126182236, 0.195090322016128267848284868,
 -0.195090322016128267848284868, 0.980785280403230449126182236,
  0.555570233019602224742830814, 0.831469612302545237078788378,
 -0.831469612302545237078788378, 0.555570233019602224742830814,
  0.831469612302545237078788378, 0.555570233019602224742830814,
 -0.555570233019602224742830814, 0.831469612302545237078788378,
  0.195090322016128267848284868, 0.980785280403230449126182236,
 -0.980785280403230449126182236, 0.195090322016128267848284868,
  0.995184726672196886244836953, 0.098017140329560601994195564,
 -0.098017140329560601994195564, 0.995184726672196886244836953,
  0.634393284163645498215171613, 0.773010453362736960810906610,
 -0.773010453362736960810906610, 0.634393284163645498215171613,
  0.881921264348355029712756864, 0.471396736825997648556387626,
 -0.471396736825997648556387626, 0.881921264348355029712756864,
  0.290284677254462367636192376, 0.956940335732208864935797887,
 -0.956940335732208864935797887, 0.290284677254462367636192376,
  0.956940335732208864935797887, 0.290284677254462367636192376,
 -0.290284677254462367636192376, 0.956940335732208864935797887,
  0.471396736825997648556387626, 0.881921264348355029712756864,
 -0.881921264348355029712756864, 0.471396736825997648556387626,
  0.773010453362736960810906610, 0.634393284163645498215171613,
 -0.634393284163645498215171613, 0.773010453362736960810906610,
  0.098017140329560601994195564, 0.995184726672196886244836953,
 -0.995184726672196886244836953, 0.098017140329560601994195564,
  0.998795456205172392714771605, 0.049067674327418014254954977,
 -0.049067674327418014254954977, 0.998795456205172392714771605,
  0.671558954847018400625376850, 0.740951125354959091175616897,
 -0.740951125354959091175616897, 0.671558954847018400625376850,
  0.903989293123443331586200297, 0.427555093430282094320966857,
 -0.427555093430282094320966857, 0.903989293123443331586200297,
  0.336889853392220050689253213, 0.941544065183020778412509403,
 -0.941544065183020778412509403, 0.336889853392220050689253213,
  0.970031253194543992603984207, 0.242980179903263889948274162,
 -0.242980179903263889948274162, 0.970031253194543992603984207,
  0.514102744193221726593693839, 0.857728610000272069902269984,
 -0.857728610000272069902269984, 0.514102744193221726593693839,
  0.803207531480644909806676513, 0.595699304492433343467036529,
 -0.595699304492433343467036529, 0.803207531480644909806676513,
  0.146730474455361751658850130, 0.989176509964780973451673738,
 -0.989176509964780973451673738, 0.146730474455361751658850130,
  0.989176509964780973451673738, 0.146730474455361751658850130,
 -0.146730474455361751658850130, 0.989176509964780973451673738,
  0.595699304492433343467036529, 0.803207531480644909806676513,
 -0.803207531480644909806676513, 0.595699304492433343467036529,
  0.857728610000272069902269984, 0.514102744193221726593693839,
 -0.514102744193221726593693839, 0.857728610000272069902269984,
  0.242980179903263889948274162, 0.970031253194543992603984207,
 -0.970031253194543992603984207, 0.242980179903263889948274162,
  0.941544065183020778412509403, 0.336889853392220050689253213,
 -0.336889853392220050689253213, 0.941544065183020778412509403,
  0.427555093430282094320966857, 0.903989293123443331586200297,
 -0.903989293123443331586200297, 0.427555093430282094320966857,
  0.740951125354959091175616897, 0.671558954847018400625376850,
 -0.671558954847018400625376850, 0.740951125354959091175616897,
  0.049067674327418014254954977, 0.998795456205172392714771605,
 -0.998795456205172392714771605, 0.049067674327418014254954977,
  0.999698818696204220115765650, 0.024541228522912288031734529,
 -0.024541228522912288031734529, 0.999698818696204220115765650,
  0.689540544737066924616730630, 0.724247082951466920941069243,
 -0.724247082951466920941069243, 0.689540544737066924616730630,
  0.914209755703530654635014829, 0.405241314004989870908481306,
 -0.405241314004989870908481306, 0.914209755703530654635014829,
  0.359895036534988148775104572, 0.932992798834738887711660256,
 -0.932992798834738887711660256, 0.359895036534988148775104572,
  0.975702130038528544460395766, 0.219101240156869797227737547,
 -0.219101240156869797227737547, 0.975702130038528544460395766,
  0.534997619887097210663076905, 0.844853565249707073259571205,
 -0.844853565249707073259571205, 0.534997619887097210663076905,
  0.817584813151583696504920884, 0.575808191417845300745972454,
 -0.575808191417845300745972454, 0.817584813151583696504920884,
  0.170961888760301226363642357, 0.985277642388941244774018433,
 -0.985277642388941244774018433, 0.170961888760301226363642357,
  0.992479534598709998156767252, 0.122410675199216198498704474,
 -0.122410675199216198498704474, 0.992479534598709998156767252,
  0.615231590580626845484913563, 0.788346427626606262009164705,
 -0.788346427626606262009164705, 0.615231590580626845484913563,
  0.870086991108711418652292404, 0.492898192229784036873026689,
 -0.492898192229784036873026689, 0.870086991108711418652292404,
  0.266712757474898386325286515, 0.963776065795439866686464356,
 -0.963776065795439866686464356, 0.266712757474898386325286515,
  0.949528180593036667195936074, 0.313681740398891476656478846,
 -0.313681740398891476656478846, 0.949528180593036667195936074,
  0.449611329654606600046294579, 0.893224301195515320342416447,
 -0.893224301195515320342416447, 0.449611329654606600046294579,
  0.757208846506484547575464054, 0.653172842953776764084203014,
 -0.653172842953776764084203014, 0.757208846506484547575464054,
  0.073564563599667423529465622, 0.997290456678690216135597140,
 -0.997290456678690216135597140, 0.073564563599667423529465622,
  0.997290456678690216135597140, 0.073564563599667423529465622,
 -0.073564563599667423529465622, 0.997290456678690216135597140,
  0.653172842953776764084203014, 0.757208846506484547575464054,
 -0.757208846506484547575464054, 0.653172842953776764084203014,
  0.893224301195515320342416447, 0.449611329654606600046294579,
 -0.449611329654606600046294579, 0.893224301195515320342416447,
  0.313681740398891476656478846, 0.949528180593036667195936074,
 -0.949528180593036667195936074, 0.313681740398891476656478846,
  0.963776065795439866686464356, 0.266712757474898386325286515,
 -0.266712757474898386325286515, 0.963776065795439866686464356,
  0.492898192229784036873026689, 0.870086991108711418652292404,
 -0.870086991108711418652292404, 0.492898192229784036873026689,
  0.788346427626606262009164705, 0.615231590580626845484913563,
 -0.615231590580626845484913563, 0.788346427626606262009164705,
  0.122410675199216198498704474, 0.992479534598709998156767252,
 -0.992479534598709998156767252, 0.122410675199216198498704474,
  0.985277642388941244774018433, 0.170961888760301226363642357,
 -0.170961888760301226363642357, 0.985277642388941244774018433,
  0.575808191417845300745972454, 0.817584813151583696504920884,
 -0.817584813151583696504920884, 0.575808191417845300745972454,
  0.844853565249707073259571205, 0.534997619887097210663076905,
 -0.534997619887097210663076905, 0.844853565249707073259571205,
  0.219101240156869797227737547, 0.975702130038528544460395766,
 -0.975702130038528544460395766, 0.219101240156869797227737547,
  0.932992798834738887711660256, 0.359895036534988148775104572,
 -0.359895036534988148775104572, 0.932992798834738887711660256,
  0.405241314004989870908481306, 0.914209755703530654635014829,
 -0.914209755703530654635014829, 0.405241314004989870908481306,
  0.724247082951466920941069243, 0.689540544737066924616730630,
 -0.689540544737066924616730630, 0.724247082951466920941069243,
  0.024541228522912288031734529, 0.999698818696204220115765650,
 -0.999698818696204220115765650, 0.024541228522912288031734529,
  0.999924701839144540921646491, 0.012271538285719926079408262,
 -0.012271538285719926079408262, 0.999924701839144540921646491,
  0.698376249408972853554813503, 0.715730825283818654125532623,
 -0.715730825283818654125532623, 0.698376249408972853554813503,
  0.919113851690057743908477789, 0.393992040061048108596188661,
 -0.393992040061048108596188661, 0.919113851690057743908477789,
  0.371317193951837543411934967, 0.928506080473215565937167396,
 -0.928506080473215565937167396, 0.371317193951837543411934967,
  0.978317370719627633106240097, 0.207111376192218549708116020,
 -0.207111376192218549708116020, 0.978317370719627633106240097,
  0.545324988422046422313987347, 0.838224705554838043186996856,
 -0.838224705554838043186996856, 0.545324988422046422313987347,
  0.824589302785025264474803737, 0.565731810783613197389765011,
 -0.565731810783613197389765011, 0.824589302785025264474803737,
  0.183039887955140958516532578, 0.983105487431216327180301155,
 -0.983105487431216327180301155, 0.183039887955140958516532578,
  0.993906970002356041546922813, 0.110222207293883058807899140,
 -0.110222207293883058807899140, 0.993906970002356041546922813,
  0.624859488142386377084072816, 0.780737228572094478301588484,
 -0.780737228572094478301588484, 0.624859488142386377084072816,
  0.876070094195406607095844268, 0.482183772079122748517344481,
 -0.482183772079122748517344481, 0.876070094195406607095844268,
  0.278519689385053105207848526, 0.960430519415565811199035138,
 -0.960430519415565811199035138, 0.278519689385053105207848526,
  0.953306040354193836916740383, 0.302005949319228067003463232,
 -0.302005949319228067003463232, 0.953306040354193836916740383,
  0.460538710958240023633181487, 0.887639620402853947760181617,
 -0.887639620402853947760181617, 0.460538710958240023633181487,
  0.765167265622458925888815999, 0.643831542889791465068086063,
 -0.643831542889791465068086063, 0.765167265622458925888815999,
  0.085797312344439890461556332, 0.996312612182778012627226190,
 -0.996312612182778012627226190, 0.085797312344439890461556332,
  0.998118112900149207125155861, 0.061320736302208577782614593,
 -0.061320736302208577782614593, 0.998118112900149207125155861,
  0.662415777590171761113069817, 0.749136394523459325469203257,
 -0.749136394523459325469203257, 0.662415777590171761113069817,
  0.898674465693953843041976744, 0.438616238538527637647025738,
 -0.438616238538527637647025738, 0.898674465693953843041976744,
  0.325310292162262934135954708, 0.945607325380521325730945387,
 -0.945607325380521325730945387, 0.325310292162262934135954708,
  0.966976471044852109087220226, 0.254865659604514571553980779,
 -0.254865659604514571553980779, 0.966976471044852109087220226,
  0.503538383725717558691867071, 0.863972856121586737918147054,
 -0.863972856121586737918147054, 0.503538383725717558691867071,
  0.795836904608883536262791915, 0.605511041404325513920626941,
 -0.605511041404325513920626941, 0.795836904608883536262791915,
  0.134580708507126186316358409, 0.990902635427780025108237011,
 -0.990902635427780025108237011, 0.134580708507126186316358409,
  0.987301418157858382399815802, 0.158858143333861441684385360,
 -0.158858143333861441684385360, 0.987301418157858382399815802,
  0.585797857456438860328080838, 0.810457198252594791726703434,
 -0.810457198252594791726703434, 0.585797857456438860328080838,
  0.851355193105265142261290312, 0.524589682678468906215098464,
 -0.524589682678468906215098464, 0.851355193105265142261290312,
  0.231058108280671119643236018, 0.972939952205560145467720114,
 -0.972939952205560145467720114, 0.231058108280671119643236018,
  0.937339011912574923201899593, 0.348418680249434568419308588,
 -0.348418680249434568419308588, 0.937339011912574923201899593,
  0.416429560097637182562598911, 0.909167983090522376563884788,
 -0.909167983090522376563884788, 0.416429560097637182562598911,
  0.732654271672412834615546649, 0.680600997795453050594430464,
 -0.680600997795453050594430464, 0.732654271672412834615546649,
  0.036807222941358832324332691, 0.999322384588349500896221011,
 -0.999322384588349500896221011, 0.036807222941358832324332691,
  0.999322384588349500896221011, 0.036807222941358832324332691,
 -0.036807222941358832324332691, 0.999322384588349500896221011,
  0.680600997795453050594430464, 0.732654271672412834615546649,
 -0.732654271672412834615546649, 0.680600997795453050594430464,
  0.909167983090522376563884788, 0.416429560097637182562598911,
 -0.416429560097637182562598911, 0.909167983090522376563884788,
  0.348418680249434568419308588, 0.937339011912574923201899593,
 -0.937339011912574923201899593, 0.348418680249434568419308588,
  0.972939952205560145467720114, 0.231058108280671119643236018,
 -0.231058108280671119643236018, 0.972939952205560145467720114,
  0.524589682678468906215098464, 0.851355193105265142261290312,
 -0.851355193105265142261290312, 0.524589682678468906215098464,
  0.810457198252594791726703434, 0.585797857456438860328080838,
 -0.585797857456438860328080838, 0.810457198252594791726703434,
  0.158858143333861441684385360, 0.987301418157858382399815802,
 -0.987301418157858382399815802, 0.158858143333861441684385360,
  0.990902635427780025108237011, 0.134580708507126186316358409,
 -0.134580708507126186316358409, 0.990902635427780025108237011,
  0.605511041404325513920626941, 0.795836904608883536262791915,
 -0.795836904608883536262791915, 0.605511041404325513920626941,
  0.863972856121586737918147054, 0.503538383725717558691867071,
 -0.503538383725717558691867071, 0.863972856121586737918147054,
  0.254865659604514571553980779, 0.966976471044852109087220226,
 -0.966976471044852109087220226, 0.254865659604514571553980779,
  0.945607325380521325730945387, 0.325310292162262934135954708,
 -0.325310292162262934135954708, 0.945607325380521325730945387,
  0.438616238538527637647025738, 0.898674465693953843041976744,
 -0.898674465693953843041976744, 0.438616238538527637647025738,
  0.749136394523459325469203257, 0.662415777590171761113069817,
 -0.662415777590171761113069817, 0.749136394523459325469203257,
  0.061320736302208577782614593, 0.998118112900149207125155861,
 -0.998118112900149207125155861, 0.061320736302208577782614593,
  0.996312612182778012627226190, 0.085797312344439890461556332,
 -0.085797312344439890461556332, 0.996312612182778012627226190,
  0.643831542889791465068086063, 0.765167265622458925888815999,
 -0.765167265622458925888815999, 0.643831542889791465068086063,
  0.887639620402853947760181617, 0.460538710958240023633181487,
 -0.460538710958240023633181487, 0.887639620402853947760181617,
  0.302005949319228067003463232, 0.953306040354193836916740383,
 -0.953306040354193836916740383, 0.302005949319228067003463232,
  0.960430519415565811199035138, 0.278519689385053105207848526,
 -0.278519689385053105207848526, 0.960430519415565811199035138,
  0.482183772079122748517344481, 0.876070094195406607095844268,
 -0.876070094195406607095844268, 0.482183772079122748517344481,
  0.780737228572094478301588484, 0.624859488142386377084072816,
 -0.624859488142386377084072816, 0.780737228572094478301588484,
  0.110222207293883058807899140, 0.993906970002356041546922813,
 -0.993906970002356041546922813, 0.110222207293883058807899140,
  0.983105487431216327180301155, 0.183039887955140958516532578,
 -0.183039887955140958516532578, 0.983105487431216327180301155,
  0.565731810783613197389765011, 0.824589302785025264474803737,
 -0.824589302785025264474803737, 0.565731810783613197389765011,
  0.838224705554838043186996856, 0.545324988422046422313987347,
 -0.545324988422046422313987347, 0.838224705554838043186996856,
  0.207111376192218549708116020, 0.978317370719627633106240097,
 -0.978317370719627633106240097, 0.207111376192218549708116020,
  0.928506080473215565937167396, 0.371317193951837543411934967,
 -0.371317193951837543411934967, 0.928506080473215565937167396,
  0.393992040061048108596188661, 0.919113851690057743908477789,
 -0.919113851690057743908477789, 0.393992040061048108596188661,
  0.715730825283818654125532623, 0.698376249408972853554813503,
 -0.698376249408972853554813503, 0.715730825283818654125532623,
  0.012271538285719926079408262, 0.999924701839144540921646491,
 -0.999924701839144540921646491, 0.012271538285719926079408262,
  0.999981175282601142656990438, 0.006135884649154475359640235,
 -0.006135884649154475359640235, 0.999981175282601142656990438,
  0.702754744457225302452914421, 0.711432195745216441522130290,
 -0.711432195745216441522130290, 0.702754744457225302452914421,
  0.921514039342041943465396332, 0.388345046698826291624993541,
 -0.388345046698826291624993541, 0.921514039342041943465396332,
  0.377007410216418256726567823, 0.926210242138311341974793388,
 -0.926210242138311341974793388, 0.377007410216418256726567823,
  0.979569765685440534439326110, 0.201104634842091911558443546,
 -0.201104634842091911558443546, 0.979569765685440534439326110,
  0.550457972936604802977289893, 0.834862874986380056304401383,
 -0.834862874986380056304401383, 0.550457972936604802977289893,
  0.828045045257755752067527592, 0.560661576197336023839710223,
 -0.560661576197336023839710223, 0.828045045257755752067527592,
  0.189068664149806212754997837, 0.981963869109555264072848154,
 -0.981963869109555264072848154, 0.189068664149806212754997837,
  0.994564570734255452119106243, 0.104121633872054579120943880,
 -0.104121633872054579120943880, 0.994564570734255452119106243,
  0.629638238914927025372981341, 0.776888465673232450040827983,
 -0.776888465673232450040827983, 0.629638238914927025372981341,
  0.879012226428633477831323711, 0.476799230063322133342158117,
 -0.476799230063322133342158117, 0.879012226428633477831323711,
  0.284407537211271843618310615, 0.958703474895871555374645792,
 -0.958703474895871555374645792, 0.284407537211271843618310615,
  0.955141168305770721498157712, 0.296150888243623824121786128,
 -0.296150888243623824121786128, 0.955141168305770721498157712,
  0.465976495767966177902756065, 0.884797098430937780104007041,
 -0.884797098430937780104007041, 0.465976495767966177902756065,
  0.769103337645579639346626069, 0.639124444863775743801488193,
 -0.639124444863775743801488193, 0.769103337645579639346626069,
  0.091908956497132728624990979, 0.995767414467659793982495643,
 -0.995767414467659793982495643, 0.091908956497132728624990979,
  0.998475580573294752208559038, 0.055195244349689939809447526,
 -0.055195244349689939809447526, 0.998475580573294752208559038,
  0.666999922303637506650154222, 0.745057785441465962407907310,
 -0.745057785441465962407907310, 0.666999922303637506650154222,
  0.901348847046022014570746093, 0.433093818853151968484222638,
 -0.433093818853151968484222638, 0.901348847046022014570746093,
  0.331106305759876401737190737, 0.943593458161960361495301445,
 -0.943593458161960361495301445, 0.331106305759876401737190737,
  0.968522094274417316221088329, 0.248927605745720168110682816,
 -0.248927605745720168110682816, 0.968522094274417316221088329,
  0.508830142543107036931749324, 0.860866938637767279344583877,
 -0.860866938637767279344583877, 0.508830142543107036931749324,
  0.799537269107905033500246232, 0.600616479383868926653875896,
 -0.600616479383868926653875896, 0.799537269107905033500246232,
  0.140658239332849230714788846, 0.990058210262297105505906464,
 -0.990058210262297105505906464, 0.140658239332849230714788846,
  0.988257567730749491404792538, 0.152797185258443427720336613,
 -0.152797185258443427720336613, 0.988257567730749491404792538,
  0.590759701858874228423887908, 0.806847553543799272206514313,
 -0.806847553543799272206514313, 0.590759701858874228423887908,
  0.854557988365400520767862276, 0.519355990165589587361829932,
 -0.519355990165589587361829932, 0.854557988365400520767862276,
  0.237023605994367206867735915, 0.971503890986251775537099622,
 -0.971503890986251775537099622, 0.237023605994367206867735915,
  0.939459223602189911962669246, 0.342660717311994397592781983,
 -0.342660717311994397592781983, 0.939459223602189911962669246,
  0.422000270799799685941287941, 0.906595704514915365332960588,
 -0.906595704514915365332960588, 0.422000270799799685941287941,
  0.736816568877369875090132520, 0.676092703575315960360419228,
 -0.676092703575315960360419228, 0.736816568877369875090132520,
  0.042938256934940823077124540, 0.999077727752645382888781997,
 -0.999077727752645382888781997, 0.042938256934940823077124540,
  0.999529417501093163079703322, 0.030674803176636625934021028,
 -0.030674803176636625934021028, 0.999529417501093163079703322,
  0.685083667772700381362052545, 0.728464390448225196492035438,
 -0.728464390448225196492035438, 0.685083667772700381362052545,
  0.911706032005429851404397325, 0.410843171057903942183466675,
 -0.410843171057903942183466675, 0.911706032005429851404397325,
  0.354163525420490382357395796, 0.935183509938947577642207480,
 -0.935183509938947577642207480, 0.354163525420490382357395796,
  0.974339382785575860518721668, 0.225083911359792835991642120,
 -0.225083911359792835991642120, 0.974339382785575860518721668,
  0.529803624686294668216054671, 0.848120344803297251279133563,
 -0.848120344803297251279133563, 0.529803624686294668216054671,
  0.814036329705948361654516690, 0.580813958095764545075595272,
 -0.580813958095764545075595272, 0.814036329705948361654516690,
  0.164913120489969921418189113, 0.986308097244598647863297524,
 -0.986308097244598647863297524, 0.164913120489969921418189113,
  0.991709753669099522860049931, 0.128498110793793172624415589,
 -0.128498110793793172624415589, 0.991709753669099522860049931,
  0.610382806276309452716352152, 0.792106577300212351782342879,
 -0.792106577300212351782342879, 0.610382806276309452716352152,
  0.867046245515692651480195629, 0.498227666972781852410983869,
 -0.498227666972781852410983869, 0.867046245515692651480195629,
  0.260794117915275518280186509, 0.965394441697689374550843858,
 -0.965394441697689374550843858, 0.260794117915275518280186509,
  0.947585591017741134653387321, 0.319502030816015677901518272,
 -0.319502030816015677901518272, 0.947585591017741134653387321,
  0.444122144570429231642069418, 0.895966249756185155914560282,
 -0.895966249756185155914560282, 0.444122144570429231642069418,
  0.753186799043612482483430486, 0.657806693297078656931182264,
 -0.657806693297078656931182264, 0.753186799043612482483430486,
  0.067443919563664057897972422, 0.997723066644191609848546728,
 -0.997723066644191609848546728, 0.067443919563664057897972422,
  0.996820299291165714972629398, 0.079682437971430121147120656,
 -0.079682437971430121147120656, 0.996820299291165714972629398,
  0.648514401022112445084560551, 0.761202385484261814029709836,
 -0.761202385484261814029709836, 0.648514401022112445084560551,
  0.890448723244757889952150560, 0.455083587126343823535869268,
 -0.455083587126343823535869268, 0.890448723244757889952150560,
  0.307849640041534893682063646, 0.951435020969008369549175569,
 -0.951435020969008369549175569, 0.307849640041534893682063646,
  0.962121404269041595429604316, 0.272621355449948984493347477,
 -0.272621355449948984493347477, 0.962121404269041595429604316,
  0.487550160148435954641485027, 0.873094978418290098636085973,
 -0.873094978418290098636085973, 0.487550160148435954641485027,
  0.784556597155575233023892575, 0.620057211763289178646268191,
 -0.620057211763289178646268191, 0.784556597155575233023892575,
  0.116318630911904767252544319, 0.993211949234794533104601012,
 -0.993211949234794533104601012, 0.116318630911904767252544319,
  0.984210092386929073193874387, 0.177004220412148756196839844,
 -0.177004220412148756196839844, 0.984210092386929073193874387,
  0.570780745886967280232652864, 0.821102514991104679060430820,
 -0.821102514991104679060430820, 0.570780745886967280232652864,
  0.841554977436898409603499520, 0.540171472729892881297845480,
 -0.540171472729892881297845480, 0.841554977436898409603499520,
  0.213110319916091373967757518, 0.977028142657754351485866211,
 -0.977028142657754351485866211, 0.213110319916091373967757518,
  0.930766961078983731944872340, 0.365612997804773870011745909,
 -0.365612997804773870011745909, 0.930766961078983731944872340,
  0.399624199845646828544117031, 0.916679059921042663116457013,
 -0.916679059921042663116457013, 0.399624199845646828544117031,
  0.720002507961381629076682999, 0.693971460889654009003734389,
 -0.693971460889654009003734389, 0.720002507961381629076682999,
  0.018406729905804820927366313, 0.999830581795823422015722275,
 -0.999830581795823422015722275, 0.018406729905804820927366313,
  0.999830581795823422015722275, 0.018406729905804820927366313,
 -0.018406729905804820927366313, 0.999830581795823422015722275,
  0.693971460889654009003734389, 0.720002507961381629076682999,
 -0.720002507961381629076682999, 0.693971460889654009003734389,
  0.916679059921042663116457013, 0.399624199845646828544117031,
 -0.399624199845646828544117031, 0.916679059921042663116457013,
  0.365612997804773870011745909, 0.930766961078983731944872340,
 -0.930766961078983731944872340, 0.365612997804773870011745909,
  0.977028142657754351485866211, 0.213110319916091373967757518,
 -0.213110319916091373967757518, 0.977028142657754351485866211,
  0.540171472729892881297845480, 0.841554977436898409603499520,
 -0.841554977436898409603499520, 0.540171472729892881297845480,
  0.821102514991104679060430820, 0.570780745886967280232652864,
 -0.570780745886967280232652864, 0.821102514991104679060430820,
  0.177004220412148756196839844, 0.984210092386929073193874387,
 -0.984210092386929073193874387, 0.177004220412148756196839844,
  0.993211949234794533104601012, 0.116318630911904767252544319,
 -0.116318630911904767252544319, 0.993211949234794533104601012,
  0.620057211763289178646268191, 0.784556597155575233023892575,
 -0.784556597155575233023892575, 0.620057211763289178646268191,
  0.873094978418290098636085973, 0.487550160148435954641485027,
 -0.487550160148435954641485027, 0.873094978418290098636085973,
  0.272621355449948984493347477, 0.962121404269041595429604316,
 -0.962121404269041595429604316, 0.272621355449948984493347477,
  0.951435020969008369549175569, 0.307849640041534893682063646,
 -0.307849640041534893682063646, 0.951435020969008369549175569,
  0.455083587126343823535869268, 0.890448723244757889952150560,
 -0.890448723244757889952150560, 0.455083587126343823535869268,
  0.761202385484261814029709836, 0.648514401022112445084560551,
 -0.648514401022112445084560551, 0.761202385484261814029709836,
  0.079682437971430121147120656, 0.996820299291165714972629398,
 -0.996820299291165714972629398, 0.079682437971430121147120656,
  0.997723066644191609848546728, 0.067443919563664057897972422,
 -0.067443919563664057897972422, 0.997723066644191609848546728,
  0.657806693297078656931182264, 0.753186799043612482483430486,
 -0.753186799043612482483430486, 0.657806693297078656931182264,
  0.895966249756185155914560282, 0.444122144570429231642069418,
 -0.444122144570429231642069418, 0.895966249756185155914560282,
  0.319502030816015677901518272, 0.947585591017741134653387321,
 -0.947585591017741134653387321, 0.319502030816015677901518272,
  0.965394441697689374550843858, 0.260794117915275518280186509,
 -0.260794117915275518280186509, 0.965394441697689374550843858,
  0.498227666972781852410983869, 0.867046245515692651480195629,
 -0.867046245515692651480195629, 0.498227666972781852410983869,
  0.792106577300212351782342879, 0.610382806276309452716352152,
 -0.610382806276309452716352152, 0.792106577300212351782342879,
  0.128498110793793172624415589, 0.991709753669099522860049931,
 -0.991709753669099522860049931, 0.128498110793793172624415589,
  0.986308097244598647863297524, 0.164913120489969921418189113,
 -0.164913120489969921418189113, 0.986308097244598647863297524,
  0.580813958095764545075595272, 0.814036329705948361654516690,
 -0.814036329705948361654516690, 0.580813958095764545075595272,
  0.848120344803297251279133563, 0.529803624686294668216054671,
 -0.529803624686294668216054671, 0.848120344803297251279133563,
  0.225083911359792835991642120, 0.974339382785575860518721668,
 -0.974339382785575860518721668, 0.225083911359792835991642120,
  0.935183509938947577642207480, 0.354163525420490382357395796,
 -0.354163525420490382357395796, 0.935183509938947577642207480,
  0.410843171057903942183466675, 0.911706032005429851404397325,
 -0.911706032005429851404397325, 0.410843171057903942183466675,
  0.728464390448225196492035438, 0.685083667772700381362052545,
 -0.685083667772700381362052545, 0.728464390448225196492035438,
  0.030674803176636625934021028, 0.999529417501093163079703322,
 -0.999529417501093163079703322, 0.030674803176636625934021028,
  0.999077727752645382888781997, 0.042938256934940823077124540,
 -0.042938256934940823077124540, 0.999077727752645382888781997,
  0.676092703575315960360419228, 0.736816568877369875090132520,
 -0.736816568877369875090132520, 0.676092703575315960360419228,
  0.906595704514915365332960588, 0.422000270799799685941287941,
 -0.422000270799799685941287941, 0.906595704514915365332960588,
  0.342660717311994397592781983, 0.939459223602189911962669246,
 -0.939459223602189911962669246, 0.342660717311994397592781983,
  0.971503890986251775537099622, 0.237023605994367206867735915,
 -0.237023605994367206867735915, 0.971503890986251775537099622,
  0.519355990165589587361829932, 0.854557988365400520767862276,
 -0.854557988365400520767862276, 0.519355990165589587361829932,
  0.806847553543799272206514313, 0.590759701858874228423887908,
 -0.590759701858874228423887908, 0.806847553543799272206514313,
  0.152797185258443427720336613, 0.988257567730749491404792538,
 -0.988257567730749491404792538, 0.152797185258443427720336613,
  0.990058210262297105505906464, 0.140658239332849230714788846,
 -0.140658239332849230714788846, 0.990058210262297105505906464,
  0.600616479383868926653875896, 0.799537269107905033500246232,
 -0.799537269107905033500246232, 0.600616479383868926653875896,
  0.860866938637767279344583877, 0.508830142543107036931749324,
 -0.508830142543107036931749324, 0.860866938637767279344583877,
  0.248927605745720168110682816, 0.968522094274417316221088329,
 -0.968522094274417316221088329, 0.248927605745720168110682816,
  0.943593458161960361495301445, 0.331106305759876401737190737,
 -0.331106305759876401737190737, 0.943593458161960361495301445,
  0.433093818853151968484222638, 0.901348847046022014570746093,
 -0.901348847046022014570746093, 0.433093818853151968484222638,
  0.745057785441465962407907310, 0.666999922303637506650154222,
 -0.666999922303637506650154222, 0.745057785441465962407907310,
  0.055195244349689939809447526, 0.998475580573294752208559038,
 -0.998475580573294752208559038, 0.055195244349689939809447526,
  0.995767414467659793982495643, 0.091908956497132728624990979,
 -0.091908956497132728624990979, 0.995767414467659793982495643,
  0.639124444863775743801488193, 0.769103337645579639346626069,
 -0.769103337645579639346626069, 0.639124444863775743801488193,
  0.884797098430937780104007041, 0.465976495767966177902756065,
 -0.465976495767966177902756065, 0.884797098430937780104007041,
  0.296150888243623824121786128, 0.955141168305770721498157712,
 -0.955141168305770721498157712, 0.296150888243623824121786128,
  0.958703474895871555374645792, 0.284407537211271843618310615,
 -0.284407537211271843618310615, 0.958703474895871555374645792,
  0.476799230063322133342158117, 0.879012226428633477831323711,
 -0.879012226428633477831323711, 0.476799230063322133342158117,
  0.776888465673232450040827983, 0.629638238914927025372981341,
 -0.629638238914927025372981341, 0.776888465673232450040827983,
  0.104121633872054579120943880, 0.994564570734255452119106243,
 -0.994564570734255452119106243, 0.104121633872054579120943880,
  0.981963869109555264072848154, 0.189068664149806212754997837,
 -0.189068664149806212754997837, 0.981963869109555264072848154,
  0.560661576197336023839710223, 0.828045045257755752067527592,
 -0.828045045257755752067527592, 0.560661576197336023839710223,
  0.834862874986380056304401383, 0.550457972936604802977289893,
 -0.550457972936604802977289893, 0.834862874986380056304401383,
  0.201104634842091911558443546, 0.979569765685440534439326110,
 -0.979569765685440534439326110, 0.201104634842091911558443546,
  0.926210242138311341974793388, 0.377007410216418256726567823,
 -0.377007410216418256726567823, 0.926210242138311341974793388,
  0.388345046698826291624993541, 0.921514039342041943465396332,
 -0.921514039342041943465396332, 0.388345046698826291624993541,
  0.711432195745216441522130290, 0.702754744457225302452914421,
 -0.702754744457225302452914421, 0.711432195745216441522130290,
  0.006135884649154475359640235, 0.999981175282601142656990438,
 -0.999981175282601142656990438, 0.006135884649154475359640235,
  0.999995293809576171511580126, 0.003067956762965976270145365,
 -0.003067956762965976270145365, 0.999995293809576171511580126,
  0.704934080375904908852523758, 0.709272826438865651316533772,
 -0.709272826438865651316533772, 0.704934080375904908852523758,
  0.922701128333878570437264227, 0.385516053843918864075607949,
 -0.385516053843918864075607949, 0.922701128333878570437264227,
  0.379847208924051170576281147, 0.925049240782677590302371869,
 -0.925049240782677590302371869, 0.379847208924051170576281147,
  0.980182135968117392690210009, 0.198098410717953586179324918,
 -0.198098410717953586179324918, 0.980182135968117392690210009,
  0.553016705580027531764226988, 0.833170164701913186439915922,
 -0.833170164701913186439915922, 0.553016705580027531764226988,
  0.829761233794523042469023765, 0.558118531220556115693702964,
 -0.558118531220556115693702964, 0.829761233794523042469023765,
  0.192080397049892441679288205, 0.981379193313754574318224190,
 -0.981379193313754574318224190, 0.192080397049892441679288205,
  0.994879330794805620591166107, 0.101069862754827824987887585,
 -0.101069862754827824987887585, 0.994879330794805620591166107,
  0.632018735939809021909403706, 0.774953106594873878359129282,
 -0.774953106594873878359129282, 0.632018735939809021909403706,
  0.880470889052160770806542929, 0.474100214650550014398580015,
 -0.474100214650550014398580015, 0.880470889052160770806542929,
  0.287347459544729526477331841, 0.957826413027532890321037029,
 -0.957826413027532890321037029, 0.287347459544729526477331841,
  0.956045251349996443270479823, 0.293219162694258650606608599,
 -0.293219162694258650606608599, 0.956045251349996443270479823,
  0.468688822035827933697617870, 0.883363338665731594736308015,
 -0.883363338665731594736308015, 0.468688822035827933697617870,
  0.771060524261813773200605759, 0.636761861236284230413943435,
 -0.636761861236284230413943435, 0.771060524261813773200605759,
  0.094963495329638998938034312, 0.995480755491926941769171600,
 -0.995480755491926941769171600, 0.094963495329638998938034312,
  0.998640218180265222418199049, 0.052131704680283321236358216,
 -0.052131704680283321236358216, 0.998640218180265222418199049,
  0.669282588346636065720696366, 0.743007952135121693517362293,
 -0.743007952135121693517362293, 0.669282588346636065720696366,
  0.902673318237258806751502391, 0.430326481340082633908199031,
 -0.430326481340082633908199031, 0.902673318237258806751502391,
  0.333999651442009404650865481, 0.942573197601446879280758735,
 -0.942573197601446879280758735, 0.333999651442009404650865481,
  0.969281235356548486048290738, 0.245955050335794611599924709,
 -0.245955050335794611599924709, 0.969281235356548486048290738,
  0.511468850437970399504391001, 0.859301818357008404783582139,
 -0.859301818357008404783582139, 0.511468850437970399504391001,
  0.801376171723140219430247777, 0.598160706996342311724958652,
 -0.598160706996342311724958652, 0.801376171723140219430247777,
  0.143695033150294454819773349, 0.989622017463200834623694454,
 -0.989622017463200834623694454, 0.143695033150294454819773349,
  0.988721691960323767604516485, 0.149764534677321517229695737,
 -0.149764534677321517229695737, 0.988721691960323767604516485,
  0.593232295039799808047809426, 0.805031331142963597922659282,
 -0.805031331142963597922659282, 0.593232295039799808047809426,
  0.856147328375194481019630732, 0.516731799017649881508753876,
 -0.516731799017649881508753876, 0.856147328375194481019630732,
  0.240003022448741486568922365, 0.970772140728950302138169611,
 -0.970772140728950302138169611, 0.240003022448741486568922365,
  0.940506070593268323787291309, 0.339776884406826857828825803,
 -0.339776884406826857828825803, 0.940506070593268323787291309,
  0.424779681209108833357226189, 0.905296759318118774354048329,
 -0.905296759318118774354048329, 0.424779681209108833357226189,
  0.738887324460615147933116508, 0.673829000378756060917568372,
 -0.673829000378756060917568372, 0.738887324460615147933116508,
  0.046003182130914628814301788, 0.998941293186856850633930266,
 -0.998941293186856850633930266, 0.046003182130914628814301788,
  0.999618822495178597116830637, 0.027608145778965741612354872,
 -0.027608145778965741612354872, 0.999618822495178597116830637,
  0.687315340891759108199186948, 0.726359155084345976817494315,
 -0.726359155084345976817494315, 0.687315340891759108199186948,
  0.912962190428398164628018233, 0.408044162864978680820747499,
 -0.408044162864978680820747499, 0.912962190428398164628018233,
  0.357030961233430032614954036, 0.934092550404258914729877883,
 -0.934092550404258914729877883, 0.357030961233430032614954036,
  0.975025345066994146844913468, 0.222093620973203534094094721,
 -0.222093620973203534094094721, 0.975025345066994146844913468,
  0.532403127877197971442805218, 0.846490938774052078300544488,
 -0.846490938774052078300544488, 0.532403127877197971442805218,
  0.815814410806733789010772660, 0.578313796411655563342245019,
 -0.578313796411655563342245019, 0.815814410806733789010772660,
  0.167938294974731178054745536, 0.985797509167567424700995000,
 -0.985797509167567424700995000, 0.167938294974731178054745536,
  0.992099313142191757112085445, 0.125454983411546238542336453,
 -0.125454983411546238542336453, 0.992099313142191757112085445,
  0.612810082429409703935211936, 0.790230221437310055030217152,
 -0.790230221437310055030217152, 0.612810082429409703935211936,
  0.868570705971340895340449876, 0.495565261825772531150266670,
 -0.495565261825772531150266670, 0.868570705971340895340449876,
  0.263754678974831383611349322, 0.964589793289812723836432159,
 -0.964589793289812723836432159, 0.263754678974831383611349322,
  0.948561349915730288158494826, 0.316593375556165867243047035,
 -0.316593375556165867243047035, 0.948561349915730288158494826,
  0.446868840162374195353044389, 0.894599485631382678433072126,
 -0.894599485631382678433072126, 0.446868840162374195353044389,
  0.755201376896536527598710756, 0.655492852999615385312679701,
 -0.655492852999615385312679701, 0.755201376896536527598710756,
  0.070504573389613863027351471, 0.997511456140303459699448390,
 -0.997511456140303459699448390, 0.070504573389613863027351471,
  0.997060070339482978987989949, 0.076623861392031492278332463,
 -0.076623861392031492278332463, 0.997060070339482978987989949,
  0.650846684996380915068975573, 0.759209188978388033485525443,
 -0.759209188978388033485525443, 0.650846684996380915068975573,
  0.891840709392342727796478697, 0.452349587233770874133026703,
 -0.452349587233770874133026703, 0.891840709392342727796478697,
  0.310767152749611495835997250, 0.950486073949481721759926101,
 -0.950486073949481721759926101, 0.310767152749611495835997250,
  0.962953266873683886347921481, 0.269668325572915106525464462,
 -0.269668325572915106525464462, 0.962953266873683886347921481,
  0.490226483288291154229598449, 0.871595086655951034842481435,
 -0.871595086655951034842481435, 0.490226483288291154229598449,
  0.786455213599085757522319464, 0.617647307937803932403979402,
 -0.617647307937803932403979402, 0.786455213599085757522319464,
  0.119365214810991364593637790, 0.992850414459865090793563344,
 -0.992850414459865090793563344, 0.119365214810991364593637790,
  0.984748501801904218556553176, 0.173983873387463827950700807,
 -0.173983873387463827950700807, 0.984748501801904218556553176,
  0.573297166698042212820171239, 0.819347520076796960824689637,
 -0.819347520076796960824689637, 0.573297166698042212820171239,
  0.843208239641845437161743865, 0.537587076295645482502214932,
 -0.537587076295645482502214932, 0.843208239641845437161743865,
  0.216106797076219509948385131, 0.976369731330021149312732194,
 -0.976369731330021149312732194, 0.216106797076219509948385131,
  0.931884265581668106718557199, 0.362755724367397216204854462,
 -0.362755724367397216204854462, 0.931884265581668106718557199,
  0.402434650859418441082533934, 0.915448716088267819566431292,
 -0.915448716088267819566431292, 0.402434650859418441082533934,
  0.722128193929215321243607198, 0.691759258364157774906734132,
 -0.691759258364157774906734132, 0.722128193929215321243607198,
  0.021474080275469507418374898, 0.999769405351215321657617036,
 -0.999769405351215321657617036, 0.021474080275469507418374898,
  0.999882347454212525633049627, 0.015339206284988101044151868,
 -0.015339206284988101044151868, 0.999882347454212525633049627,
  0.696177131491462944788582591, 0.717870045055731736211325329,
 -0.717870045055731736211325329, 0.696177131491462944788582591,
  0.917900775621390457642276297, 0.396809987416710328595290911,
 -0.396809987416710328595290911, 0.917900775621390457642276297,
  0.368466829953372331712746222, 0.929640895843181265457918066,
 -0.929640895843181265457918066, 0.368466829953372331712746222,
  0.977677357824509979943404762, 0.210111836880469621717489972,
 -0.210111836880469621717489972, 0.977677357824509979943404762,
  0.542750784864515906586768661, 0.839893794195999504583383987,
 -0.839893794195999504583383987, 0.542750784864515906586768661,
  0.822849781375826332046780034, 0.568258952670131549790548489,
 -0.568258952670131549790548489, 0.822849781375826332046780034,
  0.180022901405699522679906590, 0.983662419211730274396237776,
 -0.983662419211730274396237776, 0.180022901405699522679906590,
  0.993564135520595333782021697, 0.113270952177564349018228733,
 -0.113270952177564349018228733, 0.993564135520595333782021697,
  0.622461279374149972519166721, 0.782650596166575738458949301,
 -0.782650596166575738458949301, 0.622461279374149972519166721,
  0.874586652278176112634431897, 0.484869248000791101822951699,
 -0.484869248000791101822951699, 0.874586652278176112634431897,
  0.275571819310958163076425168, 0.961280485811320641748659653,
 -0.961280485811320641748659653, 0.275571819310958163076425168,
  0.952375012719765858529893608, 0.304929229735402406490728633,
 -0.304929229735402406490728633, 0.952375012719765858529893608,
  0.457813303598877221904961155, 0.889048355854664562540777729,
 -0.889048355854664562540777729, 0.457813303598877221904961155,
  0.763188417263381271704838297, 0.646176012983316364832802220,
 -0.646176012983316364832802220, 0.763188417263381271704838297,
  0.082740264549375693111987083, 0.996571145790554847093566910,
 -0.996571145790554847093566910, 0.082740264549375693111987083,
  0.997925286198596012623025462, 0.064382630929857460819324537,
 -0.064382630929857460819324537, 0.997925286198596012623025462,
  0.660114342067420478559490747, 0.751165131909686411205819422,
 -0.751165131909686411205819422, 0.660114342067420478559490747,
  0.897324580705418281231391836, 0.441371268731716692879988968,
 -0.441371268731716692879988968, 0.897324580705418281231391836,
  0.322407678801069848384807478, 0.946600913083283570044599823,
 -0.946600913083283570044599823, 0.322407678801069848384807478,
  0.966190003445412555433832961, 0.257831102162159005614471295,
 -0.257831102162159005614471295, 0.966190003445412555433832961,
  0.500885382611240786241285004, 0.865513624090569082825488358,
 -0.865513624090569082825488358, 0.500885382611240786241285004,
  0.793975477554337164895083757, 0.607949784967773667243642671,
 -0.607949784967773667243642671, 0.793975477554337164895083757,
  0.131540028702883111103387493, 0.991310859846115418957349799,
 -0.991310859846115418957349799, 0.131540028702883111103387493,
  0.986809401814185476970235952, 0.161886393780111837641387995,
 -0.161886393780111837641387995, 0.986809401814185476970235952,
  0.583308652937698294392830961, 0.812250586585203913049744181,
 -0.812250586585203913049744181, 0.583308652937698294392830961,
  0.849741768000852489471268395, 0.527199134781901348464274575,
 -0.527199134781901348464274575, 0.849741768000852489471268395,
  0.228072083170885739254457379, 0.973644249650811925318383912,
 -0.973644249650811925318383912, 0.228072083170885739254457379,
  0.936265667170278246576310996, 0.351292756085567125601307623,
 -0.351292756085567125601307623, 0.936265667170278246576310996,
  0.413638312238434547471944324, 0.910441292258067196934095369,
 -0.910441292258067196934095369, 0.413638312238434547471944324,
  0.730562769227827561177758850, 0.682845546385248068164596123,
 -0.682845546385248068164596123, 0.730562769227827561177758850,
  0.033741171851377584833716112, 0.999430604555461772019008327,
 -0.999430604555461772019008327, 0.033741171851377584833716112,
  0.999204758618363895492950001, 0.039872927587739811128578738,
 -0.039872927587739811128578738, 0.999204758618363895492950001,
  0.678350043129861486873655042, 0.734738878095963464563223604,
 -0.734738878095963464563223604, 0.678350043129861486873655042,
  0.907886116487666212038681480, 0.419216888363223956433010020,
 -0.419216888363223956433010020, 0.907886116487666212038681480,
  0.345541324963989065539191723, 0.938403534063108112192420774,
 -0.938403534063108112192420774, 0.345541324963989065539191723,
  0.972226497078936305708321144, 0.234041958583543423191242045,
 -0.234041958583543423191242045, 0.972226497078936305708321144,
  0.521975292937154342694258318, 0.852960604930363657746588082,
 -0.852960604930363657746588082, 0.521975292937154342694258318,
  0.808656181588174991946968128, 0.588281548222645304786439813,
 -0.588281548222645304786439813, 0.808656181588174991946968128,
  0.155828397654265235743101486, 0.987784141644572154230969032,
 -0.987784141644572154230969032, 0.155828397654265235743101486,
  0.990485084256457037998682243, 0.137620121586486044948441663,
 -0.137620121586486044948441663, 0.990485084256457037998682243,
  0.603066598540348201693430617, 0.797690840943391108362662755,
 -0.797690840943391108362662755, 0.603066598540348201693430617,
  0.862423956111040538690933878, 0.506186645345155291048942344,
 -0.506186645345155291048942344, 0.862423956111040538690933878,
  0.251897818154216950498106628, 0.967753837093475465243391912,
 -0.967753837093475465243391912, 0.251897818154216950498106628,
  0.944604837261480265659265493, 0.328209843579092526107916817,
 -0.328209843579092526107916817, 0.944604837261480265659265493,
  0.435857079922255491032544080, 0.900015892016160228714535267,
 -0.900015892016160228714535267, 0.435857079922255491032544080,
  0.747100605980180144323078847, 0.664710978203344868130324985,
 -0.664710978203344868130324985, 0.747100605980180144323078847,
  0.058258264500435759613979782, 0.998301544933892840738782163,
 -0.998301544933892840738782163, 0.058258264500435759613979782,
  0.996044700901251989887944810, 0.088853552582524596561586535,
 -0.088853552582524596561586535, 0.996044700901251989887944810,
  0.641481012808583151988739898, 0.767138911935820381181694573,
 -0.767138911935820381181694573, 0.641481012808583151988739898,
  0.886222530148880631647990821, 0.463259783551860197390719637,
 -0.463259783551860197390719637, 0.886222530148880631647990821,
  0.299079826308040476750336973, 0.954228095109105629780430732,
 -0.954228095109105629780430732, 0.299079826308040476750336973,
  0.959571513081984528335528181, 0.281464937925757984095231007,
 -0.281464937925757984095231007, 0.959571513081984528335528181,
  0.479493757660153026679839798, 0.877545290207261291668470750,
 -0.877545290207261291668470750, 0.479493757660153026679839798,
  0.778816512381475953374724325, 0.627251815495144113509622565,
 -0.627251815495144113509622565, 0.778816512381475953374724325,
  0.107172424956808849175529148, 0.994240449453187946358413442,
 -0.994240449453187946358413442, 0.107172424956808849175529148,
  0.982539302287441255907040396, 0.186055151663446648105438304,
 -0.186055151663446648105438304, 0.982539302287441255907040396,
  0.563199344013834115007363772, 0.826321062845663480311195452,
 -0.826321062845663480311195452, 0.563199344013834115007363772,
  0.836547727223511984524285790, 0.547894059173100165608820571,
 -0.547894059173100165608820571, 0.836547727223511984524285790,
  0.204108966092816874181696950, 0.978948175319062194715480124,
 -0.978948175319062194715480124, 0.204108966092816874181696950,
  0.927362525650401087274536959, 0.374164062971457997104393020,
 -0.374164062971457997104393020, 0.927362525650401087274536959,
  0.391170384302253888687512949, 0.920318276709110566440076541,
 -0.920318276709110566440076541, 0.391170384302253888687512949,
  0.713584868780793592903125099, 0.700568793943248366792866380,
 -0.700568793943248366792866380, 0.713584868780793592903125099,
  0.009203754782059819315102378, 0.999957644551963866333120920,
 -0.999957644551963866333120920, 0.009203754782059819315102378,
  0.999957644551963866333120920, 0.009203754782059819315102378,
 -0.009203754782059819315102378, 0.999957644551963866333120920,
  0.700568793943248366792866380, 0.713584868780793592903125099,
 -0.713584868780793592903125099, 0.700568793943248366792866380,
  0.920318276709110566440076541, 0.391170384302253888687512949,
 -0.391170384302253888687512949, 0.920318276709110566440076541,
  0.374164062971457997104393020, 0.927362525650401087274536959,
 -0.927362525650401087274536959, 0.374164062971457997104393020,
  0.978948175319062194715480124, 0.204108966092816874181696950,
 -0.204108966092816874181696950, 0.978948175319062194715480124,
  0.547894059173100165608820571, 0.836547727223511984524285790,
 -0.836547727223511984524285790, 0.547894059173100165608820571,
  0.826321062845663480311195452, 0.563199344013834115007363772,
 -0.563199344013834115007363772, 0.826321062845663480311195452,
  0.186055151663446648105438304, 0.982539302287441255907040396,
 -0.982539302287441255907040396, 0.186055151663446648105438304,
  0.994240449453187946358413442, 0.107172424956808849175529148,
 -0.107172424956808849175529148, 0.994240449453187946358413442,
  0.627251815495144113509622565, 0.778816512381475953374724325,
 -0.778816512381475953374724325, 0.627251815495144113509622565,
  0.877545290207261291668470750, 0.479493757660153026679839798,
 -0.479493757660153026679839798, 0.877545290207261291668470750,
  0.281464937925757984095231007, 0.959571513081984528335528181,
 -0.959571513081984528335528181, 0.281464937925757984095231007,
  0.954228095109105629780430732, 0.299079826308040476750336973,
 -0.299079826308040476750336973, 0.954228095109105629780430732,
  0.463259783551860197390719637, 0.886222530148880631647990821,
 -0.886222530148880631647990821, 0.463259783551860197390719637,
  0.767138911935820381181694573, 0.641481012808583151988739898,
 -0.641481012808583151988739898, 0.767138911935820381181694573,
  0.088853552582524596561586535, 0.996044700901251989887944810,
 -0.996044700901251989887944810, 0.088853552582524596561586535,
  0.998301544933892840738782163, 0.058258264500435759613979782,
 -0.058258264500435759613979782, 0.998301544933892840738782163,
  0.664710978203344868130324985, 0.747100605980180144323078847,
 -0.747100605980180144323078847, 0.664710978203344868130324985,
  0.900015892016160228714535267, 0.435857079922255491032544080,
 -0.435857079922255491032544080, 0.900015892016160228714535267,
  0.328209843579092526107916817, 0.944604837261480265659265493,
 -0.944604837261480265659265493, 0.328209843579092526107916817,
  0.967753837093475465243391912, 0.251897818154216950498106628,
 -0.251897818154216950498106628, 0.967753837093475465243391912,
  0.506186645345155291048942344, 0.862423956111040538690933878,
 -0.862423956111040538690933878, 0.506186645345155291048942344,
  0.797690840943391108362662755, 0.603066598540348201693430617,
 -0.603066598540348201693430617, 0.797690840943391108362662755,
  0.137620121586486044948441663, 0.990485084256457037998682243,
 -0.990485084256457037998682243, 0.137620121586486044948441663,
  0.987784141644572154230969032, 0.155828397654265235743101486,
 -0.155828397654265235743101486, 0.987784141644572154230969032,
  0.588281548222645304786439813, 0.808656181588174991946968128,
 -0.808656181588174991946968128, 0.588281548222645304786439813,
  0.852960604930363657746588082, 0.521975292937154342694258318,
 -0.521975292937154342694258318, 0.852960604930363657746588082,
  0.234041958583543423191242045, 0.972226497078936305708321144,
 -0.972226497078936305708321144, 0.234041958583543423191242045,
  0.938403534063108112192420774, 0.345541324963989065539191723,
 -0.345541324963989065539191723, 0.938403534063108112192420774,
  0.419216888363223956433010020, 0.907886116487666212038681480,
 -0.907886116487666212038681480, 0.419216888363223956433010020,
  0.734738878095963464563223604, 0.678350043129861486873655042,
 -0.678350043129861486873655042, 0.734738878095963464563223604,
  0.039872927587739811128578738, 0.999204758618363895492950001,
 -0.999204758618363895492950001, 0.039872927587739811128578738,
  0.999430604555461772019008327, 0.033741171851377584833716112,
 -0.033741171851377584833716112, 0.999430604555461772019008327,
  0.682845546385248068164596123, 0.730562769227827561177758850,
 -0.730562769227827561177758850, 0.682845546385248068164596123,
  0.910441292258067196934095369, 0.413638312238434547471944324,
 -0.413638312238434547471944324, 0.910441292258067196934095369,
  0.351292756085567125601307623, 0.936265667170278246576310996,
 -0.936265667170278246576310996, 0.351292756085567125601307623,
  0.973644249650811925318383912, 0.228072083170885739254457379,
 -0.228072083170885739254457379, 0.973644249650811925318383912,
  0.527199134781901348464274575, 0.849741768000852489471268395,
 -0.849741768000852489471268395, 0.527199134781901348464274575,
  0.812250586585203913049744181, 0.583308652937698294392830961,
 -0.583308652937698294392830961, 0.812250586585203913049744181,
  0.161886393780111837641387995, 0.986809401814185476970235952,
 -0.986809401814185476970235952, 0.161886393780111837641387995,
  0.991310859846115418957349799, 0.131540028702883111103387493,
 -0.131540028702883111103387493, 0.991310859846115418957349799,
  0.607949784967773667243642671, 0.793975477554337164895083757,
 -0.793975477554337164895083757, 0.607949784967773667243642671,
  0.865513624090569082825488358, 0.500885382611240786241285004,
 -0.500885382611240786241285004, 0.865513624090569082825488358,
  0.257831102162159005614471295, 0.966190003445412555433832961,
 -0.966190003445412555433832961, 0.257831102162159005614471295,
  0.946600913083283570044599823, 0.322407678801069848384807478,
 -0.322407678801069848384807478, 0.946600913083283570044599823,
  0.441371268731716692879988968, 0.897324580705418281231391836,
 -0.897324580705418281231391836, 0.441371268731716692879988968,
  0.751165131909686411205819422, 0.660114342067420478559490747,
 -0.660114342067420478559490747, 0.751165131909686411205819422,
  0.064382630929857460819324537, 0.997925286198596012623025462,
 -0.997925286198596012623025462, 0.064382630929857460819324537,
  0.996571145790554847093566910, 0.082740264549375693111987083,
 -0.082740264549375693111987083, 0.996571145790554847093566910,
  0.646176012983316364832802220, 0.763188417263381271704838297,
 -0.763188417263381271704838297, 0.646176012983316364832802220,
  0.889048355854664562540777729, 0.457813303598877221904961155,
 -0.457813303598877221904961155, 0.889048355854664562540777729,
  0.304929229735402406490728633, 0.952375012719765858529893608,
 -0.952375012719765858529893608, 0.304929229735402406490728633,
  0.961280485811320641748659653, 0.275571819310958163076425168,
 -0.275571819310958163076425168, 0.961280485811320641748659653,
  0.484869248000791101822951699, 0.874586652278176112634431897,
 -0.874586652278176112634431897, 0.484869248000791101822951699,
  0.782650596166575738458949301, 0.622461279374149972519166721,
 -0.622461279374149972519166721, 0.782650596166575738458949301,
  0.113270952177564349018228733, 0.993564135520595333782021697,
 -0.993564135520595333782021697, 0.113270952177564349018228733,
  0.983662419211730274396237776, 0.180022901405699522679906590,
 -0.180022901405699522679906590, 0.983662419211730274396237776,
  0.568258952670131549790548489, 0.822849781375826332046780034,
 -0.822849781375826332046780034, 0.568258952670131549790548489,
  0.839893794195999504583383987, 0.542750784864515906586768661,
 -0.542750784864515906586768661, 0.839893794195999504583383987,
  0.210111836880469621717489972, 0.977677357824509979943404762,
 -0.977677357824509979943404762, 0.210111836880469621717489972,
  0.929640895843181265457918066, 0.368466829953372331712746222,
 -0.368466829953372331712746222, 0.929640895843181265457918066,
  0.396809987416710328595290911, 0.917900775621390457642276297,
 -0.917900775621390457642276297, 0.396809987416710328595290911,
  0.717870045055731736211325329, 0.696177131491462944788582591,
 -0.696177131491462944788582591, 0.717870045055731736211325329,
  0.015339206284988101044151868, 0.999882347454212525633049627,
 -0.999882347454212525633049627, 0.015339206284988101044151868,
  0.999769405351215321657617036, 0.021474080275469507418374898,
 -0.021474080275469507418374898, 0.999769405351215321657617036,
  0.691759258364157774906734132, 0.722128193929215321243607198,
 -0.722128193929215321243607198, 0.691759258364157774906734132,
  0.915448716088267819566431292, 0.402434650859418441082533934,
 -0.402434650859418441082533934, 0.915448716088267819566431292,
  0.362755724367397216204854462, 0.931884265581668106718557199,
 -0.931884265581668106718557199, 0.362755724367397216204854462,
  0.976369731330021149312732194, 0.216106797076219509948385131,
 -0.216106797076219509948385131, 0.976369731330021149312732194,
  0.537587076295645482502214932, 0.843208239641845437161743865,
 -0.843208239641845437161743865, 0.537587076295645482502214932,
  0.819347520076796960824689637, 0.573297166698042212820171239,
 -0.573297166698042212820171239, 0.819347520076796960824689637,
  0.173983873387463827950700807, 0.984748501801904218556553176,
 -0.984748501801904218556553176, 0.173983873387463827950700807,
  0.992850414459865090793563344, 0.119365214810991364593637790,
 -0.119365214810991364593637790, 0.992850414459865090793563344,
  0.617647307937803932403979402, 0.786455213599085757522319464,
 -0.786455213599085757522319464, 0.617647307937803932403979402,
  0.871595086655951034842481435, 0.490226483288291154229598449,
 -0.490226483288291154229598449, 0.871595086655951034842481435,
  0.269668325572915106525464462, 0.962953266873683886347921481,
 -0.962953266873683886347921481, 0.269668325572915106525464462,
  0.950486073949481721759926101, 0.310767152749611495835997250,
 -0.310767152749611495835997250, 0.950486073949481721759926101,
  0.452349587233770874133026703, 0.891840709392342727796478697,
 -0.891840709392342727796478697, 0.452349587233770874133026703,
  0.759209188978388033485525443, 0.650846684996380915068975573,
 -0.650846684996380915068975573, 0.759209188978388033485525443,
  0.076623861392031492278332463, 0.997060070339482978987989949,
 -0.997060070339482978987989949, 0.076623861392031492278332463,
  0.997511456140303459699448390, 0.070504573389613863027351471,
 -0.070504573389613863027351471, 0.997511456140303459699448390,
  0.655492852999615385312679701, 0.755201376896536527598710756,
 -0.755201376896536527598710756, 0.655492852999615385312679701,
  0.894599485631382678433072126, 0.446868840162374195353044389,
 -0.446868840162374195353044389, 0.894599485631382678433072126,
  0.316593375556165867243047035, 0.948561349915730288158494826,
 -0.948561349915730288158494826, 0.316593375556165867243047035,
  0.964589793289812723836432159, 0.263754678974831383611349322,
 -0.263754678974831383611349322, 0.964589793289812723836432159,
  0.495565261825772531150266670, 0.868570705971340895340449876,
 -0.868570705971340895340449876, 0.495565261825772531150266670,
  0.790230221437310055030217152, 0.612810082429409703935211936,
 -0.612810082429409703935211936, 0.790230221437310055030217152,
  0.125454983411546238542336453, 0.992099313142191757112085445,
 -0.992099313142191757112085445, 0.125454983411546238542336453,
  0.985797509167567424700995000, 0.167938294974731178054745536,
 -0.167938294974731178054745536, 0.985797509167567424700995000,
  0.578313796411655563342245019, 0.815814410806733789010772660,
 -0.815814410806733789010772660, 0.578313796411655563342245019,
  0.846490938774052078300544488, 0.532403127877197971442805218,
 -0.532403127877197971442805218, 0.846490938774052078300544488,
  0.222093620973203534094094721, 0.975025345066994146844913468,
 -0.975025345066994146844913468, 0.222093620973203534094094721,
  0.934092550404258914729877883, 0.357030961233430032614954036,
 -0.357030961233430032614954036, 0.934092550404258914729877883,
  0.408044162864978680820747499, 0.912962190428398164628018233,
 -0.912962190428398164628018233, 0.408044162864978680820747499,
  0.726359155084345976817494315, 0.687315340891759108199186948,
 -0.687315340891759108199186948, 0.726359155084345976817494315,
  0.027608145778965741612354872, 0.999618822495178597116830637,
 -0.999618822495178597116830637, 0.027608145778965741612354872,
  0.998941293186856850633930266, 0.046003182130914628814301788,
 -0.046003182130914628814301788, 0.998941293186856850633930266,
  0.673829000378756060917568372, 0.738887324460615147933116508,
 -0.738887324460615147933116508, 0.673829000378756060917568372,
  0.905296759318118774354048329, 0.424779681209108833357226189,
 -0.424779681209108833357226189, 0.905296759318118774354048329,
  0.339776884406826857828825803, 0.940506070593268323787291309,
 -0.940506070593268323787291309, 0.339776884406826857828825803,
  0.970772140728950302138169611, 0.240003022448741486568922365,
 -0.240003022448741486568922365, 0.970772140728950302138169611,
  0.516731799017649881508753876, 0.856147328375194481019630732,
 -0.856147328375194481019630732, 0.516731799017649881508753876,
  0.805031331142963597922659282, 0.593232295039799808047809426,
 -0.593232295039799808047809426, 0.805031331142963597922659282,
  0.149764534677321517229695737, 0.988721691960323767604516485,
 -0.988721691960323767604516485, 0.149764534677321517229695737,
  0.989622017463200834623694454, 0.143695033150294454819773349,
 -0.143695033150294454819773349, 0.989622017463200834623694454,
  0.598160706996342311724958652, 0.801376171723140219430247777,
 -0.801376171723140219430247777, 0.598160706996342311724958652,
  0.859301818357008404783582139, 0.511468850437970399504391001,
 -0.511468850437970399504391001, 0.859301818357008404783582139,
  0.245955050335794611599924709, 0.969281235356548486048290738,
 -0.969281235356548486048290738, 0.245955050335794611599924709,
  0.942573197601446879280758735, 0.333999651442009404650865481,
 -0.333999651442009404650865481, 0.942573197601446879280758735,
  0.430326481340082633908199031, 0.902673318237258806751502391,
 -0.902673318237258806751502391, 0.430326481340082633908199031,
  0.743007952135121693517362293, 0.669282588346636065720696366,
 -0.669282588346636065720696366, 0.743007952135121693517362293,
  0.052131704680283321236358216, 0.998640218180265222418199049,
 -0.998640218180265222418199049, 0.052131704680283321236358216,
  0.995480755491926941769171600, 0.094963495329638998938034312,
 -0.094963495329638998938034312, 0.995480755491926941769171600,
  0.636761861236284230413943435, 0.771060524261813773200605759,
 -0.771060524261813773200605759, 0.636761861236284230413943435,
  0.883363338665731594736308015, 0.468688822035827933697617870,
 -0.468688822035827933697617870, 0.883363338665731594736308015,
  0.293219162694258650606608599, 0.956045251349996443270479823,
 -0.956045251349996443270479823, 0.293219162694258650606608599,
  0.957826413027532890321037029, 0.287347459544729526477331841,
 -0.287347459544729526477331841, 0.957826413027532890321037029,
  0.474100214650550014398580015, 0.880470889052160770806542929,
 -0.880470889052160770806542929, 0.474100214650550014398580015,
  0.774953106594873878359129282, 0.632018735939809021909403706,
 -0.632018735939809021909403706, 0.774953106594873878359129282,
  0.101069862754827824987887585, 0.994879330794805620591166107,
 -0.994879330794805620591166107, 0.101069862754827824987887585,
  0.981379193313754574318224190, 0.192080397049892441679288205,
 -0.192080397049892441679288205, 0.981379193313754574318224190,
  0.558118531220556115693702964, 0.829761233794523042469023765,
 -0.829761233794523042469023765, 0.558118531220556115693702964,
  0.833170164701913186439915922, 0.553016705580027531764226988,
 -0.553016705580027531764226988, 0.833170164701913186439915922,
  0.198098410717953586179324918, 0.980182135968117392690210009,
 -0.980182135968117392690210009, 0.198098410717953586179324918,
  0.925049240782677590302371869, 0.379847208924051170576281147,
 -0.379847208924051170576281147, 0.925049240782677590302371869,
  0.385516053843918864075607949, 0.922701128333878570437264227,
 -0.922701128333878570437264227, 0.385516053843918864075607949,
  0.709272826438865651316533772, 0.704934080375904908852523758,
 -0.704934080375904908852523758, 0.709272826438865651316533772,
  0.003067956762965976270145365, 0.999995293809576171511580126,
 -0.999995293809576171511580126, 0.003067956762965976270145365
};

static const fpr fpr_p2_tab[] = {
 2.00000000000,
 1.00000000000,
 0.50000000000,
 0.25000000000,
 0.12500000000,
 0.06250000000,
 0.03125000000,
 0.01562500000,
 0.00781250000,
 0.00390625000,
 0.00195312500
};

static const int16_t tree_offset_ffLDL512[] = {0, 256, 384, 448, 480, 496, 504, 508, 510, 511, 512, 514, 515, 516, 520, 522, 523, 524, 526, 527, 528, 536, 540, 542, 543, 544, 546, 547, 548, 552, 554, 555, 556, 558, 559, 560, 576, 584, 588, 590, 591, 592, 594, 595, 596, 600, 602, 603, 604, 606, 607, 608, 616, 620, 622, 623, 624, 626, 627, 628, 632, 634, 635, 636, 638, 639, 640, 672, 688, 696, 700, 702, 703, 704, 706, 707, 708, 712, 714, 715, 716, 718, 719, 720, 728, 732, 734, 735, 736, 738, 739, 740, 744, 746, 747, 748, 750, 751, 752, 768, 776, 780, 782, 783, 784, 786, 787, 788, 792, 794, 795, 796, 798, 799, 800, 808, 812, 814, 815, 816, 818, 819, 820, 824, 826, 827, 828, 830, 831, 832, 896, 928, 944, 952, 956, 958, 959, 960, 962, 963, 964, 968, 970, 971, 972, 974, 975, 976, 984, 988, 990, 991, 992, 994, 995, 996, 1000, 1002, 1003, 1004, 1006, 1007, 1008, 1024, 1032, 1036, 1038, 1039, 1040, 1042, 1043, 1044, 1048, 1050, 1051, 1052, 1054, 1055, 1056, 1064, 1068, 1070, 1071, 1072, 1074, 1075, 1076, 1080, 1082, 1083, 1084, 1086, 1087, 1088, 1120, 1136, 1144, 1148, 1150, 1151, 1152, 1154, 1155, 1156, 1160, 1162, 1163, 1164, 1166, 1167, 1168, 1176, 1180, 1182, 1183, 1184, 1186, 1187, 1188, 1192, 1194, 1195, 1196, 1198, 1199, 1200, 1216, 1224, 1228, 1230, 1231, 1232, 1234, 1235, 1236, 1240, 1242, 1243, 1244, 1246, 1247, 1248, 1256, 1260, 1262, 1263, 1264, 1266, 1267, 1268, 1272, 1274, 1275, 1276, 1278, 1279, 1280, 1408, 1472, 1504, 1520, 1528, 1532, 1534, 1535, 1536, 1538, 1539, 1540, 1544, 1546, 1547, 1548, 1550, 1551, 1552, 1560, 1564, 1566, 1567, 1568, 1570, 1571, 1572, 1576, 1578, 1579, 1580, 1582, 1583, 1584, 1600, 1608, 1612, 1614, 1615, 1616, 1618, 1619, 1620, 1624, 1626, 1627, 1628, 1630, 1631, 1632, 1640, 1644, 1646, 1647, 1648, 1650, 1651, 1652, 1656, 1658, 1659, 1660, 1662, 1663, 1664, 1696, 1712, 1720, 1724, 1726, 1727, 1728, 1730, 1731, 1732, 1736, 1738, 1739, 1740, 1742, 1743, 1744, 1752, 1756, 1758, 1759, 1760, 1762, 1763, 1764, 1768, 1770, 1771, 1772, 1774, 1775, 1776, 1792, 1800, 1804, 1806, 1807, 1808, 1810, 1811, 1812, 1816, 1818, 1819, 1820, 1822, 1823, 1824, 1832, 1836, 1838, 1839, 1840, 1842, 1843, 1844, 1848, 1850, 1851, 1852, 1854, 1855, 1856, 1920, 1952, 1968, 1976, 1980, 1982, 1983, 1984, 1986, 1987, 1988, 1992, 1994, 1995, 1996, 1998, 1999, 2000, 2008, 2012, 2014, 2015, 2016, 2018, 2019, 2020, 2024, 2026, 2027, 2028, 2030, 2031, 2032, 2048, 2056, 2060, 2062, 2063, 2064, 2066, 2067, 2068, 2072, 2074, 2075, 2076, 2078, 2079, 2080, 2088, 2092, 2094, 2095, 2096, 2098, 2099, 2100, 2104, 2106, 2107, 2108, 2110, 2111, 2112, 2144, 2160, 2168, 2172, 2174, 2175, 2176, 2178, 2179, 2180, 2184, 2186, 2187, 2188, 2190, 2191, 2192, 2200, 2204, 2206, 2207, 2208, 2210, 2211, 2212, 2216, 2218, 2219, 2220, 2222, 2223, 2224, 2240, 2248, 2252, 2254, 2255, 2256, 2258, 2259, 2260, 2264, 2266, 2267, 2268, 2270, 2271, 2272, 2280, 2284, 2286, 2287, 2288, 2290, 2291, 2292, 2296, 2298, 2299, 2300, 2302, 2303, 2304, 2560, 2688, 2752, 2784, 2800, 2808, 2812, 2814, 2815, 2816, 2818, 2819, 2820, 2824, 2826, 2827, 2828, 2830, 2831, 2832, 2840, 2844, 2846, 2847, 2848, 2850, 2851, 2852, 2856, 2858, 2859, 2860, 2862, 2863, 2864, 2880, 2888, 2892, 2894, 2895, 2896, 2898, 2899, 2900, 2904, 2906, 2907, 2908, 2910, 2911, 2912, 2920, 2924, 2926, 2927, 2928, 2930, 2931, 2932, 2936, 2938, 2939, 2940, 2942, 2943, 2944, 2976, 2992, 3000, 3004, 3006, 3007, 3008, 3010, 3011, 3012, 3016, 3018, 3019, 3020, 3022, 3023, 3024, 3032, 3036, 3038, 3039, 3040, 3042, 3043, 3044, 3048, 3050, 3051, 3052, 3054, 3055, 3056, 3072, 3080, 3084, 3086, 3087, 3088, 3090, 3091, 3092, 3096, 3098, 3099, 3100, 3102, 3103, 3104, 3112, 3116, 3118, 3119, 3120, 3122, 3123, 3124, 3128, 3130, 3131, 3132, 3134, 3135, 3136, 3200, 3232, 3248, 3256, 3260, 3262, 3263, 3264, 3266, 3267, 3268, 3272, 3274, 3275, 3276, 3278, 3279, 3280, 3288, 3292, 3294, 3295, 3296, 3298, 3299, 3300, 3304, 3306, 3307, 3308, 3310, 3311, 3312, 3328, 3336, 3340, 3342, 3343, 3344, 3346, 3347, 3348, 3352, 3354, 3355, 3356, 3358, 3359, 3360, 3368, 3372, 3374, 3375, 3376, 3378, 3379, 3380, 3384, 3386, 3387, 3388, 3390, 3391, 3392, 3424, 3440, 3448, 3452, 3454, 3455, 3456, 3458, 3459, 3460, 3464, 3466, 3467, 3468, 3470, 3471, 3472, 3480, 3484, 3486, 3487, 3488, 3490, 3491, 3492, 3496, 3498, 3499, 3500, 3502, 3503, 3504, 3520, 3528, 3532, 3534, 3535, 3536, 3538, 3539, 3540, 3544, 3546, 3547, 3548, 3550, 3551, 3552, 3560, 3564, 3566, 3567, 3568, 3570, 3571, 3572, 3576, 3578, 3579, 3580, 3582, 3583, 3584, 3712, 3776, 3808, 3824, 3832, 3836, 3838, 3839, 3840, 3842, 3843, 3844, 3848, 3850, 3851, 3852, 3854, 3855, 3856, 3864, 3868, 3870, 3871, 3872, 3874, 3875, 3876, 3880, 3882, 3883, 3884, 3886, 3887, 3888, 3904, 3912, 3916, 3918, 3919, 3920, 3922, 3923, 3924, 3928, 3930, 3931, 3932, 3934, 3935, 3936, 3944, 3948, 3950, 3951, 3952, 3954, 3955, 3956, 3960, 3962, 3963, 3964, 3966, 3967, 3968, 4000, 4016, 4024, 4028, 4030, 4031, 4032, 4034, 4035, 4036, 4040, 4042, 4043, 4044, 4046, 4047, 4048, 4056, 4060, 4062, 4063, 4064, 4066, 4067, 4068, 4072, 4074, 4075, 4076, 4078, 4079, 4080, 4096, 4104, 4108, 4110, 4111, 4112, 4114, 4115, 4116, 4120, 4122, 4123, 4124, 4126, 4127, 4128, 4136, 4140, 4142, 4143, 4144, 4146, 4147, 4148, 4152, 4154, 4155, 4156, 4158, 4159, 4160, 4224, 4256, 4272, 4280, 4284, 4286, 4287, 4288, 4290, 4291, 4292, 4296, 4298, 4299, 4300, 4302, 4303, 4304, 4312, 4316, 4318, 4319, 4320, 4322, 4323, 4324, 4328, 4330, 4331, 4332, 4334, 4335, 4336, 4352, 4360, 4364, 4366, 4367, 4368, 4370, 4371, 4372, 4376, 4378, 4379, 4380, 4382, 4383, 4384, 4392, 4396, 4398, 4399, 4400, 4402, 4403, 4404, 4408, 4410, 4411, 4412, 4414, 4415, 4416, 4448, 4464, 4472, 4476, 4478, 4479, 4480, 4482, 4483, 4484, 4488, 4490, 4491, 4492, 4494, 4495, 4496, 4504, 4508, 4510, 4511, 4512, 4514, 4515, 4516, 4520, 4522, 4523, 4524, 4526, 4527, 4528, 4544, 4552, 4556, 4558, 4559, 4560, 4562, 4563, 4564, 4568, 4570, 4571, 4572, 4574, 4575, 4576, 4584, 4588, 4590, 4591, 4592, 4594, 4595, 4596, 4600, 4602, 4603, 4604, 4606, 4607};
static const int16_t tree_offset_ffLDL1024[] = { 0, 512, 768, 896, 960, 992, 1008, 1016, 1020, 1022, 1023, 1024, 1026, 1027, 1028, 1032, 1034, 1035, 1036, 1038, 1039, 1040, 1048, 1052, 1054, 1055, 1056, 1058, 1059, 1060, 1064, 1066, 1067, 1068, 1070, 1071, 1072, 1088, 1096, 1100, 1102, 1103, 1104, 1106, 1107, 1108, 1112, 1114, 1115, 1116, 1118, 1119, 1120, 1128, 1132, 1134, 1135, 1136, 1138, 1139, 1140, 1144, 1146, 1147, 1148, 1150, 1151, 1152, 1184, 1200, 1208, 1212, 1214, 1215, 1216, 1218, 1219, 1220, 1224, 1226, 1227, 1228, 1230, 1231, 1232, 1240, 1244, 1246, 1247, 1248, 1250, 1251, 1252, 1256, 1258, 1259, 1260, 1262, 1263, 1264, 1280, 1288, 1292, 1294, 1295, 1296, 1298, 1299, 1300, 1304, 1306, 1307, 1308, 1310, 1311, 1312, 1320, 1324, 1326, 1327, 1328, 1330, 1331, 1332, 1336, 1338, 1339, 1340, 1342, 1343, 1344, 1408, 1440, 1456, 1464, 1468, 1470, 1471, 1472, 1474, 1475, 1476, 1480, 1482, 1483, 1484, 1486, 1487, 1488, 1496, 1500, 1502, 1503, 1504, 1506, 1507, 1508, 1512, 1514, 1515, 1516, 1518, 1519, 1520, 1536, 1544, 1548, 1550, 1551, 1552, 1554, 1555, 1556, 1560, 1562, 1563, 1564, 1566, 1567, 1568, 1576, 1580, 1582, 1583, 1584, 1586, 1587, 1588, 1592, 1594, 1595, 1596, 1598, 1599, 1600, 1632, 1648, 1656, 1660, 1662, 1663, 1664, 1666, 1667, 1668, 1672, 1674, 1675, 1676, 1678, 1679, 1680, 1688, 1692, 1694, 1695, 1696, 1698, 1699, 1700, 1704, 1706, 1707, 1708, 1710, 1711, 1712, 1728, 1736, 1740, 1742, 1743, 1744, 1746, 1747, 1748, 1752, 1754, 1755, 1756, 1758, 1759, 1760, 1768, 1772, 1774, 1775, 1776, 1778, 1779, 1780, 1784, 1786, 1787, 1788, 1790, 1791, 1792, 1920, 1984, 2016, 2032, 2040, 2044, 2046, 2047, 2048, 2050, 2051, 2052, 2056, 2058, 2059, 2060, 2062, 2063, 2064, 2072, 2076, 2078, 2079, 2080, 2082, 2083, 2084, 2088, 2090, 2091, 2092, 2094, 2095, 2096, 2112, 2120, 2124, 2126, 2127, 2128, 2130, 2131, 2132, 2136, 2138, 2139, 2140, 2142, 2143, 2144, 2152, 2156, 2158, 2159, 2160, 2162, 2163, 2164, 2168, 2170, 2171, 2172, 2174, 2175, 2176, 2208, 2224, 2232, 2236, 2238, 2239, 2240, 2242, 2243, 2244, 2248, 2250, 2251, 2252, 2254, 2255, 2256, 2264, 2268, 2270, 2271, 2272, 2274, 2275, 2276, 2280, 2282, 2283, 2284, 2286, 2287, 2288, 2304, 2312, 2316, 2318, 2319, 2320, 2322, 2323, 2324, 2328, 2330, 2331, 2332, 2334, 2335, 2336, 2344, 2348, 2350, 2351, 2352, 2354, 2355, 2356, 2360, 2362, 2363, 2364, 2366, 2367, 2368, 2432, 2464, 2480, 2488, 2492, 2494, 2495, 2496, 2498, 2499, 2500, 2504, 2506, 2507, 2508, 2510, 2511, 2512, 2520, 2524, 2526, 2527, 2528, 2530, 2531, 2532, 2536, 2538, 2539, 2540, 2542, 2543, 2544, 2560, 2568, 2572, 2574, 2575, 2576, 2578, 2579, 2580, 2584, 2586, 2587, 2588, 2590, 2591, 2592, 2600, 2604, 2606, 2607, 2608, 2610, 2611, 2612, 2616, 2618, 2619, 2620, 2622, 2623, 2624, 2656, 2672, 2680, 2684, 2686, 2687, 2688, 2690, 2691, 2692, 2696, 2698, 2699, 2700, 2702, 2703, 2704, 2712, 2716, 2718, 2719, 2720, 2722, 2723, 2724, 2728, 2730, 2731, 2732, 2734, 2735, 2736, 2752, 2760, 2764, 2766, 2767, 2768, 2770, 2771, 2772, 2776, 2778, 2779, 2780, 2782, 2783, 2784, 2792, 2796, 2798, 2799, 2800, 2802, 2803, 2804, 2808, 2810, 2811, 2812, 2814, 2815, 2816, 3072, 3200, 3264, 3296, 3312, 3320, 3324, 3326, 3327, 3328, 3330, 3331, 3332, 3336, 3338, 3339, 3340, 3342, 3343, 3344, 3352, 3356, 3358, 3359, 3360, 3362, 3363, 3364, 3368, 3370, 3371, 3372, 3374, 3375, 3376, 3392, 3400, 3404, 3406, 3407, 3408, 3410, 3411, 3412, 3416, 3418, 3419, 3420, 3422, 3423, 3424, 3432, 3436, 3438, 3439, 3440, 3442, 3443, 3444, 3448, 3450, 3451, 3452, 3454, 3455, 3456, 3488, 3504, 3512, 3516, 3518, 3519, 3520, 3522, 3523, 3524, 3528, 3530, 3531, 3532, 3534, 3535, 3536, 3544, 3548, 3550, 3551, 3552, 3554, 3555, 3556, 3560, 3562, 3563, 3564, 3566, 3567, 3568, 3584, 3592, 3596, 3598, 3599, 3600, 3602, 3603, 3604, 3608, 3610, 3611, 3612, 3614, 3615, 3616, 3624, 3628, 3630, 3631, 3632, 3634, 3635, 3636, 3640, 3642, 3643, 3644, 3646, 3647, 3648, 3712, 3744, 3760, 3768, 3772, 3774, 3775, 3776, 3778, 3779, 3780, 3784, 3786, 3787, 3788, 3790, 3791, 3792, 3800, 3804, 3806, 3807, 3808, 3810, 3811, 3812, 3816, 3818, 3819, 3820, 3822, 3823, 3824, 3840, 3848, 3852, 3854, 3855, 3856, 3858, 3859, 3860, 3864, 3866, 3867, 3868, 3870, 3871, 3872, 3880, 3884, 3886, 3887, 3888, 3890, 3891, 3892, 3896, 3898, 3899, 3900, 3902, 3903, 3904, 3936, 3952, 3960, 3964, 3966, 3967, 3968, 3970, 3971, 3972, 3976, 3978, 3979, 3980, 3982, 3983, 3984, 3992, 3996, 3998, 3999, 4000, 4002, 4003, 4004, 4008, 4010, 4011, 4012, 4014, 4015, 4016, 4032, 4040, 4044, 4046, 4047, 4048, 4050, 4051, 4052, 4056, 4058, 4059, 4060, 4062, 4063, 4064, 4072, 4076, 4078, 4079, 4080, 4082, 4083, 4084, 4088, 4090, 4091, 4092, 4094, 4095, 4096, 4224, 4288, 4320, 4336, 4344, 4348, 4350, 4351, 4352, 4354, 4355, 4356, 4360, 4362, 4363, 4364, 4366, 4367, 4368, 4376, 4380, 4382, 4383, 4384, 4386, 4387, 4388, 4392, 4394, 4395, 4396, 4398, 4399, 4400, 4416, 4424, 4428, 4430, 4431, 4432, 4434, 4435, 4436, 4440, 4442, 4443, 4444, 4446, 4447, 4448, 4456, 4460, 4462, 4463, 4464, 4466, 4467, 4468, 4472, 4474, 4475, 4476, 4478, 4479, 4480, 4512, 4528, 4536, 4540, 4542, 4543, 4544, 4546, 4547, 4548, 4552, 4554, 4555, 4556, 4558, 4559, 4560, 4568, 4572, 4574, 4575, 4576, 4578, 4579, 4580, 4584, 4586, 4587, 4588, 4590, 4591, 4592, 4608, 4616, 4620, 4622, 4623, 4624, 4626, 4627, 4628, 4632, 4634, 4635, 4636, 4638, 4639, 4640, 4648, 4652, 4654, 4655, 4656, 4658, 4659, 4660, 4664, 4666, 4667, 4668, 4670, 4671, 4672, 4736, 4768, 4784, 4792, 4796, 4798, 4799, 4800, 4802, 4803, 4804, 4808, 4810, 4811, 4812, 4814, 4815, 4816, 4824, 4828, 4830, 4831, 4832, 4834, 4835, 4836, 4840, 4842, 4843, 4844, 4846, 4847, 4848, 4864, 4872, 4876, 4878, 4879, 4880, 4882, 4883, 4884, 4888, 4890, 4891, 4892, 4894, 4895, 4896, 4904, 4908, 4910, 4911, 4912, 4914, 4915, 4916, 4920, 4922, 4923, 4924, 4926, 4927, 4928, 4960, 4976, 4984, 4988, 4990, 4991, 4992, 4994, 4995, 4996, 5000, 5002, 5003, 5004, 5006, 5007, 5008, 5016, 5020, 5022, 5023, 5024, 5026, 5027, 5028, 5032, 5034, 5035, 5036, 5038, 5039, 5040, 5056, 5064, 5068, 5070, 5071, 5072, 5074, 5075, 5076, 5080, 5082, 5083, 5084, 5086, 5087, 5088, 5096, 5100, 5102, 5103, 5104, 5106, 5107, 5108, 5112, 5114, 5115, 5116, 5118, 5119, 5120, 5632, 5888, 6016, 6080, 6112, 6128, 6136, 6140, 6142, 6143, 6144, 6146, 6147, 6148, 6152, 6154, 6155, 6156, 6158, 6159, 6160, 6168, 6172, 6174, 6175, 6176, 6178, 6179, 6180, 6184, 6186, 6187, 6188, 6190, 6191, 6192, 6208, 6216, 6220, 6222, 6223, 6224, 6226, 6227, 6228, 6232, 6234, 6235, 6236, 6238, 6239, 6240, 6248, 6252, 6254, 6255, 6256, 6258, 6259, 6260, 6264, 6266, 6267, 6268, 6270, 6271, 6272, 6304, 6320, 6328, 6332, 6334, 6335, 6336, 6338, 6339, 6340, 6344, 6346, 6347, 6348, 6350, 6351, 6352, 6360, 6364, 6366, 6367, 6368, 6370, 6371, 6372, 6376, 6378, 6379, 6380, 6382, 6383, 6384, 6400, 6408, 6412, 6414, 6415, 6416, 6418, 6419, 6420, 6424, 6426, 6427, 6428, 6430, 6431, 6432, 6440, 6444, 6446, 6447, 6448, 6450, 6451, 6452, 6456, 6458, 6459, 6460, 6462, 6463, 6464, 6528, 6560, 6576, 6584, 6588, 6590, 6591, 6592, 6594, 6595, 6596, 6600, 6602, 6603, 6604, 6606, 6607, 6608, 6616, 6620, 6622, 6623, 6624, 6626, 6627, 6628, 6632, 6634, 6635, 6636, 6638, 6639, 6640, 6656, 6664, 6668, 6670, 6671, 6672, 6674, 6675, 6676, 6680, 6682, 6683, 6684, 6686, 6687, 6688, 6696, 6700, 6702, 6703, 6704, 6706, 6707, 6708, 6712, 6714, 6715, 6716, 6718, 6719, 6720, 6752, 6768, 6776, 6780, 6782, 6783, 6784, 6786, 6787, 6788, 6792, 6794, 6795, 6796, 6798, 6799, 6800, 6808, 6812, 6814, 6815, 6816, 6818, 6819, 6820, 6824, 6826, 6827, 6828, 6830, 6831, 6832, 6848, 6856, 6860, 6862, 6863, 6864, 6866, 6867, 6868, 6872, 6874, 6875, 6876, 6878, 6879, 6880, 6888, 6892, 6894, 6895, 6896, 6898, 6899, 6900, 6904, 6906, 6907, 6908, 6910, 6911, 6912, 7040, 7104, 7136, 7152, 7160, 7164, 7166, 7167, 7168, 7170, 7171, 7172, 7176, 7178, 7179, 7180, 7182, 7183, 7184, 7192, 7196, 7198, 7199, 7200, 7202, 7203, 7204, 7208, 7210, 7211, 7212, 7214, 7215, 7216, 7232, 7240, 7244, 7246, 7247, 7248, 7250, 7251, 7252, 7256, 7258, 7259, 7260, 7262, 7263, 7264, 7272, 7276, 7278, 7279, 7280, 7282, 7283, 7284, 7288, 7290, 7291, 7292, 7294, 7295, 7296, 7328, 7344, 7352, 7356, 7358, 7359, 7360, 7362, 7363, 7364, 7368, 7370, 7371, 7372, 7374, 7375, 7376, 7384, 7388, 7390, 7391, 7392, 7394, 7395, 7396, 7400, 7402, 7403, 7404, 7406, 7407, 7408, 7424, 7432, 7436, 7438, 7439, 7440, 7442, 7443, 7444, 7448, 7450, 7451, 7452, 7454, 7455, 7456, 7464, 7468, 7470, 7471, 7472, 7474, 7475, 7476, 7480, 7482, 7483, 7484, 7486, 7487, 7488, 7552, 7584, 7600, 7608, 7612, 7614, 7615, 7616, 7618, 7619, 7620, 7624, 7626, 7627, 7628, 7630, 7631, 7632, 7640, 7644, 7646, 7647, 7648, 7650, 7651, 7652, 7656, 7658, 7659, 7660, 7662, 7663, 7664, 7680, 7688, 7692, 7694, 7695, 7696, 7698, 7699, 7700, 7704, 7706, 7707, 7708, 7710, 7711, 7712, 7720, 7724, 7726, 7727, 7728, 7730, 7731, 7732, 7736, 7738, 7739, 7740, 7742, 7743, 7744, 7776, 7792, 7800, 7804, 7806, 7807, 7808, 7810, 7811, 7812, 7816, 7818, 7819, 7820, 7822, 7823, 7824, 7832, 7836, 7838, 7839, 7840, 7842, 7843, 7844, 7848, 7850, 7851, 7852, 7854, 7855, 7856, 7872, 7880, 7884, 7886, 7887, 7888, 7890, 7891, 7892, 7896, 7898, 7899, 7900, 7902, 7903, 7904, 7912, 7916, 7918, 7919, 7920, 7922, 7923, 7924, 7928, 7930, 7931, 7932, 7934, 7935, 7936, 8192, 8320, 8384, 8416, 8432, 8440, 8444, 8446, 8447, 8448, 8450, 8451, 8452, 8456, 8458, 8459, 8460, 8462, 8463, 8464, 8472, 8476, 8478, 8479, 8480, 8482, 8483, 8484, 8488, 8490, 8491, 8492, 8494, 8495, 8496, 8512, 8520, 8524, 8526, 8527, 8528, 8530, 8531, 8532, 8536, 8538, 8539, 8540, 8542, 8543, 8544, 8552, 8556, 8558, 8559, 8560, 8562, 8563, 8564, 8568, 8570, 8571, 8572, 8574, 8575, 8576, 8608, 8624, 8632, 8636, 8638, 8639, 8640, 8642, 8643, 8644, 8648, 8650, 8651, 8652, 8654, 8655, 8656, 8664, 8668, 8670, 8671, 8672, 8674, 8675, 8676, 8680, 8682, 8683, 8684, 8686, 8687, 8688, 8704, 8712, 8716, 8718, 8719, 8720, 8722, 8723, 8724, 8728, 8730, 8731, 8732, 8734, 8735, 8736, 8744, 8748, 8750, 8751, 8752, 8754, 8755, 8756, 8760, 8762, 8763, 8764, 8766, 8767, 8768, 8832, 8864, 8880, 8888, 8892, 8894, 8895, 8896, 8898, 8899, 8900, 8904, 8906, 8907, 8908, 8910, 8911, 8912, 8920, 8924, 8926, 8927, 8928, 8930, 8931, 8932, 8936, 8938, 8939, 8940, 8942, 8943, 8944, 8960, 8968, 8972, 8974, 8975, 8976, 8978, 8979, 8980, 8984, 8986, 8987, 8988, 8990, 8991, 8992, 9000, 9004, 9006, 9007, 9008, 9010, 9011, 9012, 9016, 9018, 9019, 9020, 9022, 9023, 9024, 9056, 9072, 9080, 9084, 9086, 9087, 9088, 9090, 9091, 9092, 9096, 9098, 9099, 9100, 9102, 9103, 9104, 9112, 9116, 9118, 9119, 9120, 9122, 9123, 9124, 9128, 9130, 9131, 9132, 9134, 9135, 9136, 9152, 9160, 9164, 9166, 9167, 9168, 9170, 9171, 9172, 9176, 9178, 9179, 9180, 9182, 9183, 9184, 9192, 9196, 9198, 9199, 9200, 9202, 9203, 9204, 9208, 9210, 9211, 9212, 9214, 9215, 9216, 9344, 9408, 9440, 9456, 9464, 9468, 9470, 9471, 9472, 9474, 9475, 9476, 9480, 9482, 9483, 9484, 9486, 9487, 9488, 9496, 9500, 9502, 9503, 9504, 9506, 9507, 9508, 9512, 9514, 9515, 9516, 9518, 9519, 9520, 9536, 9544, 9548, 9550, 9551, 9552, 9554, 9555, 9556, 9560, 9562, 9563, 9564, 9566, 9567, 9568, 9576, 9580, 9582, 9583, 9584, 9586, 9587, 9588, 9592, 9594, 9595, 9596, 9598, 9599, 9600, 9632, 9648, 9656, 9660, 9662, 9663, 9664, 9666, 9667, 9668, 9672, 9674, 9675, 9676, 9678, 9679, 9680, 9688, 9692, 9694, 9695, 9696, 9698, 9699, 9700, 9704, 9706, 9707, 9708, 9710, 9711, 9712, 9728, 9736, 9740, 9742, 9743, 9744, 9746, 9747, 9748, 9752, 9754, 9755, 9756, 9758, 9759, 9760, 9768, 9772, 9774, 9775, 9776, 9778, 9779, 9780, 9784, 9786, 9787, 9788, 9790, 9791, 9792, 9856, 9888, 9904, 9912, 9916, 9918, 9919, 9920, 9922, 9923, 9924, 9928, 9930, 9931, 9932, 9934, 9935, 9936, 9944, 9948, 9950, 9951, 9952, 9954, 9955, 9956, 9960, 9962, 9963, 9964, 9966, 9967, 9968, 9984, 9992, 9996, 9998, 9999, 10000, 10002, 10003, 10004, 10008, 10010, 10011, 10012, 10014, 10015, 10016, 10024, 10028, 10030, 10031, 10032, 10034, 10035, 10036, 10040, 10042, 10043, 10044, 10046, 10047, 10048, 10080, 10096, 10104, 10108, 10110, 10111, 10112, 10114, 10115, 10116, 10120, 10122, 10123, 10124, 10126, 10127, 10128, 10136, 10140, 10142, 10143, 10144, 10146, 10147, 10148, 10152, 10154, 10155, 10156, 10158, 10159, 10160, 10176, 10184, 10188, 10190, 10191, 10192, 10194, 10195, 10196, 10200, 10202, 10203, 10204, 10206, 10207, 10208, 10216, 10220, 10222, 10223, 10224, 10226, 10227, 10228, 10232, 10234, 10235, 10236, 10238, 10239};

static const int16_t g0_offset512[] = {512, 768, 896, 960, 992, 1008, 1016, 1020, 1022, 1020, 1016, 1018, 1016, 1008, 1012, 1014, 1012, 1008, 1010, 1008, 992, 1000, 1004, 1006, 1004, 1000, 1002, 1000, 992, 996, 998, 996, 992, 994, 992, 960, 976, 984, 988, 990, 988, 984, 986, 984, 976, 980, 982, 980, 976, 978, 976, 960, 968, 972, 974, 972, 968, 970, 968, 960, 964, 966, 964, 960, 962, 960, 896, 928, 944, 952, 956, 958, 956, 952, 954, 952, 944, 948, 950, 948, 944, 946, 944, 928, 936, 940, 942, 940, 936, 938, 936, 928, 932, 934, 932, 928, 930, 928, 896, 912, 920, 924, 926, 924, 920, 922, 920, 912, 916, 918, 916, 912, 914, 912, 896, 904, 908, 910, 908, 904, 906, 904, 896, 900, 902, 900, 896, 898, 896, 768, 832, 864, 880, 888, 892, 894, 892, 888, 890, 888, 880, 884, 886, 884, 880, 882, 880, 864, 872, 876, 878, 876, 872, 874, 872, 864, 868, 870, 868, 864, 866, 864, 832, 848, 856, 860, 862, 860, 856, 858, 856, 848, 852, 854, 852, 848, 850, 848, 832, 840, 844, 846, 844, 840, 842, 840, 832, 836, 838, 836, 832, 834, 832, 768, 800, 816, 824, 828, 830, 828, 824, 826, 824, 816, 820, 822, 820, 816, 818, 816, 800, 808, 812, 814, 812, 808, 810, 808, 800, 804, 806, 804, 800, 802, 800, 768, 784, 792, 796, 798, 796, 792, 794, 792, 784, 788, 790, 788, 784, 786, 784, 768, 776, 780, 782, 780, 776, 778, 776, 768, 772, 774, 772, 768, 770, 768, 512, 640, 704, 736, 752, 760, 764, 766, 764, 760, 762, 760, 752, 756, 758, 756, 752, 754, 752, 736, 744, 748, 750, 748, 744, 746, 744, 736, 740, 742, 740, 736, 738, 736, 704, 720, 728, 732, 734, 732, 728, 730, 728, 720, 724, 726, 724, 720, 722, 720, 704, 712, 716, 718, 716, 712, 714, 712, 704, 708, 710, 708, 704, 706, 704, 640, 672, 688, 696, 700, 702, 700, 696, 698, 696, 688, 692, 694, 692, 688, 690, 688, 672, 680, 684, 686, 684, 680, 682, 680, 672, 676, 678, 676, 672, 674, 672, 640, 656, 664, 668, 670, 668, 664, 666, 664, 656, 660, 662, 660, 656, 658, 656, 640, 648, 652, 654, 652, 648, 650, 648, 640, 644, 646, 644, 640, 642, 640, 512, 576, 608, 624, 632, 636, 638, 636, 632, 634, 632, 624, 628, 630, 628, 624, 626, 624, 608, 616, 620, 622, 620, 616, 618, 616, 608, 612, 614, 612, 608, 610, 608, 576, 592, 600, 604, 606, 604, 600, 602, 600, 592, 596, 598, 596, 592, 594, 592, 576, 584, 588, 590, 588, 584, 586, 584, 576, 580, 582, 580, 576, 578, 576, 512, 544, 560, 568, 572, 574, 572, 568, 570, 568, 560, 564, 566, 564, 560, 562, 560, 544, 552, 556, 558, 556, 552, 554, 552, 544, 548, 550, 548, 544, 546, 544, 512, 528, 536, 540, 542, 540, 536, 538, 536, 528, 532, 534, 532, 528, 530, 528, 512, 520, 524, 526, 524, 520, 522, 520, 512, 516, 518, 516, 512, 514, 512, 0, 256, 384, 448, 480, 496, 504, 508, 510, 508, 504, 506, 504, 496, 500, 502, 500, 496, 498, 496, 480, 488, 492, 494, 492, 488, 490, 488, 480, 484, 486, 484, 480, 482, 480, 448, 464, 472, 476, 478, 476, 472, 474, 472, 464, 468, 470, 468, 464, 466, 464, 448, 456, 460, 462, 460, 456, 458, 456, 448, 452, 454, 452, 448, 450, 448, 384, 416, 432, 440, 444, 446, 444, 440, 442, 440, 432, 436, 438, 436, 432, 434, 432, 416, 424, 428, 430, 428, 424, 426, 424, 416, 420, 422, 420, 416, 418, 416, 384, 400, 408, 412, 414, 412, 408, 410, 408, 400, 404, 406, 404, 400, 402, 400, 384, 392, 396, 398, 396, 392, 394, 392, 384, 388, 390, 388, 384, 386, 384, 256, 320, 352, 368, 376, 380, 382, 380, 376, 378, 376, 368, 372, 374, 372, 368, 370, 368, 352, 360, 364, 366, 364, 360, 362, 360, 352, 356, 358, 356, 352, 354, 352, 320, 336, 344, 348, 350, 348, 344, 346, 344, 336, 340, 342, 340, 336, 338, 336, 320, 328, 332, 334, 332, 328, 330, 328, 320, 324, 326, 324, 320, 322, 320, 256, 288, 304, 312, 316, 318, 316, 312, 314, 312, 304, 308, 310, 308, 304, 306, 304, 288, 296, 300, 302, 300, 296, 298, 296, 288, 292, 294, 292, 288, 290, 288, 256, 272, 280, 284, 286, 284, 280, 282, 280, 272, 276, 278, 276, 272, 274, 272, 256, 264, 268, 270, 268, 264, 266, 264, 256, 260, 262, 260, 256, 258, 256, 0, 128, 192, 224, 240, 248, 252, 254, 252, 248, 250, 248, 240, 244, 246, 244, 240, 242, 240, 224, 232, 236, 238, 236, 232, 234, 232, 224, 228, 230, 228, 224, 226, 224, 192, 208, 216, 220, 222, 220, 216, 218, 216, 208, 212, 214, 212, 208, 210, 208, 192, 200, 204, 206, 204, 200, 202, 200, 192, 196, 198, 196, 192, 194, 192, 128, 160, 176, 184, 188, 190, 188, 184, 186, 184, 176, 180, 182, 180, 176, 178, 176, 160, 168, 172, 174, 172, 168, 170, 168, 160, 164, 166, 164, 160, 162, 160, 128, 144, 152, 156, 158, 156, 152, 154, 152, 144, 148, 150, 148, 144, 146, 144, 128, 136, 140, 142, 140, 136, 138, 136, 128, 132, 134, 132, 128, 130, 128, 0, 64, 96, 112, 120, 124, 126, 124, 120, 122, 120, 112, 116, 118, 116, 112, 114, 112, 96, 104, 108, 110, 108, 104, 106, 104, 96, 100, 102, 100, 96, 98, 96, 64, 80, 88, 92, 94, 92, 88, 90, 88, 80, 84, 86, 84, 80, 82, 80, 64, 72, 76, 78, 76, 72, 74, 72, 64, 68, 70, 68, 64, 66, 64, 0, 32, 48, 56, 60, 62, 60, 56, 58, 56, 48, 52, 54, 52, 48, 50, 48, 32, 40, 44, 46, 44, 40, 42, 40, 32, 36, 38, 36, 32, 34, 32, 0, 16, 24, 28, 30, 28, 24, 26, 24, 16, 20, 22, 20, 16, 18, 16, 0, 8, 12, 14, 12, 8, 10, 8, 0, 4, 6, 4, 0, 2, 0};
static const int16_t g0_offset1024[] = {1024, 1536, 1792, 1920, 1984, 2016, 2032, 2040, 2044, 2046, 2044, 2040, 2042, 2040, 2032, 2036, 2038, 2036, 2032, 2034, 2032, 2016, 2024, 2028, 2030, 2028, 2024, 2026, 2024, 2016, 2020, 2022, 2020, 2016, 2018, 2016, 1984, 2000, 2008, 2012, 2014, 2012, 2008, 2010, 2008, 2000, 2004, 2006, 2004, 2000, 2002, 2000, 1984, 1992, 1996, 1998, 1996, 1992, 1994, 1992, 1984, 1988, 1990, 1988, 1984, 1986, 1984, 1920, 1952, 1968, 1976, 1980, 1982, 1980, 1976, 1978, 1976, 1968, 1972, 1974, 1972, 1968, 1970, 1968, 1952, 1960, 1964, 1966, 1964, 1960, 1962, 1960, 1952, 1956, 1958, 1956, 1952, 1954, 1952, 1920, 1936, 1944, 1948, 1950, 1948, 1944, 1946, 1944, 1936, 1940, 1942, 1940, 1936, 1938, 1936, 1920, 1928, 1932, 1934, 1932, 1928, 1930, 1928, 1920, 1924, 1926, 1924, 1920, 1922, 1920, 1792, 1856, 1888, 1904, 1912, 1916, 1918, 1916, 1912, 1914, 1912, 1904, 1908, 1910, 1908, 1904, 1906, 1904, 1888, 1896, 1900, 1902, 1900, 1896, 1898, 1896, 1888, 1892, 1894, 1892, 1888, 1890, 1888, 1856, 1872, 1880, 1884, 1886, 1884, 1880, 1882, 1880, 1872, 1876, 1878, 1876, 1872, 1874, 1872, 1856, 1864, 1868, 1870, 1868, 1864, 1866, 1864, 1856, 1860, 1862, 1860, 1856, 1858, 1856, 1792, 1824, 1840, 1848, 1852, 1854, 1852, 1848, 1850, 1848, 1840, 1844, 1846, 1844, 1840, 1842, 1840, 1824, 1832, 1836, 1838, 1836, 1832, 1834, 1832, 1824, 1828, 1830, 1828, 1824, 1826, 1824, 1792, 1808, 1816, 1820, 1822, 1820, 1816, 1818, 1816, 1808, 1812, 1814, 1812, 1808, 1810, 1808, 1792, 1800, 1804, 1806, 1804, 1800, 1802, 1800, 1792, 1796, 1798, 1796, 1792, 1794, 1792, 1536, 1664, 1728, 1760, 1776, 1784, 1788, 1790, 1788, 1784, 1786, 1784, 1776, 1780, 1782, 1780, 1776, 1778, 1776, 1760, 1768, 1772, 1774, 1772, 1768, 1770, 1768, 1760, 1764, 1766, 1764, 1760, 1762, 1760, 1728, 1744, 1752, 1756, 1758, 1756, 1752, 1754, 1752, 1744, 1748, 1750, 1748, 1744, 1746, 1744, 1728, 1736, 1740, 1742, 1740, 1736, 1738, 1736, 1728, 1732, 1734, 1732, 1728, 1730, 1728, 1664, 1696, 1712, 1720, 1724, 1726, 1724, 1720, 1722, 1720, 1712, 1716, 1718, 1716, 1712, 1714, 1712, 1696, 1704, 1708, 1710, 1708, 1704, 1706, 1704, 1696, 1700, 1702, 1700, 1696, 1698, 1696, 1664, 1680, 1688, 1692, 1694, 1692, 1688, 1690, 1688, 1680, 1684, 1686, 1684, 1680, 1682, 1680, 1664, 1672, 1676, 1678, 1676, 1672, 1674, 1672, 1664, 1668, 1670, 1668, 1664, 1666, 1664, 1536, 1600, 1632, 1648, 1656, 1660, 1662, 1660, 1656, 1658, 1656, 1648, 1652, 1654, 1652, 1648, 1650, 1648, 1632, 1640, 1644, 1646, 1644, 1640, 1642, 1640, 1632, 1636, 1638, 1636, 1632, 1634, 1632, 1600, 1616, 1624, 1628, 1630, 1628, 1624, 1626, 1624, 1616, 1620, 1622, 1620, 1616, 1618, 1616, 1600, 1608, 1612, 1614, 1612, 1608, 1610, 1608, 1600, 1604, 1606, 1604, 1600, 1602, 1600, 1536, 1568, 1584, 1592, 1596, 1598, 1596, 1592, 1594, 1592, 1584, 1588, 1590, 1588, 1584, 1586, 1584, 1568, 1576, 1580, 1582, 1580, 1576, 1578, 1576, 1568, 1572, 1574, 1572, 1568, 1570, 1568, 1536, 1552, 1560, 1564, 1566, 1564, 1560, 1562, 1560, 1552, 1556, 1558, 1556, 1552, 1554, 1552, 1536, 1544, 1548, 1550, 1548, 1544, 1546, 1544, 1536, 1540, 1542, 1540, 1536, 1538, 1536, 1024, 1280, 1408, 1472, 1504, 1520, 1528, 1532, 1534, 1532, 1528, 1530, 1528, 1520, 1524, 1526, 1524, 1520, 1522, 1520, 1504, 1512, 1516, 1518, 1516, 1512, 1514, 1512, 1504, 1508, 1510, 1508, 1504, 1506, 1504, 1472, 1488, 1496, 1500, 1502, 1500, 1496, 1498, 1496, 1488, 1492, 1494, 1492, 1488, 1490, 1488, 1472, 1480, 1484, 1486, 1484, 1480, 1482, 1480, 1472, 1476, 1478, 1476, 1472, 1474, 1472, 1408, 1440, 1456, 1464, 1468, 1470, 1468, 1464, 1466, 1464, 1456, 1460, 1462, 1460, 1456, 1458, 1456, 1440, 1448, 1452, 1454, 1452, 1448, 1450, 1448, 1440, 1444, 1446, 1444, 1440, 1442, 1440, 1408, 1424, 1432, 1436, 1438, 1436, 1432, 1434, 1432, 1424, 1428, 1430, 1428, 1424, 1426, 1424, 1408, 1416, 1420, 1422, 1420, 1416, 1418, 1416, 1408, 1412, 1414, 1412, 1408, 1410, 1408, 1280, 1344, 1376, 1392, 1400, 1404, 1406, 1404, 1400, 1402, 1400, 1392, 1396, 1398, 1396, 1392, 1394, 1392, 1376, 1384, 1388, 1390, 1388, 1384, 1386, 1384, 1376, 1380, 1382, 1380, 1376, 1378, 1376, 1344, 1360, 1368, 1372, 1374, 1372, 1368, 1370, 1368, 1360, 1364, 1366, 1364, 1360, 1362, 1360, 1344, 1352, 1356, 1358, 1356, 1352, 1354, 1352, 1344, 1348, 1350, 1348, 1344, 1346, 1344, 1280, 1312, 1328, 1336, 1340, 1342, 1340, 1336, 1338, 1336, 1328, 1332, 1334, 1332, 1328, 1330, 1328, 1312, 1320, 1324, 1326, 1324, 1320, 1322, 1320, 1312, 1316, 1318, 1316, 1312, 1314, 1312, 1280, 1296, 1304, 1308, 1310, 1308, 1304, 1306, 1304, 1296, 1300, 1302, 1300, 1296, 1298, 1296, 1280, 1288, 1292, 1294, 1292, 1288, 1290, 1288, 1280, 1284, 1286, 1284, 1280, 1282, 1280, 1024, 1152, 1216, 1248, 1264, 1272, 1276, 1278, 1276, 1272, 1274, 1272, 1264, 1268, 1270, 1268, 1264, 1266, 1264, 1248, 1256, 1260, 1262, 1260, 1256, 1258, 1256, 1248, 1252, 1254, 1252, 1248, 1250, 1248, 1216, 1232, 1240, 1244, 1246, 1244, 1240, 1242, 1240, 1232, 1236, 1238, 1236, 1232, 1234, 1232, 1216, 1224, 1228, 1230, 1228, 1224, 1226, 1224, 1216, 1220, 1222, 1220, 1216, 1218, 1216, 1152, 1184, 1200, 1208, 1212, 1214, 1212, 1208, 1210, 1208, 1200, 1204, 1206, 1204, 1200, 1202, 1200, 1184, 1192, 1196, 1198, 1196, 1192, 1194, 1192, 1184, 1188, 1190, 1188, 1184, 1186, 1184, 1152, 1168, 1176, 1180, 1182, 1180, 1176, 1178, 1176, 1168, 1172, 1174, 1172, 1168, 1170, 1168, 1152, 1160, 1164, 1166, 1164, 1160, 1162, 1160, 1152, 1156, 1158, 1156, 1152, 1154, 1152, 1024, 1088, 1120, 1136, 1144, 1148, 1150, 1148, 1144, 1146, 1144, 1136, 1140, 1142, 1140, 1136, 1138, 1136, 1120, 1128, 1132, 1134, 1132, 1128, 1130, 1128, 1120, 1124, 1126, 1124, 1120, 1122, 1120, 1088, 1104, 1112, 1116, 1118, 1116, 1112, 1114, 1112, 1104, 1108, 1110, 1108, 1104, 1106, 1104, 1088, 1096, 1100, 1102, 1100, 1096, 1098, 1096, 1088, 1092, 1094, 1092, 1088, 1090, 1088, 1024, 1056, 1072, 1080, 1084, 1086, 1084, 1080, 1082, 1080, 1072, 1076, 1078, 1076, 1072, 1074, 1072, 1056, 1064, 1068, 1070, 1068, 1064, 1066, 1064, 1056, 1060, 1062, 1060, 1056, 1058, 1056, 1024, 1040, 1048, 1052, 1054, 1052, 1048, 1050, 1048, 1040, 1044, 1046, 1044, 1040, 1042, 1040, 1024, 1032, 1036, 1038, 1036, 1032, 1034, 1032, 1024, 1028, 1030, 1028, 1024, 1026, 1024, 0, 512, 768, 896, 960, 992, 1008, 1016, 1020, 1022, 1020, 1016, 1018, 1016, 1008, 1012, 1014, 1012, 1008, 1010, 1008, 992, 1000, 1004, 1006, 1004, 1000, 1002, 1000, 992, 996, 998, 996, 992, 994, 992, 960, 976, 984, 988, 990, 988, 984, 986, 984, 976, 980, 982, 980, 976, 978, 976, 960, 968, 972, 974, 972, 968, 970, 968, 960, 964, 966, 964, 960, 962, 960, 896, 928, 944, 952, 956, 958, 956, 952, 954, 952, 944, 948, 950, 948, 944, 946, 944, 928, 936, 940, 942, 940, 936, 938, 936, 928, 932, 934, 932, 928, 930, 928, 896, 912, 920, 924, 926, 924, 920, 922, 920, 912, 916, 918, 916, 912, 914, 912, 896, 904, 908, 910, 908, 904, 906, 904, 896, 900, 902, 900, 896, 898, 896, 768, 832, 864, 880, 888, 892, 894, 892, 888, 890, 888, 880, 884, 886, 884, 880, 882, 880, 864, 872, 876, 878, 876, 872, 874, 872, 864, 868, 870, 868, 864, 866, 864, 832, 848, 856, 860, 862, 860, 856, 858, 856, 848, 852, 854, 852, 848, 850, 848, 832, 840, 844, 846, 844, 840, 842, 840, 832, 836, 838, 836, 832, 834, 832, 768, 800, 816, 824, 828, 830, 828, 824, 826, 824, 816, 820, 822, 820, 816, 818, 816, 800, 808, 812, 814, 812, 808, 810, 808, 800, 804, 806, 804, 800, 802, 800, 768, 784, 792, 796, 798, 796, 792, 794, 792, 784, 788, 790, 788, 784, 786, 784, 768, 776, 780, 782, 780, 776, 778, 776, 768, 772, 774, 772, 768, 770, 768, 512, 640, 704, 736, 752, 760, 764, 766, 764, 760, 762, 760, 752, 756, 758, 756, 752, 754, 752, 736, 744, 748, 750, 748, 744, 746, 744, 736, 740, 742, 740, 736, 738, 736, 704, 720, 728, 732, 734, 732, 728, 730, 728, 720, 724, 726, 724, 720, 722, 720, 704, 712, 716, 718, 716, 712, 714, 712, 704, 708, 710, 708, 704, 706, 704, 640, 672, 688, 696, 700, 702, 700, 696, 698, 696, 688, 692, 694, 692, 688, 690, 688, 672, 680, 684, 686, 684, 680, 682, 680, 672, 676, 678, 676, 672, 674, 672, 640, 656, 664, 668, 670, 668, 664, 666, 664, 656, 660, 662, 660, 656, 658, 656, 640, 648, 652, 654, 652, 648, 650, 648, 640, 644, 646, 644, 640, 642, 640, 512, 576, 608, 624, 632, 636, 638, 636, 632, 634, 632, 624, 628, 630, 628, 624, 626, 624, 608, 616, 620, 622, 620, 616, 618, 616, 608, 612, 614, 612, 608, 610, 608, 576, 592, 600, 604, 606, 604, 600, 602, 600, 592, 596, 598, 596, 592, 594, 592, 576, 584, 588, 590, 588, 584, 586, 584, 576, 580, 582, 580, 576, 578, 576, 512, 544, 560, 568, 572, 574, 572, 568, 570, 568, 560, 564, 566, 564, 560, 562, 560, 544, 552, 556, 558, 556, 552, 554, 552, 544, 548, 550, 548, 544, 546, 544, 512, 528, 536, 540, 542, 540, 536, 538, 536, 528, 532, 534, 532, 528, 530, 528, 512, 520, 524, 526, 524, 520, 522, 520, 512, 516, 518, 516, 512, 514, 512, 0, 256, 384, 448, 480, 496, 504, 508, 510, 508, 504, 506, 504, 496, 500, 502, 500, 496, 498, 496, 480, 488, 492, 494, 492, 488, 490, 488, 480, 484, 486, 484, 480, 482, 480, 448, 464, 472, 476, 478, 476, 472, 474, 472, 464, 468, 470, 468, 464, 466, 464, 448, 456, 460, 462, 460, 456, 458, 456, 448, 452, 454, 452, 448, 450, 448, 384, 416, 432, 440, 444, 446, 444, 440, 442, 440, 432, 436, 438, 436, 432, 434, 432, 416, 424, 428, 430, 428, 424, 426, 424, 416, 420, 422, 420, 416, 418, 416, 384, 400, 408, 412, 414, 412, 408, 410, 408, 400, 404, 406, 404, 400, 402, 400, 384, 392, 396, 398, 396, 392, 394, 392, 384, 388, 390, 388, 384, 386, 384, 256, 320, 352, 368, 376, 380, 382, 380, 376, 378, 376, 368, 372, 374, 372, 368, 370, 368, 352, 360, 364, 366, 364, 360, 362, 360, 352, 356, 358, 356, 352, 354, 352, 320, 336, 344, 348, 350, 348, 344, 346, 344, 336, 340, 342, 340, 336, 338, 336, 320, 328, 332, 334, 332, 328, 330, 328, 320, 324, 326, 324, 320, 322, 320, 256, 288, 304, 312, 316, 318, 316, 312, 314, 312, 304, 308, 310, 308, 304, 306, 304, 288, 296, 300, 302, 300, 296, 298, 296, 288, 292, 294, 292, 288, 290, 288, 256, 272, 280, 284, 286, 284, 280, 282, 280, 272, 276, 278, 276, 272, 274, 272, 256, 264, 268, 270, 268, 264, 266, 264, 256, 260, 262, 260, 256, 258, 256, 0, 128, 192, 224, 240, 248, 252, 254, 252, 248, 250, 248, 240, 244, 246, 244, 240, 242, 240, 224, 232, 236, 238, 236, 232, 234, 232, 224, 228, 230, 228, 224, 226, 224, 192, 208, 216, 220, 222, 220, 216, 218, 216, 208, 212, 214, 212, 208, 210, 208, 192, 200, 204, 206, 204, 200, 202, 200, 192, 196, 198, 196, 192, 194, 192, 128, 160, 176, 184, 188, 190, 188, 184, 186, 184, 176, 180, 182, 180, 176, 178, 176, 160, 168, 172, 174, 172, 168, 170, 168, 160, 164, 166, 164, 160, 162, 160, 128, 144, 152, 156, 158, 156, 152, 154, 152, 144, 148, 150, 148, 144, 146, 144, 128, 136, 140, 142, 140, 136, 138, 136, 128, 132, 134, 132, 128, 130, 128, 0, 64, 96, 112, 120, 124, 126, 124, 120, 122, 120, 112, 116, 118, 116, 112, 114, 112, 96, 104, 108, 110, 108, 104, 106, 104, 96, 100, 102, 100, 96, 98, 96, 64, 80, 88, 92, 94, 92, 88, 90, 88, 80, 84, 86, 84, 80, 82, 80, 64, 72, 76, 78, 76, 72, 74, 72, 64, 68, 70, 68, 64, 66, 64, 0, 32, 48, 56, 60, 62, 60, 56, 58, 56, 48, 52, 54, 52, 48, 50, 48, 32, 40, 44, 46, 44, 40, 42, 40, 32, 36, 38, 36, 32, 34, 32, 0, 16, 24, 28, 30, 28, 24, 26, 24, 16, 20, 22, 20, 16, 18, 16, 0, 8, 12, 14, 12, 8, 10, 8, 0, 4, 6, 4, 0, 2, 0};

static const int16_t g1_offset512[] = {768, 896, 960, 992, 1008, 1016, 1020, 1022, 1023, 1021, 1018, 1019, 1017, 1012, 1014, 1015, 1013, 1010, 1011, 1009, 1000, 1004, 1006, 1007, 1005, 1002, 1003, 1001, 996, 998, 999, 997, 994, 995, 993, 976, 984, 988, 990, 991, 989, 986, 987, 985, 980, 982, 983, 981, 978, 979, 977, 968, 972, 974, 975, 973, 970, 971, 969, 964, 966, 967, 965, 962, 963, 961, 928, 944, 952, 956, 958, 959, 957, 954, 955, 953, 948, 950, 951, 949, 946, 947, 945, 936, 940, 942, 943, 941, 938, 939, 937, 932, 934, 935, 933, 930, 931, 929, 912, 920, 924, 926, 927, 925, 922, 923, 921, 916, 918, 919, 917, 914, 915, 913, 904, 908, 910, 911, 909, 906, 907, 905, 900, 902, 903, 901, 898, 899, 897, 832, 864, 880, 888, 892, 894, 895, 893, 890, 891, 889, 884, 886, 887, 885, 882, 883, 881, 872, 876, 878, 879, 877, 874, 875, 873, 868, 870, 871, 869, 866, 867, 865, 848, 856, 860, 862, 863, 861, 858, 859, 857, 852, 854, 855, 853, 850, 851, 849, 840, 844, 846, 847, 845, 842, 843, 841, 836, 838, 839, 837, 834, 835, 833, 800, 816, 824, 828, 830, 831, 829, 826, 827, 825, 820, 822, 823, 821, 818, 819, 817, 808, 812, 814, 815, 813, 810, 811, 809, 804, 806, 807, 805, 802, 803, 801, 784, 792, 796, 798, 799, 797, 794, 795, 793, 788, 790, 791, 789, 786, 787, 785, 776, 780, 782, 783, 781, 778, 779, 777, 772, 774, 775, 773, 770, 771, 769, 640, 704, 736, 752, 760, 764, 766, 767, 765, 762, 763, 761, 756, 758, 759, 757, 754, 755, 753, 744, 748, 750, 751, 749, 746, 747, 745, 740, 742, 743, 741, 738, 739, 737, 720, 728, 732, 734, 735, 733, 730, 731, 729, 724, 726, 727, 725, 722, 723, 721, 712, 716, 718, 719, 717, 714, 715, 713, 708, 710, 711, 709, 706, 707, 705, 672, 688, 696, 700, 702, 703, 701, 698, 699, 697, 692, 694, 695, 693, 690, 691, 689, 680, 684, 686, 687, 685, 682, 683, 681, 676, 678, 679, 677, 674, 675, 673, 656, 664, 668, 670, 671, 669, 666, 667, 665, 660, 662, 663, 661, 658, 659, 657, 648, 652, 654, 655, 653, 650, 651, 649, 644, 646, 647, 645, 642, 643, 641, 576, 608, 624, 632, 636, 638, 639, 637, 634, 635, 633, 628, 630, 631, 629, 626, 627, 625, 616, 620, 622, 623, 621, 618, 619, 617, 612, 614, 615, 613, 610, 611, 609, 592, 600, 604, 606, 607, 605, 602, 603, 601, 596, 598, 599, 597, 594, 595, 593, 584, 588, 590, 591, 589, 586, 587, 585, 580, 582, 583, 581, 578, 579, 577, 544, 560, 568, 572, 574, 575, 573, 570, 571, 569, 564, 566, 567, 565, 562, 563, 561, 552, 556, 558, 559, 557, 554, 555, 553, 548, 550, 551, 549, 546, 547, 545, 528, 536, 540, 542, 543, 541, 538, 539, 537, 532, 534, 535, 533, 530, 531, 529, 520, 524, 526, 527, 525, 522, 523, 521, 516, 518, 519, 517, 514, 515, 513, 256, 384, 448, 480, 496, 504, 508, 510, 511, 509, 506, 507, 505, 500, 502, 503, 501, 498, 499, 497, 488, 492, 494, 495, 493, 490, 491, 489, 484, 486, 487, 485, 482, 483, 481, 464, 472, 476, 478, 479, 477, 474, 475, 473, 468, 470, 471, 469, 466, 467, 465, 456, 460, 462, 463, 461, 458, 459, 457, 452, 454, 455, 453, 450, 451, 449, 416, 432, 440, 444, 446, 447, 445, 442, 443, 441, 436, 438, 439, 437, 434, 435, 433, 424, 428, 430, 431, 429, 426, 427, 425, 420, 422, 423, 421, 418, 419, 417, 400, 408, 412, 414, 415, 413, 410, 411, 409, 404, 406, 407, 405, 402, 403, 401, 392, 396, 398, 399, 397, 394, 395, 393, 388, 390, 391, 389, 386, 387, 385, 320, 352, 368, 376, 380, 382, 383, 381, 378, 379, 377, 372, 374, 375, 373, 370, 371, 369, 360, 364, 366, 367, 365, 362, 363, 361, 356, 358, 359, 357, 354, 355, 353, 336, 344, 348, 350, 351, 349, 346, 347, 345, 340, 342, 343, 341, 338, 339, 337, 328, 332, 334, 335, 333, 330, 331, 329, 324, 326, 327, 325, 322, 323, 321, 288, 304, 312, 316, 318, 319, 317, 314, 315, 313, 308, 310, 311, 309, 306, 307, 305, 296, 300, 302, 303, 301, 298, 299, 297, 292, 294, 295, 293, 290, 291, 289, 272, 280, 284, 286, 287, 285, 282, 283, 281, 276, 278, 279, 277, 274, 275, 273, 264, 268, 270, 271, 269, 266, 267, 265, 260, 262, 263, 261, 258, 259, 257, 128, 192, 224, 240, 248, 252, 254, 255, 253, 250, 251, 249, 244, 246, 247, 245, 242, 243, 241, 232, 236, 238, 239, 237, 234, 235, 233, 228, 230, 231, 229, 226, 227, 225, 208, 216, 220, 222, 223, 221, 218, 219, 217, 212, 214, 215, 213, 210, 211, 209, 200, 204, 206, 207, 205, 202, 203, 201, 196, 198, 199, 197, 194, 195, 193, 160, 176, 184, 188, 190, 191, 189, 186, 187, 185, 180, 182, 183, 181, 178, 179, 177, 168, 172, 174, 175, 173, 170, 171, 169, 164, 166, 167, 165, 162, 163, 161, 144, 152, 156, 158, 159, 157, 154, 155, 153, 148, 150, 151, 149, 146, 147, 145, 136, 140, 142, 143, 141, 138, 139, 137, 132, 134, 135, 133, 130, 131, 129, 64, 96, 112, 120, 124, 126, 127, 125, 122, 123, 121, 116, 118, 119, 117, 114, 115, 113, 104, 108, 110, 111, 109, 106, 107, 105, 100, 102, 103, 101, 98, 99, 97, 80, 88, 92, 94, 95, 93, 90, 91, 89, 84, 86, 87, 85, 82, 83, 81, 72, 76, 78, 79, 77, 74, 75, 73, 68, 70, 71, 69, 66, 67, 65, 32, 48, 56, 60, 62, 63, 61, 58, 59, 57, 52, 54, 55, 53, 50, 51, 49, 40, 44, 46, 47, 45, 42, 43, 41, 36, 38, 39, 37, 34, 35, 33, 16, 24, 28, 30, 31, 29, 26, 27, 25, 20, 22, 23, 21, 18, 19, 17, 8, 12, 14, 15, 13, 10, 11, 9, 4, 6, 7, 5, 2, 3, 1};
static const int16_t g1_offset1024[] = {1536, 1792, 1920, 1984, 2016, 2032, 2040, 2044, 2046, 2047, 2045, 2042, 2043, 2041, 2036, 2038, 2039, 2037, 2034, 2035, 2033, 2024, 2028, 2030, 2031, 2029, 2026, 2027, 2025, 2020, 2022, 2023, 2021, 2018, 2019, 2017, 2000, 2008, 2012, 2014, 2015, 2013, 2010, 2011, 2009, 2004, 2006, 2007, 2005, 2002, 2003, 2001, 1992, 1996, 1998, 1999, 1997, 1994, 1995, 1993, 1988, 1990, 1991, 1989, 1986, 1987, 1985, 1952, 1968, 1976, 1980, 1982, 1983, 1981, 1978, 1979, 1977, 1972, 1974, 1975, 1973, 1970, 1971, 1969, 1960, 1964, 1966, 1967, 1965, 1962, 1963, 1961, 1956, 1958, 1959, 1957, 1954, 1955, 1953, 1936, 1944, 1948, 1950, 1951, 1949, 1946, 1947, 1945, 1940, 1942, 1943, 1941, 1938, 1939, 1937, 1928, 1932, 1934, 1935, 1933, 1930, 1931, 1929, 1924, 1926, 1927, 1925, 1922, 1923, 1921, 1856, 1888, 1904, 1912, 1916, 1918, 1919, 1917, 1914, 1915, 1913, 1908, 1910, 1911, 1909, 1906, 1907, 1905, 1896, 1900, 1902, 1903, 1901, 1898, 1899, 1897, 1892, 1894, 1895, 1893, 1890, 1891, 1889, 1872, 1880, 1884, 1886, 1887, 1885, 1882, 1883, 1881, 1876, 1878, 1879, 1877, 1874, 1875, 1873, 1864, 1868, 1870, 1871, 1869, 1866, 1867, 1865, 1860, 1862, 1863, 1861, 1858, 1859, 1857, 1824, 1840, 1848, 1852, 1854, 1855, 1853, 1850, 1851, 1849, 1844, 1846, 1847, 1845, 1842, 1843, 1841, 1832, 1836, 1838, 1839, 1837, 1834, 1835, 1833, 1828, 1830, 1831, 1829, 1826, 1827, 1825, 1808, 1816, 1820, 1822, 1823, 1821, 1818, 1819, 1817, 1812, 1814, 1815, 1813, 1810, 1811, 1809, 1800, 1804, 1806, 1807, 1805, 1802, 1803, 1801, 1796, 1798, 1799, 1797, 1794, 1795, 1793, 1664, 1728, 1760, 1776, 1784, 1788, 1790, 1791, 1789, 1786, 1787, 1785, 1780, 1782, 1783, 1781, 1778, 1779, 1777, 1768, 1772, 1774, 1775, 1773, 1770, 1771, 1769, 1764, 1766, 1767, 1765, 1762, 1763, 1761, 1744, 1752, 1756, 1758, 1759, 1757, 1754, 1755, 1753, 1748, 1750, 1751, 1749, 1746, 1747, 1745, 1736, 1740, 1742, 1743, 1741, 1738, 1739, 1737, 1732, 1734, 1735, 1733, 1730, 1731, 1729, 1696, 1712, 1720, 1724, 1726, 1727, 1725, 1722, 1723, 1721, 1716, 1718, 1719, 1717, 1714, 1715, 1713, 1704, 1708, 1710, 1711, 1709, 1706, 1707, 1705, 1700, 1702, 1703, 1701, 1698, 1699, 1697, 1680, 1688, 1692, 1694, 1695, 1693, 1690, 1691, 1689, 1684, 1686, 1687, 1685, 1682, 1683, 1681, 1672, 1676, 1678, 1679, 1677, 1674, 1675, 1673, 1668, 1670, 1671, 1669, 1666, 1667, 1665, 1600, 1632, 1648, 1656, 1660, 1662, 1663, 1661, 1658, 1659, 1657, 1652, 1654, 1655, 1653, 1650, 1651, 1649, 1640, 1644, 1646, 1647, 1645, 1642, 1643, 1641, 1636, 1638, 1639, 1637, 1634, 1635, 1633, 1616, 1624, 1628, 1630, 1631, 1629, 1626, 1627, 1625, 1620, 1622, 1623, 1621, 1618, 1619, 1617, 1608, 1612, 1614, 1615, 1613, 1610, 1611, 1609, 1604, 1606, 1607, 1605, 1602, 1603, 1601, 1568, 1584, 1592, 1596, 1598, 1599, 1597, 1594, 1595, 1593, 1588, 1590, 1591, 1589, 1586, 1587, 1585, 1576, 1580, 1582, 1583, 1581, 1578, 1579, 1577, 1572, 1574, 1575, 1573, 1570, 1571, 1569, 1552, 1560, 1564, 1566, 1567, 1565, 1562, 1563, 1561, 1556, 1558, 1559, 1557, 1554, 1555, 1553, 1544, 1548, 1550, 1551, 1549, 1546, 1547, 1545, 1540, 1542, 1543, 1541, 1538, 1539, 1537, 1280, 1408, 1472, 1504, 1520, 1528, 1532, 1534, 1535, 1533, 1530, 1531, 1529, 1524, 1526, 1527, 1525, 1522, 1523, 1521, 1512, 1516, 1518, 1519, 1517, 1514, 1515, 1513, 1508, 1510, 1511, 1509, 1506, 1507, 1505, 1488, 1496, 1500, 1502, 1503, 1501, 1498, 1499, 1497, 1492, 1494, 1495, 1493, 1490, 1491, 1489, 1480, 1484, 1486, 1487, 1485, 1482, 1483, 1481, 1476, 1478, 1479, 1477, 1474, 1475, 1473, 1440, 1456, 1464, 1468, 1470, 1471, 1469, 1466, 1467, 1465, 1460, 1462, 1463, 1461, 1458, 1459, 1457, 1448, 1452, 1454, 1455, 1453, 1450, 1451, 1449, 1444, 1446, 1447, 1445, 1442, 1443, 1441, 1424, 1432, 1436, 1438, 1439, 1437, 1434, 1435, 1433, 1428, 1430, 1431, 1429, 1426, 1427, 1425, 1416, 1420, 1422, 1423, 1421, 1418, 1419, 1417, 1412, 1414, 1415, 1413, 1410, 1411, 1409, 1344, 1376, 1392, 1400, 1404, 1406, 1407, 1405, 1402, 1403, 1401, 1396, 1398, 1399, 1397, 1394, 1395, 1393, 1384, 1388, 1390, 1391, 1389, 1386, 1387, 1385, 1380, 1382, 1383, 1381, 1378, 1379, 1377, 1360, 1368, 1372, 1374, 1375, 1373, 1370, 1371, 1369, 1364, 1366, 1367, 1365, 1362, 1363, 1361, 1352, 1356, 1358, 1359, 1357, 1354, 1355, 1353, 1348, 1350, 1351, 1349, 1346, 1347, 1345, 1312, 1328, 1336, 1340, 1342, 1343, 1341, 1338, 1339, 1337, 1332, 1334, 1335, 1333, 1330, 1331, 1329, 1320, 1324, 1326, 1327, 1325, 1322, 1323, 1321, 1316, 1318, 1319, 1317, 1314, 1315, 1313, 1296, 1304, 1308, 1310, 1311, 1309, 1306, 1307, 1305, 1300, 1302, 1303, 1301, 1298, 1299, 1297, 1288, 1292, 1294, 1295, 1293, 1290, 1291, 1289, 1284, 1286, 1287, 1285, 1282, 1283, 1281, 1152, 1216, 1248, 1264, 1272, 1276, 1278, 1279, 1277, 1274, 1275, 1273, 1268, 1270, 1271, 1269, 1266, 1267, 1265, 1256, 1260, 1262, 1263, 1261, 1258, 1259, 1257, 1252, 1254, 1255, 1253, 1250, 1251, 1249, 1232, 1240, 1244, 1246, 1247, 1245, 1242, 1243, 1241, 1236, 1238, 1239, 1237, 1234, 1235, 1233, 1224, 1228, 1230, 1231, 1229, 1226, 1227, 1225, 1220, 1222, 1223, 1221, 1218, 1219, 1217, 1184, 1200, 1208, 1212, 1214, 1215, 1213, 1210, 1211, 1209, 1204, 1206, 1207, 1205, 1202, 1203, 1201, 1192, 1196, 1198, 1199, 1197, 1194, 1195, 1193, 1188, 1190, 1191, 1189, 1186, 1187, 1185, 1168, 1176, 1180, 1182, 1183, 1181, 1178, 1179, 1177, 1172, 1174, 1175, 1173, 1170, 1171, 1169, 1160, 1164, 1166, 1167, 1165, 1162, 1163, 1161, 1156, 1158, 1159, 1157, 1154, 1155, 1153, 1088, 1120, 1136, 1144, 1148, 1150, 1151, 1149, 1146, 1147, 1145, 1140, 1142, 1143, 1141, 1138, 1139, 1137, 1128, 1132, 1134, 1135, 1133, 1130, 1131, 1129, 1124, 1126, 1127, 1125, 1122, 1123, 1121, 1104, 1112, 1116, 1118, 1119, 1117, 1114, 1115, 1113, 1108, 1110, 1111, 1109, 1106, 1107, 1105, 1096, 1100, 1102, 1103, 1101, 1098, 1099, 1097, 1092, 1094, 1095, 1093, 1090, 1091, 1089, 1056, 1072, 1080, 1084, 1086, 1087, 1085, 1082, 1083, 1081, 1076, 1078, 1079, 1077, 1074, 1075, 1073, 1064, 1068, 1070, 1071, 1069, 1066, 1067, 1065, 1060, 1062, 1063, 1061, 1058, 1059, 1057, 1040, 1048, 1052, 1054, 1055, 1053, 1050, 1051, 1049, 1044, 1046, 1047, 1045, 1042, 1043, 1041, 1032, 1036, 1038, 1039, 1037, 1034, 1035, 1033, 1028, 1030, 1031, 1029, 1026, 1027, 1025, 512, 768, 896, 960, 992, 1008, 1016, 1020, 1022, 1023, 1021, 1018, 1019, 1017, 1012, 1014, 1015, 1013, 1010, 1011, 1009, 1000, 1004, 1006, 1007, 1005, 1002, 1003, 1001, 996, 998, 999, 997, 994, 995, 993, 976, 984, 988, 990, 991, 989, 986, 987, 985, 980, 982, 983, 981, 978, 979, 977, 968, 972, 974, 975, 973, 970, 971, 969, 964, 966, 967, 965, 962, 963, 961, 928, 944, 952, 956, 958, 959, 957, 954, 955, 953, 948, 950, 951, 949, 946, 947, 945, 936, 940, 942, 943, 941, 938, 939, 937, 932, 934, 935, 933, 930, 931, 929, 912, 920, 924, 926, 927, 925, 922, 923, 921, 916, 918, 919, 917, 914, 915, 913, 904, 908, 910, 911, 909, 906, 907, 905, 900, 902, 903, 901, 898, 899, 897, 832, 864, 880, 888, 892, 894, 895, 893, 890, 891, 889, 884, 886, 887, 885, 882, 883, 881, 872, 876, 878, 879, 877, 874, 875, 873, 868, 870, 871, 869, 866, 867, 865, 848, 856, 860, 862, 863, 861, 858, 859, 857, 852, 854, 855, 853, 850, 851, 849, 840, 844, 846, 847, 845, 842, 843, 841, 836, 838, 839, 837, 834, 835, 833, 800, 816, 824, 828, 830, 831, 829, 826, 827, 825, 820, 822, 823, 821, 818, 819, 817, 808, 812, 814, 815, 813, 810, 811, 809, 804, 806, 807, 805, 802, 803, 801, 784, 792, 796, 798, 799, 797, 794, 795, 793, 788, 790, 791, 789, 786, 787, 785, 776, 780, 782, 783, 781, 778, 779, 777, 772, 774, 775, 773, 770, 771, 769, 640, 704, 736, 752, 760, 764, 766, 767, 765, 762, 763, 761, 756, 758, 759, 757, 754, 755, 753, 744, 748, 750, 751, 749, 746, 747, 745, 740, 742, 743, 741, 738, 739, 737, 720, 728, 732, 734, 735, 733, 730, 731, 729, 724, 726, 727, 725, 722, 723, 721, 712, 716, 718, 719, 717, 714, 715, 713, 708, 710, 711, 709, 706, 707, 705, 672, 688, 696, 700, 702, 703, 701, 698, 699, 697, 692, 694, 695, 693, 690, 691, 689, 680, 684, 686, 687, 685, 682, 683, 681, 676, 678, 679, 677, 674, 675, 673, 656, 664, 668, 670, 671, 669, 666, 667, 665, 660, 662, 663, 661, 658, 659, 657, 648, 652, 654, 655, 653, 650, 651, 649, 644, 646, 647, 645, 642, 643, 641, 576, 608, 624, 632, 636, 638, 639, 637, 634, 635, 633, 628, 630, 631, 629, 626, 627, 625, 616, 620, 622, 623, 621, 618, 619, 617, 612, 614, 615, 613, 610, 611, 609, 592, 600, 604, 606, 607, 605, 602, 603, 601, 596, 598, 599, 597, 594, 595, 593, 584, 588, 590, 591, 589, 586, 587, 585, 580, 582, 583, 581, 578, 579, 577, 544, 560, 568, 572, 574, 575, 573, 570, 571, 569, 564, 566, 567, 565, 562, 563, 561, 552, 556, 558, 559, 557, 554, 555, 553, 548, 550, 551, 549, 546, 547, 545, 528, 536, 540, 542, 543, 541, 538, 539, 537, 532, 534, 535, 533, 530, 531, 529, 520, 524, 526, 527, 525, 522, 523, 521, 516, 518, 519, 517, 514, 515, 513, 256, 384, 448, 480, 496, 504, 508, 510, 511, 509, 506, 507, 505, 500, 502, 503, 501, 498, 499, 497, 488, 492, 494, 495, 493, 490, 491, 489, 484, 486, 487, 485, 482, 483, 481, 464, 472, 476, 478, 479, 477, 474, 475, 473, 468, 470, 471, 469, 466, 467, 465, 456, 460, 462, 463, 461, 458, 459, 457, 452, 454, 455, 453, 450, 451, 449, 416, 432, 440, 444, 446, 447, 445, 442, 443, 441, 436, 438, 439, 437, 434, 435, 433, 424, 428, 430, 431, 429, 426, 427, 425, 420, 422, 423, 421, 418, 419, 417, 400, 408, 412, 414, 415, 413, 410, 411, 409, 404, 406, 407, 405, 402, 403, 401, 392, 396, 398, 399, 397, 394, 395, 393, 388, 390, 391, 389, 386, 387, 385, 320, 352, 368, 376, 380, 382, 383, 381, 378, 379, 377, 372, 374, 375, 373, 370, 371, 369, 360, 364, 366, 367, 365, 362, 363, 361, 356, 358, 359, 357, 354, 355, 353, 336, 344, 348, 350, 351, 349, 346, 347, 345, 340, 342, 343, 341, 338, 339, 337, 328, 332, 334, 335, 333, 330, 331, 329, 324, 326, 327, 325, 322, 323, 321, 288, 304, 312, 316, 318, 319, 317, 314, 315, 313, 308, 310, 311, 309, 306, 307, 305, 296, 300, 302, 303, 301, 298, 299, 297, 292, 294, 295, 293, 290, 291, 289, 272, 280, 284, 286, 287, 285, 282, 283, 281, 276, 278, 279, 277, 274, 275, 273, 264, 268, 270, 271, 269, 266, 267, 265, 260, 262, 263, 261, 258, 259, 257, 128, 192, 224, 240, 248, 252, 254, 255, 253, 250, 251, 249, 244, 246, 247, 245, 242, 243, 241, 232, 236, 238, 239, 237, 234, 235, 233, 228, 230, 231, 229, 226, 227, 225, 208, 216, 220, 222, 223, 221, 218, 219, 217, 212, 214, 215, 213, 210, 211, 209, 200, 204, 206, 207, 205, 202, 203, 201, 196, 198, 199, 197, 194, 195, 193, 160, 176, 184, 188, 190, 191, 189, 186, 187, 185, 180, 182, 183, 181, 178, 179, 177, 168, 172, 174, 175, 173, 170, 171, 169, 164, 166, 167, 165, 162, 163, 161, 144, 152, 156, 158, 159, 157, 154, 155, 153, 148, 150, 151, 149, 146, 147, 145, 136, 140, 142, 143, 141, 138, 139, 137, 132, 134, 135, 133, 130, 131, 129, 64, 96, 112, 120, 124, 126, 127, 125, 122, 123, 121, 116, 118, 119, 117, 114, 115, 113, 104, 108, 110, 111, 109, 106, 107, 105, 100, 102, 103, 101, 98, 99, 97, 80, 88, 92, 94, 95, 93, 90, 91, 89, 84, 86, 87, 85, 82, 83, 81, 72, 76, 78, 79, 77, 74, 75, 73, 68, 70, 71, 69, 66, 67, 65, 32, 48, 56, 60, 62, 63, 61, 58, 59, 57, 52, 54, 55, 53, 50, 51, 49, 40, 44, 46, 47, 45, 42, 43, 41, 36, 38, 39, 37, 34, 35, 33, 16, 24, 28, 30, 31, 29, 26, 27, 25, 20, 22, 23, 21, 18, 19, 17, 8, 12, 14, 15, 13, 10, 11, 9, 4, 6, 7, 5, 2, 3, 1};

static const int8_t logn_tree512[] = {8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0};
static const int8_t logn_tree1024[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0};

static const int16_t tree_normalize_offset512[] = {0,
512, 768, 896, 960, 992, 1008, 1016, 1020, 1022, 1023, 1024, 1026, 1027, 1028, 1032, 1034, 1035, 1036, 1038, 1039, 1040, 1048, 1052, 1054, 1055, 1056, 1058, 1059, 1060, 1064,
1066, 1067, 1068, 1070, 1071, 1072, 1088, 1096, 1100, 1102, 1103, 1104, 1106, 1107, 1108, 1112, 1114, 1115, 1116, 1118, 1119, 1120, 1128, 1132, 1134, 1135, 1136, 1138, 1139, 1140,
1144, 1146, 1147, 1148, 1150, 1151, 1152, 1184, 1200, 1208, 1212, 1214, 1215, 1216, 1218, 1219, 1220, 1224, 1226, 1227, 1228, 1230, 1231, 1232, 1240, 1244, 1246, 1247, 1248, 1250,
1251, 1252, 1256, 1258, 1259, 1260, 1262, 1263, 1264, 1280, 1288, 1292, 1294, 1295, 1296, 1298, 1299, 1300, 1304, 1306, 1307, 1308, 1310, 1311, 1312, 1320, 1324, 1326, 1327, 1328,
1330, 1331, 1332, 1336, 1338, 1339, 1340, 1342, 1343, 1344, 1408, 1440, 1456, 1464, 1468, 1470, 1471, 1472, 1474, 1475, 1476, 1480, 1482, 1483, 1484, 1486, 1487, 1488, 1496, 1500,
1502, 1503, 1504, 1506, 1507, 1508, 1512, 1514, 1515, 1516, 1518, 1519, 1520, 1536, 1544, 1548, 1550, 1551, 1552, 1554, 1555, 1556, 1560, 1562, 1563, 1564, 1566, 1567, 1568, 1576,
1580, 1582, 1583, 1584, 1586, 1587, 1588, 1592, 1594, 1595, 1596, 1598, 1599, 1600, 1632, 1648, 1656, 1660, 1662, 1663, 1664, 1666, 1667, 1668, 1672, 1674, 1675, 1676, 1678, 1679,
1680, 1688, 1692, 1694, 1695, 1696, 1698, 1699, 1700, 1704, 1706, 1707, 1708, 1710, 1711, 1712, 1728, 1736, 1740, 1742, 1743, 1744, 1746, 1747, 1748, 1752, 1754, 1755, 1756, 1758,
1759, 1760, 1768, 1772, 1774, 1775, 1776, 1778, 1779, 1780, 1784, 1786, 1787, 1788, 1790, 1791, 1792, 1920, 1984, 2016, 2032, 2040, 2044, 2046, 2047, 2048, 2050, 2051, 2052, 2056,
2058, 2059, 2060, 2062, 2063, 2064, 2072, 2076, 2078, 2079, 2080, 2082, 2083, 2084, 2088, 2090, 2091, 2092, 2094, 2095, 2096, 2112, 2120, 2124, 2126, 2127, 2128, 2130, 2131, 2132,
2136, 2138, 2139, 2140, 2142, 2143, 2144, 2152, 2156, 2158, 2159, 2160, 2162, 2163, 2164, 2168, 2170, 2171, 2172, 2174, 2175, 2176, 2208, 2224, 2232, 2236, 2238, 2239, 2240, 2242,
2243, 2244, 2248, 2250, 2251, 2252, 2254, 2255, 2256, 2264, 2268, 2270, 2271, 2272, 2274, 2275, 2276, 2280, 2282, 2283, 2284, 2286, 2287, 2288, 2304, 2312, 2316, 2318, 2319, 2320,
2322, 2323, 2324, 2328, 2330, 2331, 2332, 2334, 2335, 2336, 2344, 2348, 2350, 2351, 2352, 2354, 2355, 2356, 2360, 2362, 2363, 2364, 2366, 2367, 2368, 2432, 2464, 2480, 2488, 2492,
2494, 2495, 2496, 2498, 2499, 2500, 2504, 2506, 2507, 2508, 2510, 2511, 2512, 2520, 2524, 2526, 2527, 2528, 2530, 2531, 2532, 2536, 2538, 2539, 2540, 2542, 2543, 2544, 2560, 2568,
2572, 2574, 2575, 2576, 2578, 2579, 2580, 2584, 2586, 2587, 2588, 2590, 2591, 2592, 2600, 2604, 2606, 2607, 2608, 2610, 2611, 2612, 2616, 2618, 2619, 2620, 2622, 2623, 2624, 2656,
2672, 2680, 2684, 2686, 2687, 2688, 2690, 2691, 2692, 2696, 2698, 2699, 2700, 2702, 2703, 2704, 2712, 2716, 2718, 2719, 2720, 2722, 2723, 2724, 2728, 2730, 2731, 2732, 2734, 2735,
2736, 2752, 2760, 2764, 2766, 2767, 2768, 2770, 2771, 2772, 2776, 2778, 2779, 2780, 2782, 2783, 2784, 2792, 2796, 2798, 2799, 2800, 2802, 2803, 2804, 2808, 2810, 2811, 2812, 2814,
2815, 2816, 3072, 3200, 3264, 3296, 3312, 3320, 3324, 3326, 3327, 3328, 3330, 3331, 3332, 3336, 3338, 3339, 3340, 3342, 3343, 3344, 3352, 3356, 3358, 3359, 3360, 3362, 3363, 3364,
3368, 3370, 3371, 3372, 3374, 3375, 3376, 3392, 3400, 3404, 3406, 3407, 3408, 3410, 3411, 3412, 3416, 3418, 3419, 3420, 3422, 3423, 3424, 3432, 3436, 3438, 3439, 3440, 3442, 3443,
3444, 3448, 3450, 3451, 3452, 3454, 3455, 3456, 3488, 3504, 3512, 3516, 3518, 3519, 3520, 3522, 3523, 3524, 3528, 3530, 3531, 3532, 3534, 3535, 3536, 3544, 3548, 3550, 3551, 3552,
3554, 3555, 3556, 3560, 3562, 3563, 3564, 3566, 3567, 3568, 3584, 3592, 3596, 3598, 3599, 3600, 3602, 3603, 3604, 3608, 3610, 3611, 3612, 3614, 3615, 3616, 3624, 3628, 3630, 3631,
3632, 3634, 3635, 3636, 3640, 3642, 3643, 3644, 3646, 3647, 3648, 3712, 3744, 3760, 3768, 3772, 3774, 3775, 3776, 3778, 3779, 3780, 3784, 3786, 3787, 3788, 3790, 3791, 3792, 3800,
3804, 3806, 3807, 3808, 3810, 3811, 3812, 3816, 3818, 3819, 3820, 3822, 3823, 3824, 3840, 3848, 3852, 3854, 3855, 3856, 3858, 3859, 3860, 3864, 3866, 3867, 3868, 3870, 3871, 3872,
3880, 3884, 3886, 3887, 3888, 3890, 3891, 3892, 3896, 3898, 3899, 3900, 3902, 3903, 3904, 3936, 3952, 3960, 3964, 3966, 3967, 3968, 3970, 3971, 3972, 3976, 3978, 3979, 3980, 3982,
3983, 3984, 3992, 3996, 3998, 3999, 4000, 4002, 4003, 4004, 4008, 4010, 4011, 4012, 4014, 4015, 4016, 4032, 4040, 4044, 4046, 4047, 4048, 4050, 4051, 4052, 4056, 4058, 4059, 4060,
4062, 4063, 4064, 4072, 4076, 4078, 4079, 4080, 4082, 4083, 4084, 4088, 4090, 4091, 4092, 4094, 4095, 4096, 4224, 4288, 4320, 4336, 4344, 4348, 4350, 4351, 4352, 4354, 4355, 4356,
4360, 4362, 4363, 4364, 4366, 4367, 4368, 4376, 4380, 4382, 4383, 4384, 4386, 4387, 4388, 4392, 4394, 4395, 4396, 4398, 4399, 4400, 4416, 4424, 4428, 4430, 4431, 4432, 4434, 4435,
4436, 4440, 4442, 4443, 4444, 4446, 4447, 4448, 4456, 4460, 4462, 4463, 4464, 4466, 4467, 4468, 4472, 4474, 4475, 4476, 4478, 4479, 4480, 4512, 4528, 4536, 4540, 4542, 4543, 4544,
4546, 4547, 4548, 4552, 4554, 4555, 4556, 4558, 4559, 4560, 4568, 4572, 4574, 4575, 4576, 4578, 4579, 4580, 4584, 4586, 4587, 4588, 4590, 4591, 4592, 4608, 4616, 4620, 4622, 4623,
4624, 4626, 4627, 4628, 4632, 4634, 4635, 4636, 4638, 4639, 4640, 4648, 4652, 4654, 4655, 4656, 4658, 4659, 4660, 4664, 4666, 4667, 4668, 4670, 4671, 4672, 4736, 4768, 4784, 4792,
4796, 4798, 4799, 4800, 4802, 4803, 4804, 4808, 4810, 4811, 4812, 4814, 4815, 4816, 4824, 4828, 4830, 4831, 4832, 4834, 4835, 4836, 4840, 4842, 4843, 4844, 4846, 4847, 4848, 4864,
4872, 4876, 4878, 4879, 4880, 4882, 4883, 4884, 4888, 4890, 4891, 4892, 4894, 4895, 4896, 4904, 4908, 4910, 4911, 4912, 4914, 4915, 4916, 4920, 4922, 4923, 4924, 4926, 4927, 4928,
4960, 4976, 4984, 4988, 4990, 4991, 4992, 4994, 4995, 4996, 5000, 5002, 5003, 5004, 5006, 5007, 5008, 5016, 5020, 5022, 5023, 5024, 5026, 5027, 5028, 5032, 5034, 5035, 5036, 5038,
5039, 5040, 5056, 5064, 5068, 5070, 5071, 5072, 5074, 5075, 5076, 5080, 5082, 5083, 5084, 5086, 5087, 5088, 5096, 5100, 5102, 5103, 5104, 5106, 5107, 5108, 5112, 5114, 5115, 5116,
5118, 5119};

static const int16_t tree_normalize_offset1024[] = {0, 1024, 1536, 1792, 1920, 1984, 2016, 2032, 2040, 2044, 2046, 2047, 2048, 2050, 2051, 2052, 2056, 2058, 2059, 2060, 2062, 2063, 2064, 2072, 2076, 2078, 2079, 2080, 2082, 2083,
2084, 2088, 2090, 2091, 2092, 2094, 2095, 2096, 2112, 2120, 2124, 2126, 2127, 2128, 2130, 2131, 2132, 2136, 2138, 2139, 2140, 2142, 2143, 2144, 2152, 2156, 2158, 2159, 2160, 2162,
2163, 2164, 2168, 2170, 2171, 2172, 2174, 2175, 2176, 2208, 2224, 2232, 2236, 2238, 2239, 2240, 2242, 2243, 2244, 2248, 2250, 2251, 2252, 2254, 2255, 2256, 2264, 2268, 2270, 2271,
2272, 2274, 2275, 2276, 2280, 2282, 2283, 2284, 2286, 2287, 2288, 2304, 2312, 2316, 2318, 2319, 2320, 2322, 2323, 2324, 2328, 2330, 2331, 2332, 2334, 2335, 2336, 2344, 2348, 2350,
2351, 2352, 2354, 2355, 2356, 2360, 2362, 2363, 2364, 2366, 2367, 2368, 2432, 2464, 2480, 2488, 2492, 2494, 2495, 2496, 2498, 2499, 2500, 2504, 2506, 2507, 2508, 2510, 2511, 2512,
2520, 2524, 2526, 2527, 2528, 2530, 2531, 2532, 2536, 2538, 2539, 2540, 2542, 2543, 2544, 2560, 2568, 2572, 2574, 2575, 2576, 2578, 2579, 2580, 2584, 2586, 2587, 2588, 2590, 2591,
2592, 2600, 2604, 2606, 2607, 2608, 2610, 2611, 2612, 2616, 2618, 2619, 2620, 2622, 2623, 2624, 2656, 2672, 2680, 2684, 2686, 2687, 2688, 2690, 2691, 2692, 2696, 2698, 2699, 2700,
2702, 2703, 2704, 2712, 2716, 2718, 2719, 2720, 2722, 2723, 2724, 2728, 2730, 2731, 2732, 2734, 2735, 2736, 2752, 2760, 2764, 2766, 2767, 2768, 2770, 2771, 2772, 2776, 2778, 2779,
2780, 2782, 2783, 2784, 2792, 2796, 2798, 2799, 2800, 2802, 2803, 2804, 2808, 2810, 2811, 2812, 2814, 2815, 2816, 2944, 3008, 3040, 3056, 3064, 3068, 3070, 3071, 3072, 3074, 3075,
3076, 3080, 3082, 3083, 3084, 3086, 3087, 3088, 3096, 3100, 3102, 3103, 3104, 3106, 3107, 3108, 3112, 3114, 3115, 3116, 3118, 3119, 3120, 3136, 3144, 3148, 3150, 3151, 3152, 3154,
3155, 3156, 3160, 3162, 3163, 3164, 3166, 3167, 3168, 3176, 3180, 3182, 3183, 3184, 3186, 3187, 3188, 3192, 3194, 3195, 3196, 3198, 3199, 3200, 3232, 3248, 3256, 3260, 3262, 3263,
3264, 3266, 3267, 3268, 3272, 3274, 3275, 3276, 3278, 3279, 3280, 3288, 3292, 3294, 3295, 3296, 3298, 3299, 3300, 3304, 3306, 3307, 3308, 3310, 3311, 3312, 3328, 3336, 3340, 3342,
3343, 3344, 3346, 3347, 3348, 3352, 3354, 3355, 3356, 3358, 3359, 3360, 3368, 3372, 3374, 3375, 3376, 3378, 3379, 3380, 3384, 3386, 3387, 3388, 3390, 3391, 3392, 3456, 3488, 3504,
3512, 3516, 3518, 3519, 3520, 3522, 3523, 3524, 3528, 3530, 3531, 3532, 3534, 3535, 3536, 3544, 3548, 3550, 3551, 3552, 3554, 3555, 3556, 3560, 3562, 3563, 3564, 3566, 3567, 3568,
3584, 3592, 3596, 3598, 3599, 3600, 3602, 3603, 3604, 3608, 3610, 3611, 3612, 3614, 3615, 3616, 3624, 3628, 3630, 3631, 3632, 3634, 3635, 3636, 3640, 3642, 3643, 3644, 3646, 3647,
3648, 3680, 3696, 3704, 3708, 3710, 3711, 3712, 3714, 3715, 3716, 3720, 3722, 3723, 3724, 3726, 3727, 3728, 3736, 3740, 3742, 3743, 3744, 3746, 3747, 3748, 3752, 3754, 3755, 3756,
3758, 3759, 3760, 3776, 3784, 3788, 3790, 3791, 3792, 3794, 3795, 3796, 3800, 3802, 3803, 3804, 3806, 3807, 3808, 3816, 3820, 3822, 3823, 3824, 3826, 3827, 3828, 3832, 3834, 3835,
3836, 3838, 3839, 3840, 4096, 4224, 4288, 4320, 4336, 4344, 4348, 4350, 4351, 4352, 4354, 4355, 4356, 4360, 4362, 4363, 4364, 4366, 4367, 4368, 4376, 4380, 4382, 4383, 4384, 4386,
4387, 4388, 4392, 4394, 4395, 4396, 4398, 4399, 4400, 4416, 4424, 4428, 4430, 4431, 4432, 4434, 4435, 4436, 4440, 4442, 4443, 4444, 4446, 4447, 4448, 4456, 4460, 4462, 4463, 4464,
4466, 4467, 4468, 4472, 4474, 4475, 4476, 4478, 4479, 4480, 4512, 4528, 4536, 4540, 4542, 4543, 4544, 4546, 4547, 4548, 4552, 4554, 4555, 4556, 4558, 4559, 4560, 4568, 4572, 4574,
4575, 4576, 4578, 4579, 4580, 4584, 4586, 4587, 4588, 4590, 4591, 4592, 4608, 4616, 4620, 4622, 4623, 4624, 4626, 4627, 4628, 4632, 4634, 4635, 4636, 4638, 4639, 4640, 4648, 4652,
4654, 4655, 4656, 4658, 4659, 4660, 4664, 4666, 4667, 4668, 4670, 4671, 4672, 4736, 4768, 4784, 4792, 4796, 4798, 4799, 4800, 4802, 4803, 4804, 4808, 4810, 4811, 4812, 4814, 4815,
4816, 4824, 4828, 4830, 4831, 4832, 4834, 4835, 4836, 4840, 4842, 4843, 4844, 4846, 4847, 4848, 4864, 4872, 4876, 4878, 4879, 4880, 4882, 4883, 4884, 4888, 4890, 4891, 4892, 4894,
4895, 4896, 4904, 4908, 4910, 4911, 4912, 4914, 4915, 4916, 4920, 4922, 4923, 4924, 4926, 4927, 4928, 4960, 4976, 4984, 4988, 4990, 4991, 4992, 4994, 4995, 4996, 5000, 5002, 5003,
5004, 5006, 5007, 5008, 5016, 5020, 5022, 5023, 5024, 5026, 5027, 5028, 5032, 5034, 5035, 5036, 5038, 5039, 5040, 5056, 5064, 5068, 5070, 5071, 5072, 5074, 5075, 5076, 5080, 5082,
5083, 5084, 5086, 5087, 5088, 5096, 5100, 5102, 5103, 5104, 5106, 5107, 5108, 5112, 5114, 5115, 5116, 5118, 5119, 5120, 5248, 5312, 5344, 5360, 5368, 5372, 5374, 5375, 5376, 5378,
5379, 5380, 5384, 5386, 5387, 5388, 5390, 5391, 5392, 5400, 5404, 5406, 5407, 5408, 5410, 5411, 5412, 5416, 5418, 5419, 5420, 5422, 5423, 5424, 5440, 5448, 5452, 5454, 5455, 5456,
5458, 5459, 5460, 5464, 5466, 5467, 5468, 5470, 5471, 5472, 5480, 5484, 5486, 5487, 5488, 5490, 5491, 5492, 5496, 5498, 5499, 5500, 5502, 5503, 5504, 5536, 5552, 5560, 5564, 5566,
5567, 5568, 5570, 5571, 5572, 5576, 5578, 5579, 5580, 5582, 5583, 5584, 5592, 5596, 5598, 5599, 5600, 5602, 5603, 5604, 5608, 5610, 5611, 5612, 5614, 5615, 5616, 5632, 5640, 5644,
5646, 5647, 5648, 5650, 5651, 5652, 5656, 5658, 5659, 5660, 5662, 5663, 5664, 5672, 5676, 5678, 5679, 5680, 5682, 5683, 5684, 5688, 5690, 5691, 5692, 5694, 5695, 5696, 5760, 5792,
5808, 5816, 5820, 5822, 5823, 5824, 5826, 5827, 5828, 5832, 5834, 5835, 5836, 5838, 5839, 5840, 5848, 5852, 5854, 5855, 5856, 5858, 5859, 5860, 5864, 5866, 5867, 5868, 5870, 5871,
5872, 5888, 5896, 5900, 5902, 5903, 5904, 5906, 5907, 5908, 5912, 5914, 5915, 5916, 5918, 5919, 5920, 5928, 5932, 5934, 5935, 5936, 5938, 5939, 5940, 5944, 5946, 5947, 5948, 5950,
5951, 5952, 5984, 6000, 6008, 6012, 6014, 6015, 6016, 6018, 6019, 6020, 6024, 6026, 6027, 6028, 6030, 6031, 6032, 6040, 6044, 6046, 6047, 6048, 6050, 6051, 6052, 6056, 6058, 6059,
6060, 6062, 6063, 6064, 6080, 6088, 6092, 6094, 6095, 6096, 6098, 6099, 6100, 6104, 6106, 6107, 6108, 6110, 6111, 6112, 6120, 6124, 6126, 6127, 6128, 6130, 6131, 6132, 6136, 6138,
6139, 6140, 6142, 6143, 6144, 6656, 6912, 7040, 7104, 7136, 7152, 7160, 7164, 7166, 7167, 7168, 7170, 7171, 7172, 7176, 7178, 7179, 7180, 7182, 7183, 7184, 7192, 7196, 7198, 7199,
7200, 7202, 7203, 7204, 7208, 7210, 7211, 7212, 7214, 7215, 7216, 7232, 7240, 7244, 7246, 7247, 7248, 7250, 7251, 7252, 7256, 7258, 7259, 7260, 7262, 7263, 7264, 7272, 7276, 7278,
7279, 7280, 7282, 7283, 7284, 7288, 7290, 7291, 7292, 7294, 7295, 7296, 7328, 7344, 7352, 7356, 7358, 7359, 7360, 7362, 7363, 7364, 7368, 7370, 7371, 7372, 7374, 7375, 7376, 7384,
7388, 7390, 7391, 7392, 7394, 7395, 7396, 7400, 7402, 7403, 7404, 7406, 7407, 7408, 7424, 7432, 7436, 7438, 7439, 7440, 7442, 7443, 7444, 7448, 7450, 7451, 7452, 7454, 7455, 7456,
7464, 7468, 7470, 7471, 7472, 7474, 7475, 7476, 7480, 7482, 7483, 7484, 7486, 7487, 7488, 7552, 7584, 7600, 7608, 7612, 7614, 7615, 7616, 7618, 7619, 7620, 7624, 7626, 7627, 7628,
7630, 7631, 7632, 7640, 7644, 7646, 7647, 7648, 7650, 7651, 7652, 7656, 7658, 7659, 7660, 7662, 7663, 7664, 7680, 7688, 7692, 7694, 7695, 7696, 7698, 7699, 7700, 7704, 7706, 7707,
7708, 7710, 7711, 7712, 7720, 7724, 7726, 7727, 7728, 7730, 7731, 7732, 7736, 7738, 7739, 7740, 7742, 7743, 7744, 7776, 7792, 7800, 7804, 7806, 7807, 7808, 7810, 7811, 7812, 7816,
7818, 7819, 7820, 7822, 7823, 7824, 7832, 7836, 7838, 7839, 7840, 7842, 7843, 7844, 7848, 7850, 7851, 7852, 7854, 7855, 7856, 7872, 7880, 7884, 7886, 7887, 7888, 7890, 7891, 7892,
7896, 7898, 7899, 7900, 7902, 7903, 7904, 7912, 7916, 7918, 7919, 7920, 7922, 7923, 7924, 7928, 7930, 7931, 7932, 7934, 7935, 7936, 8064, 8128, 8160, 8176, 8184, 8188, 8190, 8191,
8192, 8194, 8195, 8196, 8200, 8202, 8203, 8204, 8206, 8207, 8208, 8216, 8220, 8222, 8223, 8224, 8226, 8227, 8228, 8232, 8234, 8235, 8236, 8238, 8239, 8240, 8256, 8264, 8268, 8270,
8271, 8272, 8274, 8275, 8276, 8280, 8282, 8283, 8284, 8286, 8287, 8288, 8296, 8300, 8302, 8303, 8304, 8306, 8307, 8308, 8312, 8314, 8315, 8316, 8318, 8319, 8320, 8352, 8368, 8376,
8380, 8382, 8383, 8384, 8386, 8387, 8388, 8392, 8394, 8395, 8396, 8398, 8399, 8400, 8408, 8412, 8414, 8415, 8416, 8418, 8419, 8420, 8424, 8426, 8427, 8428, 8430, 8431, 8432, 8448,
8456, 8460, 8462, 8463, 8464, 8466, 8467, 8468, 8472, 8474, 8475, 8476, 8478, 8479, 8480, 8488, 8492, 8494, 8495, 8496, 8498, 8499, 8500, 8504, 8506, 8507, 8508, 8510, 8511, 8512,
8576, 8608, 8624, 8632, 8636, 8638, 8639, 8640, 8642, 8643, 8644, 8648, 8650, 8651, 8652, 8654, 8655, 8656, 8664, 8668, 8670, 8671, 8672, 8674, 8675, 8676, 8680, 8682, 8683, 8684,
8686, 8687, 8688, 8704, 8712, 8716, 8718, 8719, 8720, 8722, 8723, 8724, 8728, 8730, 8731, 8732, 8734, 8735, 8736, 8744, 8748, 8750, 8751, 8752, 8754, 8755, 8756, 8760, 8762, 8763,
8764, 8766, 8767, 8768, 8800, 8816, 8824, 8828, 8830, 8831, 8832, 8834, 8835, 8836, 8840, 8842, 8843, 8844, 8846, 8847, 8848, 8856, 8860, 8862, 8863, 8864, 8866, 8867, 8868, 8872,
8874, 8875, 8876, 8878, 8879, 8880, 8896, 8904, 8908, 8910, 8911, 8912, 8914, 8915, 8916, 8920, 8922, 8923, 8924, 8926, 8927, 8928, 8936, 8940, 8942, 8943, 8944, 8946, 8947, 8948,
8952, 8954, 8955, 8956, 8958, 8959, 8960, 9216, 9344, 9408, 9440, 9456, 9464, 9468, 9470, 9471, 9472, 9474, 9475, 9476, 9480, 9482, 9483, 9484, 9486, 9487, 9488, 9496, 9500, 9502,
9503, 9504, 9506, 9507, 9508, 9512, 9514, 9515, 9516, 9518, 9519, 9520, 9536, 9544, 9548, 9550, 9551, 9552, 9554, 9555, 9556, 9560, 9562, 9563, 9564, 9566, 9567, 9568, 9576, 9580,
9582, 9583, 9584, 9586, 9587, 9588, 9592, 9594, 9595, 9596, 9598, 9599, 9600, 9632, 9648, 9656, 9660, 9662, 9663, 9664, 9666, 9667, 9668, 9672, 9674, 9675, 9676, 9678, 9679, 9680,
9688, 9692, 9694, 9695, 9696, 9698, 9699, 9700, 9704, 9706, 9707, 9708, 9710, 9711, 9712, 9728, 9736, 9740, 9742, 9743, 9744, 9746, 9747, 9748, 9752, 9754, 9755, 9756, 9758, 9759,
9760, 9768, 9772, 9774, 9775, 9776, 9778, 9779, 9780, 9784, 9786, 9787, 9788, 9790, 9791, 9792, 9856, 9888, 9904, 9912, 9916, 9918, 9919, 9920, 9922, 9923, 9924, 9928, 9930, 9931,
9932, 9934, 9935, 9936, 9944, 9948, 9950, 9951, 9952, 9954, 9955, 9956, 9960, 9962, 9963, 9964, 9966, 9967, 9968, 9984, 9992, 9996, 9998, 9999, 10000, 10002, 10003, 10004, 10008, 10010,
10011, 10012, 10014, 10015, 10016, 10024, 10028, 10030, 10031, 10032, 10034, 10035, 10036, 10040, 10042, 10043, 10044, 10046, 10047, 10048, 10080, 10096, 10104, 10108, 10110, 10111, 10112, 10114, 10115, 10116,
10120, 10122, 10123, 10124, 10126, 10127, 10128, 10136, 10140, 10142, 10143, 10144, 10146, 10147, 10148, 10152, 10154, 10155, 10156, 10158, 10159, 10160, 10176, 10184, 10188, 10190, 10191, 10192, 10194, 10195,
10196, 10200, 10202, 10203, 10204, 10206, 10207, 10208, 10216, 10220, 10222, 10223, 10224, 10226, 10227, 10228, 10232, 10234, 10235, 10236, 10238, 10239, 10240, 10368, 10432, 10464, 10480, 10488, 10492, 10494,
10495, 10496, 10498, 10499, 10500, 10504, 10506, 10507, 10508, 10510, 10511, 10512, 10520, 10524, 10526, 10527, 10528, 10530, 10531, 10532, 10536, 10538, 10539, 10540, 10542, 10543, 10544, 10560, 10568, 10572,
10574, 10575, 10576, 10578, 10579, 10580, 10584, 10586, 10587, 10588, 10590, 10591, 10592, 10600, 10604, 10606, 10607, 10608, 10610, 10611, 10612, 10616, 10618, 10619, 10620, 10622, 10623, 10624, 10656, 10672,
10680, 10684, 10686, 10687, 10688, 10690, 10691, 10692, 10696, 10698, 10699, 10700, 10702, 10703, 10704, 10712, 10716, 10718, 10719, 10720, 10722, 10723, 10724, 10728, 10730, 10731, 10732, 10734, 10735, 10736,
10752, 10760, 10764, 10766, 10767, 10768, 10770, 10771, 10772, 10776, 10778, 10779, 10780, 10782, 10783, 10784, 10792, 10796, 10798, 10799, 10800, 10802, 10803, 10804, 10808, 10810, 10811, 10812, 10814, 10815,
10816, 10880, 10912, 10928, 10936, 10940, 10942, 10943, 10944, 10946, 10947, 10948, 10952, 10954, 10955, 10956, 10958, 10959, 10960, 10968, 10972, 10974, 10975, 10976, 10978, 10979, 10980, 10984, 10986, 10987,
10988, 10990, 10991, 10992, 11008, 11016, 11020, 11022, 11023, 11024, 11026, 11027, 11028, 11032, 11034, 11035, 11036, 11038, 11039, 11040, 11048, 11052, 11054, 11055, 11056, 11058, 11059, 11060, 11064, 11066,
11067, 11068, 11070, 11071, 11072, 11104, 11120, 11128, 11132, 11134, 11135, 11136, 11138, 11139, 11140, 11144, 11146, 11147, 11148, 11150, 11151, 11152, 11160, 11164, 11166, 11167, 11168, 11170, 11171, 11172,
11176, 11178, 11179, 11180, 11182, 11183, 11184, 11200, 11208, 11212, 11214, 11215, 11216, 11218, 11219, 11220, 11224, 11226, 11227, 11228, 11230, 11231, 11232, 11240, 11244, 11246, 11247, 11248, 11250, 11251,
11252, 11256, 11258, 11259, 11260, 11262, 11263};

static const int8_t logn_normalize_tree512[] = {9,
8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1,
0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0,
0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1,
0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1,
0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2,
1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0,
0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1,
0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0,
0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1,
0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1,
0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2,
1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0,
0, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0,
2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1,
0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0,
1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2,
1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0,
0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1,
0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0,
2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1,
0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0,
1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2,
1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5,
4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0,
0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1,
0, 0};

static const int8_t logn_normalize_tree1024[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0,
2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0,
0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0,
1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1,
0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0,
2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0,
0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0,
1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1,
0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0,
0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1,
0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1,
0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0,
0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0,
0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0,
0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1,
0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1,
0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0,
0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0,
0, 1, 0, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0,
1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2,
1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1,
0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1,
0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0, 0,
1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2,
1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6,
5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1,
0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1,
0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 8, 7, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1,
0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0,
0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0,
2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 7, 6, 5, 4, 3, 2, 1, 0,
0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4, 3, 2, 1,
0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 5, 4, 3,
2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 4,
3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0,
6, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0,
1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0,
0, 1, 0, 0, 5, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0, 2,
1, 0, 0, 1, 0, 0, 4, 3, 2, 1, 0, 0, 1, 0, 0, 2, 1, 0, 0, 1, 0, 0, 3, 2, 1, 0, 0, 1, 0, 0,
2, 1, 0, 0, 1, 0, 0};
# 8 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2
# 1 "/home/ubuntu/FalconHLS/code_hls/tb_data.h" 1
 static const char *KAT_SIG_512[] = {
 "cd3f225a65b2c6e155c2af799308af940212633fa519a4b4ddd22048ff8a7d06",
 "sample 0",
 "0900070058ffd7ff7affd9ff1e0015ff7fffce0038ff1affad0006ffceffd0ff"
 "0aff26fefcff9700c9ffec008100470071febd01960023ff58004a0150ffeeff"
 "a70150ffd6ff22ffafffef000dff43ffa3012b00eb015cff1bffeaffaa001f00"
 "120074009cff2efec0ffc10095fe96009bffc90027002c0017ffe1ffc2000900"
 "07ff3f0054fefe000a009f0036002e00310128ffaefebbfff9ffc600b4ff4fff"
 "31ffa9ffdd01da00a20010fffd010aff8b013cff7dfef3feccffd3001aff92fe"
 "3f0042ff35006b0025ff9300b401db0049ff79fe24ffdc001e0061ffe10044fe"
 "98ffa2ffff0016ff3200cffeaeff6bff4dfece002effe0fe66ff3aff89ff25ff"
 "6afffc007effd4006bff02005b006900c8ff8bfe55003700290071ff5700da00"
 "5affc7013a006cfff4007d006d00b3004f0004ff18ffecff2eff940070ffccff"
 "4c0086fff7ff51ffc0ff7cff1cff86005b0088ff770099ff8d006ffffa00d500"
 "abffdfff2700570076ff6c0091ffd500fe006b00ec01c2007effc90083ffeb00"
 "43ffbbfee0ff740004fe86ff8cffe700faff49002d00a4ffb3ff7600dffef100"
 "7cff6cff93ffb2005e0073ffd3009100cdff6b0022fffaffd5fffcfff9ff92ff"
 "b7001301080011ff9200ca0018012b000500f400f7ff74011500b7004dfffcff"
 "48ffd20078ff37001e008e01430086004cffc4ffdbff3fff51ff81009b007400"
 "8fffd700870031005dff19ff8d000dff87fffdff8aff63fe97015afffafe9800"
 "5300e5ffb4ff4e006affe000e300f80094ff45fec600c600b400d2ffab010e00"
 "00ff32feb1002b003f005c003fff3f00be0014ff29ffd4016aff06006e000aff"
 "fa0026007d00ae0047ff50ff460078ff36ffd3ff88ffd6ff0500120075009dff"
 "c50062009effddfee4ffc80150ff64018f012a007cff78ff83fffb0027007101"
 "4e000cff1bff6100ff00220039ffd1ff48ffec004f00390079ff5a0067004c00"
 "20ffc7fed300c4004bffacfee4ff2000b60030ffe0fe5d00320015ffc8ff30ff"
 "20ff46001b00e50115ff3a0034002cffc2ffe200110007ffe9ff56ffdffff4ff"
 "250004ffc30028ff3400b3004000c4009f013bffe7009900350038004dff1301"
 "b5ffae008fffdb0084ff44ffad008d0134ff500003013effe1ffc2ffb6fee800"
 "34feb40179fff5fed4010bff74ff2aff38ff5500a8ffe10038ff140010fe5400"
 "ddff1afff300300014ff2b00240016ffb8ffc000b2ff6a0022007a0067ff7100"
 "caff7f0087005eff86ff200098feab0003001300d7ff860106ff96004bffb0ff"
 "c500e700f5ffaeff00004cffd8003aff8cff80ffbeff6e0066002f0032ff7afe"
 "c9ff80ffc6fe770128ff4eff8800e5ff74ffeb01650048ff3d009bff95ff35ff"
 "ad00dcff5302200113feedff94fec9ffc2ffcc0002fe84ffce01c6ff7dffd6ff"
 "c9",
 ((void*)0)
 };

static const int8_t ntru_f_512[] = {
 4, -4, 0, -6, 6, -6, 2, 1, -8, 0, -2, 0, -1, -1, -4, 8, -5, 3,
 -2, 2, 0, -5, -2, -1, 3, -4, -5, -1, 8, 1, 1, 7, 5, 1, 6, 2, -1,
 -13, 1, -4, 9, -4, -2, 4, -4, 0, -1, -1, -3, 2, 1, 1, 1, 3, -3,
 2, -1, -1, -5, 9, 4, -7, -3, -8, -3, -2, -3, -6, -6, -3, -2, -2,
 2, 1, -10, -2, -2, 4, 2, 0, -2, -2, 4, -3, 5, 2, -2, 3, 8, 1, 8,
 -3, -4, 2, 7, -5, -4, -2, -2, -3, 5, -5, 0, -3, -5, 3, -6, -2,
 3, 0, 3, 1, 2, -2, 1, 6, -1, -7, 0, -5, 3, -5, 9, 0, 1, 5, -4,
 0, 5, -1, 4, 3, 5, -6, 2, 0, -7, 1, 0, 0, 2, 4, 1, -7, -3, 4, 4,
 -2, -7, -5, 6, 3, 2, -5, 6, -1, -1, -4, 1, 2, 1, 2, -10, -9, -9,
 -1, 3, -2, -2, -6, 1, -2, -4, -1, 2, 3, 8, 2, 1, -1, 8, 0, 7, 3,
 1, 5, 0, -7, 1, -6, -4, 4, 2, 0, 0, -3, 2, 0, -3, 0, 7, -1, -1,
 -7, 2, 5, 3, 0, 1, 6, -2, -1, 2, 0, -1, -3, -6, -5, -5, -4, 0,
 1, 7, 1, -3, 2, 2, -5, 0, -4, 3, -4, 5, 3, 4, 7, -2, 15, -3, 1,
 1, 4, 5, -9, -3, 4, 2, -4, -4, -3, -1, -4, 3, -1, 1, -8, -4, -1,
 0, -3, 1, -1, 3, 3, 3, -3, -6, -7, 7, 0, -6, 2, -1, 4, 7, 1, 4,
 0, 1, 6, -1, -2, -2, 5, 0, 6, -3, -2, -5, 3, -1, 0, 5, -2, 8,
 -5, -4, 1, -3, 8, 2, -4, 1, 6, 0, 0, -1, 0, -4, -5, -2, 3, -2,
 5, 1, 4, 5, -4, 4, -1, 4, -5, -2, 1, 3, -5, 1, 2, -2, 0, -5, 1,
 8, -3, -4, 3, -2, -3, -4, 4, 3, -2, 6, -3, -2, 4, 0, -2, 0, -5,
 1, -9, 5, 6, -2, -6, 1, 5, -1, -7, 1, 2, 5, 2, 0, -1, 0, -2, -4,
 -1, -8, 5, -5, 9, -4, -4, 2, -5, -1, 0, 1, 4, 3, 1, -2, -7, -8,
 -4, -4, 4, 3, -1, 4, -1, -1, 1, 0, 6, 1, 0, -6, -2, 0, -3, 0,
 -1, -1, 0, 3, -5, -2, -5, 6, 2, -4, -3, 4, -8, 1, -1, 4, -3, 5,
 -2, 8, 7, -1, -3, -3, -2, 0, -4, 4, 0, -6, -4, -2, 5, 8, -3, 3,
 -1, 0, -5, -5, 0, 2, -5, -2, -3, 1, 6, 3, 1, -3, 4, -3, 0, -7,
 -1, -3, 1, -5, 1, -4, -2, 2, 4, 0, 1, 5, 2, 2, -3, -5, -8, 4,
 -2, -3, 2, 2, 0, 8, -5, 2, -7, 0, 3, -1, 0, 4, -3, 1, -2, -4,
 -6, -5, 0, -4, 1, -3, 9, 1, -3, -2, -3, 5, -1, -4, -7, 1, 1
};

static const int8_t ntru_g_512[] = {
 -6, -2, 4, -8, -4, 2, 3, 4, 1, -1, 3, 0, 2, 3, -3, 1, -7, -5, 3,
 -3, -1, 3, -3, 8, -6, -6, 0, 6, 4, 7, 3, 5, 0, -5, -3, -5, 7, 3,
 -1, -4, 3, 4, -1, 1, 3, -3, -4, -4, 4, -5, -1, 3, 7, -2, -4, -2,
 -3, -1, -2, -1, -2, -6, -7, -3, -6, -3, -6, 4, -1, -5, 1, 4, -4,
 3, -1, -6, 6, -2, 2, -6, 5, -7, 8, -3, 0, -2, 0, 7, 1, 3, 6, 4,
 -5, 2, 2, 2, 4, -4, -5, -4, -3, 4, -7, 7, -6, -2, -7, 1, -2, -2,
 -3, 1, 3, 7, 0, -1, -5, 4, -8, -8, 0, 3, 6, -3, 2, 6, -1, 1, -5,
 -4, 2, -3, 8, -2, 2, 3, 0, 1, 6, 4, 4, -4, -1, -3, -2, -5, 3, 9,
 0, 4, -1, 1, -4, 0, 3, 0, -2, 8, 0, 1, 0, -1, 1, 9, -1, -4, -1,
 3, 5, -2, -2, 1, -1, 1, -1, 0, 1, 0, -6, -2, 0, 7, -3, -4, -1,
 -6, -2, 5, -2, 0, 4, -3, -5, 0, 1, -1, -3, 5, 5, -4, -4, -5, -1,
 9, -1, -5, -7, -1, -2, 4, 2, 5, -4, -1, -5, 8, -3, -6, -2, 1,
 -2, 1, 1, 4, -4, -1, 4, 1, 1, 0, -5, 1, 7, 2, -3, 3, -2, -4, 1,
 -6, -1, -3, 7, 6, 0, -2, 2, -6, -4, -3, 2, -7, 7, 0, -11, -1, 3,
 4, 0, 6, -8, -4, -1, 1, 0, -3, 7, 0, 0, -2, -1, -4, 0, -1, -3,
 7, -6, -2, -2, -1, 0, -2, 8, -6, 4, 4, 6, -2, -1, 0, -13, 1, 2,
 0, 5, -7, 3, -2, -6, -3, -4, 4, -1, 1, 3, -6, 1, -5, -8, 2, -11,
 -1, 2, -2, 0, 0, 1, 1, -4, -5, 0, 1, 0, 1, -6, -2, 2, 0, 7, 1,
 -1, 1, -2, 1, -3, 1, 2, 1, -7, -2, 2, -1, 4, 1, -2, -2, 0, 4,
 -3, -6, 2, 3, 1, 1, -4, 6, -2, -4, -3, 0, 4, -5, 0, 1, 8, 2, 2,
 -1, 1, -2, -4, -1, 4, 4, -1, 7, 2, -1, -3, -8, 3, 1, 1, 0, -1,
 1, -7, -8, 2, 1, -2, 1, 0, 4, 1, 1, -2, -1, -5, 3, -4, -1, -1,
 -8, 2, -4, 3, 2, -5, 0, 1, 5, 2, -5, -2, 3, 7, 5, 6, 5, -2, 1,
 3, -7, 7, -3, -8, -2, 2, 3, 3, 5, -2, -4, -1, 7, -2, 7, -3, -2,
 0, 3, 5, 0, 0, 4, 8, -1, -5, 3, -2, -2, -5, -5, -2, 2, 5, -8,
 -1, -2, -4, 6, 0, 6, -5, -1, -5, -6, 9, 5, -2, 4, -1, -8, -2,
 -2, 1, -8, -5, 6, -1, 0, 5, -6, -3, -3, -2, -6, -2, 0, -1, -3,
 7, -3, -1, 3, 6, 3, -2, -4, 2, 1, -1, 11, 3, 4, -1, -6, 1, 2, 3,
 3
};

static const int8_t ntru_F_512[] = {
 -3, -27, 4, 18, 39, 7, 20, -13, 33, -29, 3, 38, 30, 26, -6, 24,
 -26, 16, 24, -48, -18, -21, 3, -14, -2, 6, -9, 42, 22, 21, 33,
 -27, -14, -14, -56, -68, -2, -33, 6, -38, -43, 21, 13, 6, 2,
 -69, -10, -30, -27, 23, -1, 41, -21, 11, -20, 15, 39, 5, 41, 15,
 -28, -34, 9, -11, 9, -1, -8, 61, 8, 13, -23, 2, 7, -23, -21,
 -54, -11, -9, -19, 40, 37, -2, -16, 19, -16, 2, -78, -35, -19,
 11, 17, -46, -16, 25, 0, 22, 13, -15, -33, 13, -15, -34, 33,
 -13, 38, 39, 37, -29, 40, 7, 63, 35, 15, 21, -24, 16, -6, 30,
 12, 18, 61, 17, -11, -15, 11, 0, -15, -2, -14, -26, -1, -42,
 -10, -52, 64, 45, 22, 6, -22, 32, -50, -16, -12, -16, -8, 34,
 -17, -18, 7, 19, 37, 41, -5, -22, -12, -7, -17, -27, -17, 4, 36,
 0, 22, -4, -50, 24, 30, 5, 1, -50, 43, 0, 0, -6, -9, 34, 0, 14,
 -27, 17, 35, -30, -13, 3, -23, -46, 17, -34, 30, 24, 47, 31, -7,
 11, 10, 16, 30, 27, -4, 11, -4, -14, -28, 49, 0, 27, -5, -10,
 53, -50, -13, -15, 13, -10, -26, 2, -3, 88, 22, -27, 40, -23, 3,
 -42, 2, -27, -12, 35, 26, -33, 38, -42, -5, 17, -24, 6, -10, 13,
 -10, -30, -35, -17, 25, 49, -29, 48, 19, 37, 48, -25, -31, -41,
 -15, -1, 19, -17, -7, -16, 2, 5, 12, 0, -15, -19, -6, -32, -4,
 -56, 14, -6, -7, 17, 24, -1, 17, -35, 5, 3, -64, -15, 4, 0, -31,
 4, -10, -18, 55, 13, -13, 23, -30, -11, -29, -21, 15, -18, 30,
 39, 16, -27, 31, 4, 31, 39, -49, 11, -25, 37, -42, -72, 28, -57,
 13, 34, 6, 10, -17, -3, -19, -43, -1, -32, 9, -11, 9, 11, -23,
 6, 28, -34, -12, -42, -7, 42, -18, -2, 22, -30, -4, -42, 10, 54,
 -16, 19, -23, -4, 18, -58, 26, -3, -38, 20, 38, 23, 20, 0, 10,
 49, 47, 18, 27, -11, -10, -14, 0, 6, 6, -18, -6, 14, -38, -16,
 12, -17, 17, -21, -52, -3, -53, 9, 9, -4, 44, 9, -4, 17, 2, 10,
 -28, -13, 28, -12, 11, -33, -2, 33, 0, -51, 2, -33, 20, -47, 23,
 42, 2, 52, -18, -17, 35, 6, 27, 3, 11, 24, -8, 0, -35, -44, -22,
 -49, 61, 3, -15, -2, -14, 46, -24, -10, -24, -24, -21, -10, -51,
 -3, 31, 20, 1, -44, 18, 9, 38, 26, -17, -8, 2, 33, 24, -8, -9,
 -20, 32, 54, 47, -11, 40, 3, -58, 13, 17, 29, -21, 27, 4, -31,
 14, 14, 17, 19, -29, 19, -86, -29, -15, -35, 18, 53, -10, 9, 13,
 -38, 9, -4, 80, 0, 6, 1, 15, -14, 0, -5, 45, 26, 50, 28, 21, 1,
 -8, -6, 12, 32, 5, -21, -1, 54, 14, 22, 27, 6, 8, -18, 33, -5
};

static const int8_t ntru_G_512[] = {
 -58, -47, 36, 14, 2, -20, 24, 35, 38, -31, 20, -1, -17, -29, -6,
 25, 16, 4, -75, 32, 20, 17, -8, 24, 13, 7, -11, -2, 3, -2, 6,
 16, 22, 37, -25, -4, -32, -21, 57, 0, 20, 73, 20, -9, 6, -49,
 12, 14, 60, 15, 50, 15, 9, -2, 13, -8, 38, 12, -5, 9, -7, -1,
 -30, -2, -28, -6, 6, -18, 5, 1, -15, -15, -1, 15, -4, -12, -1,
 -37, -12, 33, -2, -17, -8, -57, -64, -7, 3, 3, -15, 1, 3, 15,
 -21, 67, -29, -4, 7, -21, -7, -8, 12, 38, 3, 45, -26, -37, 10,
 24, -15, -24, 23, -13, -27, 12, 14, -16, 22, -19, 15, 1, -7, 0,
 -6, 28, 2, -7, 0, -10, -19, 14, -13, -16, 22, 14, -7, -1, -17,
 31, -7, 12, 4, -8, -13, 18, -8, -38, 6, 49, 40, 1, -5, 1, 17,
 -21, -3, -9, 15, 27, 43, 60, 29, -1, -3, 2, -41, 18, -18, -26,
 29, 13, 12, 15, 38, -24, -25, 8, 17, 10, -32, -3, -39, -29, 23,
 30, 6, 3, 23, -15, -26, 34, -59, 3, -54, 37, 27, -26, 23, -40,
 -10, -15, 7, 9, -1, 24, -33, -36, 29, -7, 13, 29, 56, -13, 36,
 -37, -45, 13, -11, 43, -9, 24, 16, -13, 13, 13, 10, -18, 16, 3,
 -14, -27, -16, -5, -35, -25, -42, 51, -5, -41, 20, -27, 47, 14,
 75, 14, -74, 26, -18, 18, -12, -13, 8, -44, 6, 0, -16, 36, 32,
 -33, 6, 5, -23, -14, -32, 15, 27, 56, 10, -43, 8, 16, -63, 8,
 34, -24, -3, 15, 13, -3, -31, -14, -24, 28, 11, -41, -4, 14, 1,
 -11, 40, 32, -22, 19, -16, 27, -2, 36, 40, -11, -2, 2, -11, -2,
 35, -44, 6, 6, -40, 3, -8, -27, -28, 5, -6, -12, -2, -4, -19,
 -64, 36, -33, -16, -5, 20, -9, 10, 59, 16, -8, 27, 28, -6, 10,
 -8, 11, -35, 23, 35, 34, 47, 13, 2, 44, 8, 38, 4, 34, 41, 15,
 20, 28, 29, 35, 4, 23, 7, 8, -19, -17, 8, 5, 10, -21, -9, 15,
 -28, -4, -23, -17, 18, -15, -2, 9, -24, -7, 7, 51, -31, 40, -57,
 30, 23, -12, -18, -9, 37, -29, -4, 18, -10, 20, -54, -21, 23,
 56, 28, 30, -3, 15, -31, -41, 14, 66, 41, 15, 39, 34, -9, 4, 33,
 18, 25, 6, 38, -27, 63, -21, -24, 43, 11, -37, 16, 26, -31, -30,
 16, -20, -3, 10, 11, -58, 18, 13, 0, 22, -25, 13, -32, -14, 5,
 52, 31, 30, -3, 9, 18, -7, 4, -2, 1, 11, -8, 8, -9, -29, 28,
 -25, 51, 47, 24, -72, -4, 41, -15, 17, 50, 2, -1, 2, -41, -33,
 -20, 6, -19, -33, 23, 8, -19, 12, -19, -2, -61, -7, -19, 6, 8,
 -23, 27, 38, 12, -17, 39, 8, 23, -41, 14, 25, 16, -44, -46, 11,
 31, -6, 9, 24, 23, 37, -57, 22, 21, -22, 21, 44
};

static const uint16_t ntru_h_512[] = {
 3605, 11394, 3623, 9500, 11987, 4336, 3361, 1348, 6563, 8102,
 758, 8455, 5789, 7614, 797, 11215, 7518, 3116, 4556, 1762,
 11267, 9507, 4586, 5420, 4091, 6788, 1729, 6433, 4730, 1830,
 4200, 1416, 3705, 5380, 5767, 9261, 924, 6822, 8978, 2536, 8232,
 10530, 10137, 11653, 11704, 1887, 11653, 10218, 9207, 10699,
 3288, 1478, 7261, 10152, 3871, 10134, 7359, 9993, 9510, 8661,
 419, 1826, 978, 11037, 10899, 3311, 2064, 5939, 11072, 1748,
 9516, 5458, 7665, 4459, 5937, 5615, 7288, 3438, 6009, 3217, 264,
 3696, 608, 11576, 2774, 10976, 11146, 11188, 3237, 10913, 3541,
 11755, 9412, 5720, 4226, 1154, 9010, 9922, 3994, 11252, 11575,
 11077, 9308, 7784, 11086, 12047, 5310, 8524, 4117, 504, 3145,
 12216, 2718, 1181, 5446, 1818, 6156, 1945, 11240, 7398, 8307,
 8259, 10113, 11431, 10691, 2147, 2742, 8242, 12031, 8808, 7609,
 3657, 3567, 2485, 7669, 4388, 3255, 1395, 596, 9635, 6739,
 10284, 4910, 9410, 11788, 10978, 3877, 4006, 1860, 6225, 8834,
 11969, 11742, 9733, 8790, 7871, 10347, 2658, 4468, 947, 3384,
 9733, 6496, 382, 81, 7977, 7138, 8962, 10195, 2830, 10227, 5302,
 9974, 9157, 7442, 4931, 9761, 5759, 2115, 431, 12242, 2353,
 7529, 7822, 6343, 3370, 9369, 8491, 6742, 5681, 10973, 412,
 12105, 6913, 5565, 3760, 4378, 4454, 9070, 1289, 2596, 5355,
 12117, 2787, 3798, 4954, 9708, 2191, 2935, 4073, 7455, 11661,
 4170, 8782, 9611, 8647, 2318, 4779, 11339, 3962, 361, 9358,
 7727, 11723, 9018, 10552, 3025, 6852, 6028, 10603, 7147, 8434,
 5604, 4483, 5954, 426, 11403, 2643, 8294, 9504, 7268, 8958,
 2773, 7764, 5926, 8213, 2100, 8814, 7540, 4212, 7012, 353, 7166,
 5717, 9799, 10379, 7768, 9515, 2534, 4504, 5410, 5358, 1879,
 11581, 10692, 2614, 11002, 11667, 7333, 6932, 4254, 9503, 7386,
 2581, 4153, 6079, 6149, 5496, 2397, 11735, 6496, 9250, 11872,
 10842, 2934, 4022, 10681, 914, 4397, 7287, 9673, 4709, 4895,
 3770, 3146, 7254, 4953, 11018, 9062, 3817, 11979, 8723, 3091,
 2675, 8946, 7376, 3652, 6861, 8298, 5547, 11, 4758, 10734, 7434,
 11702, 6466, 9135, 11199, 10059, 503, 2510, 1730, 6101, 11965,
 10264, 6045, 11690, 11530, 761, 9270, 4531, 5482, 6951, 5776,
 10348, 2668, 5246, 8046, 7106, 11302, 3276, 6632, 12008, 6564,
 8465, 1953, 5904, 1036, 3109, 5020, 11945, 458, 11742, 5271,
 4474, 9918, 7963, 11786, 8318, 756, 560, 11377, 1084, 9634,
 9203, 1062, 8461, 1845, 3719, 6672, 6660, 4711, 11337, 10460,
 5367, 4072, 7043, 5567, 6356, 657, 8877, 3633, 11487, 10421,
 10877, 5052, 2174, 4711, 11853, 4461, 10942, 11619, 7591, 3424,
 3372, 4493, 11393, 7115, 9057, 7145, 2060, 9137, 707, 1968,
 7853, 645, 253, 2697, 9294, 8357, 7503, 6187, 7505, 8302, 4635,
 8899, 9258, 8559, 7988, 9571, 243, 6979, 8233, 11555, 5257,
 8361, 1836, 11185, 3771, 3517, 10585, 4756, 10212, 2035, 2778,
 6798, 11229, 11768, 8707, 7931, 3744, 10939, 5317, 6104, 11137,
 3936, 5418, 4368, 201, 3094, 8211, 6803, 2559, 3164, 6846, 8515,
 8894, 8556, 2219, 9593, 6391, 3374, 4868, 192, 2791, 4309, 62,
 20, 9968, 8831, 11185, 1365, 9722, 5623, 2398, 5049, 2241, 6060,
 998, 4233, 1455, 5324, 1053, 5626, 1726, 11569, 12033, 4897,
 859, 1676, 2097, 11147, 5155, 5187, 2026, 12050, 5615, 5450,
 260, 7526, 11923, 6346, 7221, 405, 882, 842, 4621, 4130, 3513,
 114, 3673, 4914
};


static const char KAT_SIG_1024_nonce[] = "af0228b7e30f8c0a6620c8419cd181acfe6c76d134020a9fedb3839ca732f775";
static const char KAT_SIG_1024_msg[] = "sample 0";
static const char KAT_SIG_1024_sig[] = "0affe7ff90ff90ffc0ff42000f0151ff18ffaeffa0ff9effaaff72006a005aff"
 "affe4fffdeff80ffe00078007800b5fff8ffe4000400b600550106007d0133ff"
 "31007effb500730035ff93ffc0ffbc00ca0024ffd7ff46fffe0083009effee00"
 "29004800260034ff36ff1bffccffbf0000ffd0005500bcffbe0036ff6900bf00"
 "24ff0c007cff59ff15ff470060ffcc00380069ff33ff8000cfff62005cfffb00"
 "3c004700d4fff7ffd80123005b00bdff020045ff66ff1d010400adffb100baff"
 "f80101ffeaff5bfedbfff9ff85002efe2dff45ff85ffb700f000ceffe3fef200"
 "2d000000b300e0ffcfff030178fee2ff0dffb4feb8ff930040ff93ff8aff4a00"
 "560226fec9ff53ff50fedcffc5fe6aff8fffacff3dffd9004ffeca0089ffc700"
 "3dff92ffffff89ff64fff1ffdb0030003bff75ff1500bfff64ffaaff65ff6900"
 "29fec1ffff00ea009cff0fffa1018101ad00e90070ff470081ff9c00950087ff"
 "230032002bffd0ff3f00c2fe9700aaffb300caffceff69ffadff96fefbff0cff"
 "a2003a0084ff61ff42ff97fefdff58ff81001001bc006dfff700020195ff33ff"
 "a0ff63ff6a0097012effd7ffadff32003b00320006ff960026ffeeffa8ffdfff"
 "4bffd20014001300220068fee900510059ffa6008600c2007fffc9ffe5ffd7ff"
 "ecffb400160109ffd8002e0006ff3dfee6ff83ffdfff62ff3e00200011fef900"
 "cf003fffcfff70ff090026ff87ff25ff63007a001700e5ffda004b00b8ff4dff"
 "990095ff37ff5b0135ffc0ff9b0159ffab0091010701d3005cfffaffb0ffec00"
 "61fed400e000b4ff940079008ffeba00cbffc0ff070091ff90ffd3ff36002400"
 "61ff33ffe2ff7900e3ff3900400038ffa500d000fd0080ff69ffe2004a00c2ff"
 "f2ff7300dfff07ffcafe4600110113ffd20085003e00afff9d00230049ff03ff"
 "1a002a00150041ff75fffcff6200550067003700bb002b0092ffd9fff3000201"
 "68ff90000800070011ffb800910095ff10003aff8eff38ff93008f00c5011700"
 "2cff2f01400152ffd2ffadff9b005900a80036ffe5fef2fff4febdfff6fff6ff"
 "96002e00d3ffc6ffaf00bcff0cffa9ffc9ff3400e20015ff8ffea900ceff4700"
 "60ffa3ff62ff73001dff8ffff3004eff54fe6f000dff3300af0028ff62007e00"
 "63ff19011fffe3ffb3ff1dff95ffc8ffa40042ff97ffc2ff39ff7dff9bffda00"
 "8b000bff6bfebe00540021ffea00320118ffbefee4004eff3c00d3fff700a900"
 "1e001d0091015e009200bd00e7ffaffff0ff45012aff49ff010135ffffffc601"
 "64ff6cffcfff25ff63fff10026002000e3fffd00650133ffc600b4ffdaff40ff"
 "0700e20043003d00210001012500b6ffb4008bffd9ffa2ffd2fefcffaaff7f00"
 "ceff0b0063fffc0019000bfee5ff76ffe50026ff92fffeff6f00d0ffcdff26ff"
 "9cffe000210090ff720003ffa7ffe2000000e8ff8500afff3100b800a700d300"
 "08008201880089007a0055ff500022ffe0ffe8fedaff0eff2d0012fe4cff0400"
 "140068fdec004cfff6ffdaff31ff63ffb0ffa3012500ba005300cc0005fff0ff"
 "f5013d00bdff50fe3400a40024ff95ff2800c6fed100f1010d001f00ee00d3ff"
 "96ff83ffc40010009f0144002a0051ff36ff8b015b001800800067ffabfecd00"
 "50000cffc500aaffa600580071fff4007e005fff37ffbffff6ff1ffeb2005600"
 "8a004801570051ffafff27ffb400f0ff3eff7200ef00f2ff50ff99ffacff49ff"
 "7affd70068fff1ff1c00b6feffffceffd9ffe7ffff00edff95007cff7a00f9ff"
 "af0080ffc6fff1ff71ff1401a4ff190054fec6ffe5fea6ff6100eeff89fedf00"
 "9600550024ffe4ffba00520080ffffff75ffb1004aff33002f005700e30097fe"
 "2a00d50074fea6ff89001d00120007ff0fff38fef70052ff9d00180079007200"
 "8a01920116ffee00a0ffca008d006b002affb6ff61ffc90002001800ab009300"
 "940054000bff120058ffccff26ff96ffd0ff18ffcbff4fffa9ffc0011301aeff"
 "8eff6bffdd00830181004800b30088fff900fd0041ffffff83fee2001dffa8ff"
 "c00124ff89010a0050011500a7ff3200d0ff63005aff9900470005ff32ffe2ff"
 "7300ec009e00e700f6ff20ff6f013200a9ffb7009cff4cfff4febaffd00009ff"
 "08ffb0ff570093fef9ff75ff610016011ffec5ffd2ff84ffc600d6fff1ffcbff"
 "0400e8fe88ff730086003bff82ff23ff7efea8000bfeb8ffce0027ff17ffe800"
 "1cff840092ff24ffac00440035012dffb2ff950054006effc4ff67005d003bff"
 "2fff520007fff4ff7dff68ffe8ff5d00b6ffce0046ff02fe73000b0132ff2b00"
 "35fffd0085015d00a900570031008bffe5ff2b0130006effca0043ffdf006800"
 "4c00ac00f6ffe8007affa30060002e0077ff47011400d8ff4effd30058003a01"
 "76ffd80033ffa9fe8dfe57ffb9ff31ff2600a2ff78012800590072ff7effd400"
 "4dff48fe8affe6ffc6ff4b00b70079002001450052002c009c01ed00ccff7b00"
 "e3ff34fffe0085ff7f011900b5016d001dff7e007affa600baffe0ff6effe1ff"
 "810008feacffb3ff8aff84003efeecffccffde013fffe900230059006c0006ff"
 "94ff8b00a60089fff7ff70ff0dff1efef200a9006600810071003bfee9ff3500"
 "59ff04ffe5008a002c0035ff8c002a005a006b004bffdd003101f00029001000"
 "06ffecff8f00f9ff16012effc4ffd7ffba0020001effd50082ff4fffef0083ff"
 "74ffabff8dff6f00680097010c004cff2d00a0ff83ff7b012f0000ffc90121ff"
 "73009effcfff5bffd5ffa6ff82ff9dffc80071008bffd1008dffaaff14fe7a00"
 "d30089fec3fee6ff6f0041ff7600170104ffceff620026003700430056ff9200"
 "2c";


static const int8_t ntru_f_1024[] = {
 3, 2, -4, -3, 0, -5, 4, -3, -1, 1, -2, 2, 3, 0, -1, 0, 0, 0, 0,
 0, -2, -2, -3, 3, -4, -1, -1, 0, 2, -4, 0, -9, -3, 5, 3, -1, 1,
 -5, 1, -1, -6, 0, -1, -1, 5, -1, 4, -1, -2, 2, -3, -1, 1, -3, 1,
 1, -5, -2, -2, 0, 0, 5, -8, -1, -1, 0, 0, 2, 0, 4, -3, 4, 3, -3,
 -2, 6, -2, -2, 0, 3, 0, 0, -1, -2, 0, 1, -2, -1, 7, 0, -4, 1,
 -1, -2, 2, -1, -5, 5, -1, -4, -2, -1, 2, -1, 2, -1, -3, 3, 1, 2,
 1, -2, 3, 3, 1, 4, 2, 0, 3, 0, -3, 0, 7, -5, 4, -3, -1, 1, -6,
 0, -1, 0, -5, 1, -2, 2, -1, -1, -2, 3, 4, -1, 0, -1, 0, 1, 3,
 -2, 6, 4, 1, 1, 1, -1, 3, 1, -3, 0, 0, -1, 2, -3, 2, -4, 1, -1,
 -1, 1, -2, -1, -2, -6, -8, -3, 3, -2, 0, 3, -1, 1, 0, 5, -2, 0,
 -2, 1, 2, 1, -2, -5, -3, -2, 2, -1, 1, 1, 0, 1, 1, -9, 0, 1, -2,
 2, 5, 0, 3, 4, -1, -5, -2, -2, 0, 2, 0, -2, 3, 0, -1, -2, -3,
 -6, -2, 1, -7, -4, -2, 1, -1, -1, -3, -3, 2, -3, 2, 1, 2, -4,
 -2, 5, -1, 1, -2, 3, -5, 5, 1, 1, 1, 2, -4, 1, 2, -3, -5, -4, 2,
 -3, 3, -4, -4, 5, 2, 0, -4, 3, -3, -3, 3, 0, -2, -3, -2, 0, -3,
 5, 8, -2, 2, 2, -1, 10, -1, -1, 1, -4, 3, -1, 3, 1, -1, 3, -3,
 5, 0, 4, -3, 4, -5, 3, -3, -1, -4, 3, 1, 0, 2, -1, -4, -1, 4,
 -5, -6, 3, 5, 4, -2, 0, 5, 1, 1, -1, 1, -3, 6, -3, -3, 1, -6, 3,
 -3, 3, 1, 0, 0, -2, -4, -1, 1, 0, -1, -1, 4, -3, 2, 2, -5, 4, 3,
 -3, -2, -1, 1, 1, -3, 4, 6, 0, 4, -3, -1, 1, 6, 2, 3, -2, -3,
 -2, 3, -5, 3, 0, 0, -2, -1, -3, 2, 5, 0, 4, 2, 3, -2, -4, 3, 1,
 -5, -2, 2, -1, -1, -4, 5, 0, 0, 2, -2, -4, 3, 4, 1, 5, 0, 0, 1,
 0, 5, -2, -1, 1, -3, -1, -1, -1, 2, 2, -3, 0, 1, -3, 2, 0, -2,
 3, 2, 0, 3, -1, 0, 2, -4, 0, -3, 3, 3, -1, -1, -2, 3, 2, -1, -5,
 1, 2, 3, 3, 3, -2, 8, 6, -2, 1, 4, -3, 0, 4, 1, 1, 0, 0, 1, 0,
 -1, 5, 0, -5, 4, 3, 5, 2, 0, 0, 3, -2, 3, -4, 2, -3, -1, 3, -2,
 1, -1, 5, 1, 0, 5, -1, 0, -1, -2, -1, -4, -1, -2, 2, -6, -2, 5,
 0, -5, -2, 4, -1, -3, -3, -2, 2, -1, -2, 0, 0, -4, 2, -5, 1, -4,
 -1, 0, -1, -2, 5, -4, 4, -1, -2, 6, 3, 6, 3, -3, 1, 0, 1, 6, 3,
 1, -3, -1, -2, -1, 0, 0, -1, -1, -1, -2, -2, -1, -1, 2, 1, -4,
 -4, -5, -4, 3, 1, 1, 1, 4, -2, 0, 1, 2, 3, 0, 5, -5, 3, -1, 3,
 4, -3, -3, -4, -10, -1, -2, 2, -2, -3, 1, 2, 0, 1, 0, 2, -3, 2,
 1, 1, 0, -2, 1, 0, -3, -1, 0, -3, -1, -4, -5, 3, 3, -1, -5, -1,
 0, -1, 2, -3, 3, 1, 0, 0, -1, 2, 0, 6, -4, 5, -1, 1, 3, -2, -1,
 1, 0, 1, 2, -7, 2, 4, 2, 1, -3, -6, 2, -2, 0, 0, -2, 2, 2, 0,
 -2, 1, 0, 1, 0, 1, 2, -3, 2, 3, 1, 1, 2, 7, 0, 1, 0, 0, -1, 2,
 1, -1, -1, 0, 0, 3, 2, 1, 1, 0, -5, 5, 0, 3, 3, 5, 3, -3, 0, 3,
 1, 4, 0, 6, -1, 3, 4, -1, 5, 5, 4, -4, -2, 2, 3, -10, -3, 1, 1,
 4, 2, -3, 4, 2, -2, -4, -2, -4, 1, 0, 0, 2, -3, 1, -1, -4, 0,
 -1, 4, 1, -3, 0, -1, 1, 3, 2, 3, 1, 2, -3, -3, 0, 2, 4, 0, 0, 6,
 -2, -1, -2, -2, 4, -1, -1, -1, -2, -4, -6, 2, 1, 1, -6, -2, -2,
 1, 0, -3, -3, -3, 3, 3, -1, 1, -3, -1, -1, 1, -6, -1, 2, -1, -4,
 0, 0, -4, 2, 3, 0, -4, -1, 0, 2, 0, -1, 1, 3, 3, -1, -2, 5, 0,
 -1, 1, 0, 2, -5, -1, 0, 1, -5, -4, -4, 0, 1, 4, -6, -3, 1, 0, 2,
 -5, -1, 0, 1, -5, 1, 1, 0, 1, -1, 3, 4, 3, -1, -1, 1, 1, 0, -2,
 0, -1, -4, 0, 2, 1, 2, 4, 2, -1, -4, 2, 2, -1, 0, -1, 0, 0, -2,
 3, 0, -1, -4, 0, -2, -2, -2, 4, 3, 5, 4, 1, 4, -2, 3, 0, -4, -2,
 -3, 2, 2, 0, -6, 2, -7, -1, 3, 1, -2, 4, -2, 0, 1, 2, 4, 0, 1,
 1, 0, 0, 0, 1, 4, -10, -2, -3, -4, 7, -6, -2, -3, 4, 4, -4, -2,
 6, 2, -4, -1, 1, 1, 3, 0, 1, 0, -2, -4, 1, 4, 1, -5, 1, 1, 6,
 -3, 0, 1, -2, -4, 0, -1, -3, 2, 6, 5, 1, -1, 3, 1, 1, 1, -1, 4,
 -5, -3, -1, -2, -3, 0, 2, 2, 2, 2, -6, 7, 7, -1, 3, -1, -2, -2,
 5, 0, 1, 1, -3, 3, -6, 2, 1, 3, 3, 1, -1, 0, 2, 1, -5, -1, -4,
 1, -2, 5, -3, -2, 0, 3, 0, 1, -1, -1, 1, 0, 3, -1, 3, -1, 1, 2,
 0, -4, 2, -1, -3, -2, 0, -3, -2, 0, 1, 0, -5, -2, 4, 1, 7, -5,
 1, 1
};

static const int8_t ntru_g_1024[] = {
 3, -1, -7, -1, 4, -2, 3, -1, -3, -3, -5, 3, -1, -1, 2, -3, -5,
 0, 0, 1, -3, 3, 3, -2, -2, 0, -4, 2, 1, -1, 3, -5, 5, 0, -1, -3,
 -1, -2, 5, 3, 4, -2, -2, 0, -4, 0, 3, 3, 0, 1, 3, -1, -2, -3,
 -1, -2, 3, 1, 0, -2, 0, -2, 0, 0, 1, 3, -2, -3, 3, -3, -1, -2,
 -1, -3, -3, 1, 1, 8, 1, 4, -2, -1, -5, -4, 3, 5, 0, 0, 7, 4, 1,
 1, -4, -2, 4, 4, -3, -4, 5, 3, 2, 0, 1, -6, 2, -1, -3, -1, -1,
 1, 2, 5, 0, 3, 1, 3, 0, -4, -3, -3, -1, -1, 1, 1, 2, 0, -2, 0,
 3, 3, 3, -4, 1, -2, -4, 3, 3, 5, -4, -5, -1, -1, 3, -2, -4, -1,
 -5, 1, -1, 0, 2, -1, 1, 1, -3, -2, -1, -4, -4, -1, -1, 0, -1,
 -1, 3, -2, -2, 3, -6, 2, 2, 0, 2, -3, 0, 3, -2, -2, 2, -1, 1, 4,
 -2, 0, 0, 0, 0, 4, 0, 2, -4, -1, 5, -2, -6, 2, 1, 3, 1, 3, 0, 3,
 1, 2, 0, -4, -2, -3, 4, 2, 0, -8, -2, 2, 5, 2, 0, 1, -2, 0, -1,
 0, 3, 3, 1, 0, 0, 2, 2, -1, -3, 3, -2, 3, 1, -2, 5, 1, 4, -2, 3,
 -2, -3, -2, -1, 2, -5, -4, -2, -3, -6, -3, -2, -3, -3, -3, -1,
 1, -1, 4, -1, -5, -3, 0, 3, 6, 0, 2, -1, 5, -1, 0, 2, 7, 6, -1,
 2, -2, 4, 6, 0, 1, 4, 4, 0, 5, 1, -3, 4, 1, 3, 1, -1, -2, -4,
 -1, 0, 0, 3, -6, -1, 2, 4, -3, -1, 0, -3, 2, 1, 2, 4, 1, -1, -2,
 -1, -3, -2, -6, -1, 1, 2, -2, 0, 0, 0, -3, 1, -2, 5, 1, 1, -5,
 -4, 0, 0, -2, 0, 3, 4, 5, 2, -4, 0, -4, 3, -2, 0, -3, -4, -1, 4,
 0, -3, -2, 1, -1, 2, -3, 1, 0, 0, -3, 0, 5, 2, -2, -4, 2, 0, 0,
 -3, 0, -1, -1, -1, -1, 3, 7, -1, -2, -5, 2, 5, 1, 4, 2, -3, 0,
 -5, -4, 1, 0, 1, -3, 4, 2, -5, -1, 2, -4, 0, 1, 0, 1, 0, -1, 0,
 -2, -4, 4, -2, 0, 1, 1, 0, 2, 0, 0, -4, -5, -3, 0, -4, -5, 2, 1,
 0, -3, 4, -1, 3, -4, -5, -1, 4, -1, 0, 1, -4, 5, -1, 5, 1, -1,
 0, -3, -3, 3, -5, -3, 1, -1, 0, 4, -2, 2, 1, -2, -3, -1, -2, -3,
 -3, 1, -2, 8, -2, 0, 3, -2, 3, 3, 3, -2, 4, 0, 2, 3, 1, 3, 0,
 -1, -1, 3, 1, 1, -1, 5, 1, -1, 0, -3, 1, -4, 1, -1, -4, -1, 6,
 -4, 6, -2, 0, -2, 0, 4, -1, 1, 6, 7, 5, -1, 3, 3, 0, -1, 1, -6,
 -1, -4, 4, -1, 3, 4, 3, -3, -1, 2, 0, -3, 2, -1, -2, 1, -3, 0,
 -1, -5, -1, 4, -2, -6, 1, 0, 6, 2, 1, -3, 2, 1, -1, -1, 4, -4,
 -2, -2, 5, 1, 5, -2, -6, 1, 0, 1, 4, 4, -3, -1, -4, 1, 0, -1, 0,
 -3, 4, -2, 4, 3, 1, 4, 6, 2, 1, -1, 1, -5, -2, -3, 2, 0, -1, -1,
 -5, 3, -3, 2, 0, 1, -4, -1, 7, -1, 2, -2, 3, 0, 0, -4, 4, 2, 4,
 1, 1, 2, 3, -2, 3, 1, 0, 0, -4, 0, 2, 1, 1, -1, 4, 4, -4, -3, 5,
 -1, -1, 1, 3, 3, 1, -9, 0, -6, 5, 0, 0, -2, 3, 0, 2, -2, 3, -6,
 1, 1, -1, 3, 1, 2, 0, 3, -1, 0, -2, -3, 7, 1, -3, -1, -2, 3, -3,
 1, 4, 3, -3, -3, -4, -6, -5, -1, 6, -5, 3, 0, -1, 0, 4, -5, -2,
 1, -2, 3, 6, 2, -4, -5, -6, -3, 2, -3, -4, -2, 1, 1, 0, 1, -2,
 2, -2, -1, 1, 2, 2, -4, -3, -1, 0, -1, 2, -4, 1, -1, 0, -3, 1,
 2, -5, 4, 0, -3, 3, 5, 3, -4, -2, 2, 1, 1, -4, -2, 1, -1, 0, 0,
 3, 0, 1, 0, 1, 1, -1, -4, 3, 3, 1, 0, 1, -1, 1, -2, 3, 3, 5, -1,
 3, -3, -1, 1, -2, -1, 0, 1, 1, -2, 0, 3, -1, -3, -2, 1, 1, 2,
 -7, -2, 1, 5, 0, 0, 0, -4, -4, 0, 1, -1, 4, 0, 0, 3, 1, 3, -4,
 7, 4, -4, 0, 5, 4, -3, -1, 0, 0, -3, -4, 3, 0, -1, 2, -2, 0, 6,
 0, -2, 3, 1, 6, 3, -2, 2, 1, -1, -2, -4, -3, -2, -2, 0, 2, 0,
 -4, -3, -1, -3, 1, 0, -6, 2, 0, 4, 4, 1, -2, -1, -3, 3, -4, -4,
 -2, 1, -5, -1, 2, 1, -2, 0, -2, 2, -1, 0, 3, -2, 1, -6, -2, -1,
 0, -2, -2, 1, 0, 4, -1, 8, 3, 0, 1, 5, 1, -3, 0, 2, 1, 1, -1, 4,
 0, 4, 6, -2, 0, 0, -3, 5, -6, -3, 5, 2, -2, 1, -1, 6, 5, -3, -4,
 -3, 2, 3, -5, 2, 2, -2, -4, 6, -4, 2, 0, -4, 5, 2, -1, 1, 0, -2,
 2, 2, 0, -3, 0, -7, 0, -1, 1, 3, 3, 2, -5, -2, 0, 5, -4, 1, 2,
 2, -1, 4, 5, 2, 2, 2, 0, 0, 2, 1, 3, 2, -4, 4, -2, -1, 2, -2, 0,
 3, -2, -1, 6, 1, 3, 0, 4, 0, -2, -1, 1, 0, -3, 3, 2, 3, -1, -3,
 -3, 3, -2, 3, -2, 0, -1, 3, -3, -2, 1, 4, -4, 2, 5, -7, 1, 0,
 -5, 1, 2, -1, 3, -2, 3, -1, -2, 2, 0, 0, 0, -3, -2, 4, 7, 1
};

static const int8_t ntru_F_1024[] = {
 36, -13, 88, 1, 13, -66, 9, -2, -12, 30, 23, -18, -15, 8, -2, 5,
 19, 13, 14, -22, -22, 29, -18, 8, -45, 28, -4, -46, 30, 40, -26,
 -3, -1, -2, -54, 4, 34, -38, -32, 55, -25, -24, 4, -35, -9, 8,
 23, 24, 35, 17, 29, 7, 41, -3, -13, 39, 25, 24, -34, 18, -55,
 22, -61, -23, 18, 3, 1, -3, 32, -20, -2, -63, 19, 21, -13, 3,
 -7, -17, 5, -40, -29, 8, 6, -43, 27, 31, 3, -28, -46, 76, 31,
 -16, -4, 59, 38, -6, -6, -3, 34, -19, -10, -39, -20, -15, -3,
 -11, -41, 9, -90, 21, -26, 24, -2, -18, -36, 18, -2, -4, -18,
 -67, 14, 7, -22, -22, -28, 42, -57, 32, 7, 25, 7, 30, -45, -9,
 -2, 8, 28, -14, 19, -19, -47, 37, -34, 45, -32, -8, -35, 52,
 -31, 35, -14, -10, 36, -65, -16, -21, -5, 4, 21, -61, 22, 13,
 -55, -5, -22, 14, -10, -35, 8, -5, 27, -31, -32, 3, 0, -12, -25,
 27, -5, -22, 3, -6, 0, 21, -5, 45, 36, -42, 16, -2, -9, -16,
 -44, 0, 44, 3, -9, -51, -32, 11, -4, -7, 33, 15, -9, 13, -6, 15,
 15, -30, 10, 14, -8, 27, 20, -3, -10, 22, 14, 7, -15, 31, -17,
 -20, -14, 4, -2, 26, 27, -7, 32, 49, 27, -40, -4, -35, 11, 3,
 17, 35, 11, -14, 35, -6, 7, 10, -38, 12, 43, -42, 44, -20, -3,
 33, 35, 14, 1, 10, -9, -11, -20, 31, 30, -2, -2, -6, 17, -10,
 -10, -10, 49, -23, -18, -3, -1, 12, 19, -44, -21, -13, -19, 25,
 4, -23, -20, 6, -15, -2, 21, 19, -6, -4, 43, -24, 31, 22, -15,
 55, -5, -3, -8, -6, -14, 23, 0, 32, -28, 48, 55, 43, 2, 17, -4,
 56, 58, 32, 3, -6, 43, 11, -3, -9, -26, -17, -6, 23, 29, 30,
 -31, 5, 27, 11, 9, 30, 32, 66, 10, 33, -40, -26, 19, 38, -11, 4,
 12, -57, 30, -14, 29, -5, 12, -9, -17, 20, 40, -1, -19, -5, -16,
 -38, -25, -24, -1, 21, -21, -47, -1, -8, -53, 39, 7, -36, -19,
 4, 0, 2, 16, 6, 20, 8, 8, -7, -42, -1, 4, -17, -7, -10, -24, 0,
 -29, -1, -15, -2, 3, 9, -21, -2, -20, -15, -68, -42, 21, -40,
 -23, -3, -5, -18, -2, -17, -20, 17, 10, 16, -54, 27, 5, -21, 21,
 4, -54, -25, 2, 61, 39, -25, 47, -5, 20, 12, 8, -21, -12, 16,
 -13, 23, -4, -47, -12, -15, 5, 20, -4, -22, 37, -43, -14, -30,
 -21, 15, -24, 1, -13, 25, -3, -8, -4, 9, -13, -1, -14, 39, 19,
 -8, -11, 45, 32, -25, 18, 77, 13, 14, 21, 38, -42, 15, 28, -17,
 6, -2, 17, -36, 21, -33, 13, 12, -6, 36, -5, 9, 7, 1, -17, 30,
 -16, -3, -39, -12, -6, -21, -28, 3, -13, -17, 29, 23, -12, 17,
 35, -18, -10, 1, 26, -33, 69, 57, -12, -15, 43, 18, 27, -31,
 -29, 37, -5, 50, -56, -22, -57, -1, 21, -15, -27, -48, -20, -28,
 -4, -31, -20, 9, 10, 15, 12, -7, -38, 23, 0, 9, 3, 15, 28, 31,
 -8, 4, 19, 3, -7, 30, -14, 27, -7, -25, -20, -10, -20, 27, -6,
 -30, -8, 27, -5, -23, 52, -44, -33, 48, -20, 10, -21, 7, -34,
 -1, 26, 40, -11, 4, 46, -30, -13, -9, 27, 13, -13, 13, -4, 11,
 34, -32, -3, 51, 24, -45, 39, 14, 15, -55, 12, -28, -21, -14, 3,
 -16, -25, -13, 35, 18, -7, -27, 51, -16, 29, -28, 5, 1, -32, 3,
 -25, -7, -15, 33, 8, 37, -20, 26, 25, 12, 13, 15, 8, 4, 11, 8,
 -31, -1, 8, 13, -31, 22, -7, -3, 7, 12, 10, -12, -62, -49, -12,
 -5, -3, -53, -30, -7, -56, 20, 45, 6, -46, -32, -15, -13, 9,
 -18, 11, -5, 12, -6, 10, -62, 8, 11, -18, 27, 16, -5, -6, 4,
 -28, -6, -30, -58, 11, -8, -40, -51, 20, 27, 17, 12, -9, -28,
 -11, -8, -22, -18, -16, -36, 14, 17, -44, 2, 42, 16, -9, -31,
 -16, -3, -14, 41, -22, 16, -1, 32, 12, 4, -36, 18, -41, 13, 31,
 -35, 14, 8, -10, 19, -9, -4, -36, -15, -62, 0, 16, -28, -54, 4,
 20, -9, 14, 18, -26, -30, 19, 10, 10, -5, -10, 7, 23, -7, -31,
 -2, 19, -63, -14, 0, -18, -3, -21, -33, 11, -52, -21, -4, -48,
 -35, -6, -4, -14, -13, -1, 14, -16, -21, 9, -37, -31, -16, 4,
 -17, 2, -4, -17, 2, -51, -16, -16, 3, 59, 13, -16, -30, 17, 9,
 35, -11, -31, 32, -7, -26, 28, 7, 19, 28, -17, -49, -30, -9, 23,
 19, -2, 1, -3, 9, 48, 11, -54, 9, -22, 25, 8, 22, -52, 37, -14,
 -10, -30, 20, 52, 3, 10, 17, 56, 33, -3, 41, 53, 41, 4, -7, -25,
 8, -45, 29, -11, 5, 29, 60, -15, -8, 14, -7, -33, -14, 6, -12,
 -2, -2, -10, -12, -16, -21, 2, 5, -14, 53, 41, 61, 12, 31, 4,
 22, -16, 36, -4, -42, 38, -29, -10, 20, 20, 35, 66, 16, 12, -50,
 -5, 1, -16, 32, 33, 46, -3, 11, 11, -19, 28, 5, 38, 15, -35, -6,
 1, -6, -17, 2, -28, 25, 42, 8, -2, -11, 14, -33, -42, 23, 21,
 -31, 63, -8, 15, 26, -16, 13, -3, 39, -16, 58, -14, -14, -22,
 -30, -26, -51, 4, -9, -18, -5, -56, -48, -60, 10, -52, -28, -6,
 -12, -35, 31, -22, -31, -13, 8, -14, -8, 23, -20, -45, -12, 30,
 8, 7, 9, -12, -13, -2, -29, 18, -1, 30, -17, -26, -41, 58, -66,
 -6, 8, -78, 25, 29, 0, -40, -27, 16, 40, -15, -28, 18, -54, 16,
 -12, 1, -4, 17, -21, 12, 30, -7, 45, -8, -28, 8, -41, -1, 42, 3,
 -6, -47, 22, 44, -78, -45, 41, 12, -30, -23, 13
};

static const int8_t ntru_G_1024[] = {
 56, -4, -28, 13, 4, 26, -14, -10, -21, -32, 21, -21, 0, 59, 26,
 -6, -81, -7, -42, -1, 8, 20, 37, -33, 36, 1, -6, 14, -1, -73,
 15, 18, 7, 34, -45, 7, 19, -30, 8, 8, -56, -13, 7, 20, -20, 14,
 4, 11, -36, 21, 19, -16, -17, 10, -45, -4, -12, 18, -9, 23, 20,
 1, -27, -7, 1, 1, 33, -27, -23, 56, 35, -5, 16, 43, -1, 11, -18,
 5, 59, 14, -39, 11, -34, -59, 6, -18, 43, -25, 22, -7, 9, -28,
 -9, -40, 47, 0, -12, -22, -12, -44, -17, -12, -10, -5, 4, -20,
 -10, 25, 38, 2, 0, -17, 14, -16, 6, 9, 7, -29, 11, 48, 14, 10,
 0, 24, 4, -5, 56, 20, 1, 35, 62, 7, -31, 36, 36, 24, -19, -33,
 19, 9, -13, -16, 2, 1, -29, 3, -3, 42, 8, 27, -19, 51, 16, 14,
 28, -1, 24, 3, 1, 47, -13, -43, 9, 17, 3, 21, 26, -19, -6, 4,
 -36, 7, 26, 19, 40, -44, 27, -20, 9, -1, 19, -1, 0, -51, 5, -5,
 -45, 11, 26, -1, 1, 39, -6, 14, -14, -34, -29, -6, -15, -23, 24,
 -7, 16, -51, 55, -30, 2, 13, 1, -37, 33, -29, 11, 14, -44, 46,
 40, -45, 59, -6, 3, 18, -46, 20, 17, -2, 0, 27, -20, 1, -7, -16,
 -29, 0, -2, -19, 19, -10, 16, -15, -2, 2, -10, 4, 27, -4, 2, 0,
 15, 35, 19, 25, 21, 32, -9, 26, -28, -23, -2, 7, -24, 75, -3, 6,
 21, 45, -8, -12, 21, -12, -29, -7, 34, -13, -22, 28, 32, 20, 18,
 -22, 2, 17, -12, 37, 37, -33, 5, 28, 27, 55, -30, -9, 10, 23,
 12, -9, -26, 30, 5, 2, 24, -37, 9, -25, -50, 33, 3, -21, -38,
 -19, 44, 41, 9, 1, 34, 6, -26, -44, -26, 15, -3, -21, -24, 40,
 -43, 28, 2, -30, -13, -8, -40, 1, 31, -2, -16, -16, -25, 33, 1,
 -23, -51, -40, -37, -12, -38, 78, 15, -31, 32, 41, 26, 26, -25,
 -60, 15, -43, 27, -54, 0, 25, -7, -27, 15, -18, 20, 20, -76, -3,
 35, -39, 20, 28, 21, 10, 6, -41, -29, -31, -55, -41, 0, -8, 4,
 -17, 21, -21, -12, 11, 4, -17, 6, 26, 11, 9, -13, -41, 29, -7,
 -4, 21, 12, 2, -1, -23, 3, -5, 1, 30, -10, 9, 40, -63, -27, 51,
 -29, 4, -1, -7, 30, 30, -21, 32, -17, -51, 28, 34, 22, -5, -5,
 42, 7, -1, -16, -15, -23, 10, -9, -3, 1, 26, -12, 16, 5, 18, 13,
 -1, 28, 8, -52, -42, 12, -3, -28, 30, -3, 11, -14, -3, 34, -75,
 -13, 6, -39, 14, 72, -16, 18, -17, -36, -3, 5, -9, -38, -42, 4,
 7, 3, 74, 2, 9, -23, -32, -43, -59, -15, -4, 31, 12, -16, -24,
 35, -7, 0, -8, -3, -8, 6, 1, -57, 13, -8, 22, 31, 40, -16, 35,
 34, -32, -60, -21, 8, -1, -13, -39, 14, 17, -7, 33, -35, -6,
 -18, 0, 29, -5, -9, 40, -19, -45, 24, -41, -7, 32, 19, 28, 28,
 -17, 10, 18, 6, 29, 1, -1, 17, 28, 18, -22, -16, 20, 51, 8, 2,
 18, 16, -9, 40, -8, -20, -31, 11, -5, 34, -25, -40, -48, -9,
 -36, 4, 17, 15, 8, -18, 27, -24, -25, -13, 22, 21, -21, -25, -2,
 -32, 7, 20, -8, -26, -23, 21, -3, 34, -15, 0, -17, -21, 56, -38,
 -2, 18, -44, -14, 31, -2, -24, 3, -18, 18, 16, -24, -35, -48, 5,
 -36, 28, 15, 13, 32, -14, 14, -38, -9, -62, -11, 6, 6, -26, -46,
 72, -63, -35, 16, -4, -19, 45, -20, -28, 1, 26, 36, -35, 30,
 -13, 39, -29, 16, -30, 14, 5, 4, -11, -6, 22, -9, 5, -9, 14,
 -27, -30, 23, 23, -2, -7, 30, 0, 6, 32, -43, -17, 11, 10, -29,
 -15, 111, 15, 10, 13, 7, 16, -2, 3, -3, -6, 38, -10, -11, 5,
 -34, -2, 14, -32, -21, 4, -5, 0, -8, 27, -50, -7, 23, 8, -17,
 -63, -87, -1, 34, 5, -1, -11, 3, -6, 33, -9, -45, -34, 2, -23,
 46, 43, -11, 12, -21, -7, 17, -48, -42, -3, 7, 2, 24, 8, 71, 6,
 0, 9, -16, 6, 17, 20, -2, 6, -44, -13, 44, 23, 27, 13, 37, -10,
 58, 8, -12, -4, -15, 14, 27, -47, 18, -68, -6, -9, -16, 2, 7,
 -15, -47, 34, 1, -38, -25, -19, 1, -10, 14, 7, 9, -20, -1, -21,
 4, -13, 18, -26, -10, 31, 51, -59, 15, -3, -19, -70, -17, 46,
 -14, 24, 32, 15, 34, -23, -36, -16, -7, -10, 2, 36, 7, -12, -51,
 -25, -8, 23, -18, -17, 7, -48, 9, -26, 44, -25, 44, 32, 28, -10,
 11, 12, -17, 4, 16, 6, -19, 32, 22, -31, 16, 8, 31, -4, 17, -21,
 1, 56, 36, 21, -31, -4, 0, -46, -26, -44, 61, -61, 2, -21, 45,
 15, -14, -35, -13, 5, -38, -10, -19, -7, -7, -33, 33, -11, -12,
 29, 17, -27, -46, -48, -25, -13, 6, 25, -12, -12, -29, -58, -2,
 -29, 5, -11, -15, -19, 32, -58, 14, -35, -3, -20, -16, -32, -24,
 -45, -18, -3, 0, -1, -43, -9, 12, -29, -2, 1, -9, -26, 5, -2, 9,
 -17, 32, 27, -3, -27, 2, -7, -13, 4, 6, 46, 38, 28, -27, -3,
 -19, -38, 64, 13, 9, -16, 35, 46, 8, -80, 15, -16, -19, -26,
 -10, 48, 8, -11, -8, -2, -16, -22, 50, 9, -14, -52, 39, 11, 49,
 2, 5, -11, 13, -4, 10, 11, -23, -23, -10, 14, 31, 42, 18, 0, 49,
 34, 19, -25, 15, -41, 30, 8, 18, 29, -6, 15, -17, 5, 30, 2, -19,
 12, 43, -32, 31, -39, 8, 21, 16, -12, -8, 24, 37, 8, -13, -54,
 0, -44, -12, -26, 31, 5, -22, 51, 11, -7, -22, 27, 17, 12, 20,
 -8, 9, -11, 48, -21, 9, 24, 2, -4
};

static const uint8_t msg_in[] = {224, 10, 0, 0, 0, 0, 0, 0, 129, 43, 0, 0, 16, 11, 0, 0, 92, 1, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
 0, 5, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 124, 0, 0, 0, 153, 0};

static const uint16_t ntru_h_1024[] = {
 6857, 4524, 6980, 4278, 8521, 9214, 399, 11461, 10346, 9318,
 2768, 1272, 396, 5635, 2424, 3623, 2071, 9145, 8766, 3391, 4900,
 10525, 6985, 3336, 5084, 11240, 5203, 4517, 7825, 974, 6450,
 11728, 3727, 1190, 1946, 2049, 10661, 1728, 1985, 8185, 9223,
 9410, 912, 7934, 2032, 377, 5915, 4515, 2076, 4073, 2109, 6749,
 7387, 4215, 11826, 2227, 4483, 10801, 6125, 5658, 4570, 11193,
 3749, 10418, 5800, 7159, 310, 2683, 453, 5616, 5109, 11698,
 1957, 11587, 11845, 11324, 3939, 3660, 6103, 1382, 6149, 6923,
 1333, 7200, 9403, 5990, 10319, 3473, 4771, 3113, 1322, 6743,
 7880, 11899, 3652, 1437, 6650, 8034, 11683, 11315, 2877, 8676,
 9741, 10509, 10783, 10635, 11008, 213, 3492, 8626, 9271, 4771,
 5099, 10209, 6359, 7738, 10860, 5853, 4632, 9862, 5942, 252,
 10959, 11867, 1685, 4189, 5995, 11443, 5328, 10337, 2968, 5209,
 8779, 4330, 7128, 11161, 9016, 12220, 4751, 4429, 7602, 5861,
 7151, 7129, 772, 4128, 8860, 4537, 4010, 1037, 1692, 11048,
 6880, 3575, 11950, 2203, 2670, 3213, 3925, 9414, 6968, 11107,
 11333, 11878, 11390, 3409, 1632, 5743, 11214, 4130, 5383, 10064,
 8173, 11054, 5112, 7029, 2850, 1905, 7673, 3131, 3383, 10728,
 8997, 4775, 6026, 206, 1602, 6698, 84, 8650, 4051, 2857, 1654,
 10234, 3560, 2220, 10072, 4755, 711, 3377, 3830, 1588, 6249,
 9108, 6301, 718, 4896, 4000, 5810, 14, 7962, 11835, 1619, 10486,
 3549, 3698, 4990, 2693, 2161, 7265, 7865, 10853, 5758, 532,
 9771, 9170, 9181, 10730, 943, 12226, 10180, 12238, 7892, 740,
 1961, 2829, 676, 5308, 8939, 9874, 11816, 8850, 2977, 2717, 535,
 11753, 2410, 4915, 8862, 3229, 87, 8181, 6423, 2900, 7322, 2728,
 11030, 9252, 660, 8255, 5084, 9638, 9905, 300, 10871, 8115,
 3921, 10583, 8542, 11888, 8610, 12287, 8303, 4353, 1249, 8437,
 4800, 11879, 11321, 226, 394, 3180, 8426, 8815, 11081, 10343,
 5780, 3187, 8139, 8663, 3271, 8829, 3961, 8000, 10424, 8944,
 8953, 8797, 11506, 9527, 5086, 3654, 2990, 2609, 9285, 10676,
 2126, 8322, 8388, 2907, 1729, 8000, 11960, 10595, 12191, 6735,
 9877, 2994, 5468, 8463, 9718, 2, 1224, 9842, 2220, 7347, 10016,
 5484, 11643, 3603, 4027, 8718, 1504, 5330, 6070, 6726, 10243,
 5581, 11371, 2288, 998, 11901, 9880, 8241, 3448, 10681, 12014,
 564, 4560, 6851, 9235, 5722, 10116, 12008, 702, 9412, 1818,
 2166, 2521, 3449, 9976, 1317, 8202, 2198, 2879, 9909, 8232,
 4358, 9168, 2723, 6954, 7861, 1599, 21, 768, 2337, 8793, 3970,
 3427, 6800, 3319, 10882, 3474, 11336, 6751, 2944, 2916, 2479,
 6692, 10943, 1129, 10958, 9778, 4105, 1160, 1789, 4091, 11799,
 9847, 4003, 7156, 6, 7913, 5539, 930, 5480, 4256, 4410, 11099,
 7276, 858, 2462, 7336, 7936, 10066, 9162, 1859, 4488, 7896,
 9090, 433, 11723, 12017, 2998, 2568, 7557, 3811, 5754, 6153,
 2684, 6011, 745, 3994, 10864, 26, 6792, 4045, 12039, 8465, 9526,
 3324, 4640, 2950, 11189, 11560, 10968, 3467, 9643, 3390, 3105,
 11058, 10171, 7104, 2221, 2882, 10809, 7349, 5094, 2277, 11876,
 5610, 9833, 11556, 9212, 1093, 4875, 1258, 6525, 1379, 6528,
 8903, 6134, 6783, 3749, 7107, 7032, 6685, 5443, 5050, 10430,
 12242, 11782, 9733, 1619, 3481, 11713, 8961, 1719, 6641, 2111,
 578, 6688, 317, 11397, 6930, 6025, 12121, 9635, 11230, 6031,
 4549, 10556, 5810, 915, 9655, 9997, 9300, 11651, 3638, 6822,
 2744, 6442, 11872, 4596, 9029, 6843, 7691, 146, 8712, 5846,
 9537, 2265, 8123, 10530, 3748, 10109, 4081, 8648, 6032, 243,
 5257, 7387, 3266, 11825, 9483, 5681, 8116, 6123, 5512, 1832,
 12174, 6471, 5779, 9994, 5717, 3438, 10887, 7041, 5482, 5776,
 5052, 1277, 113, 1592, 397, 11378, 8540, 5539, 2871, 4794, 3498,
 6522, 9072, 11037, 7679, 7192, 3190, 4453, 10689, 7319, 4307,
 9129, 611, 8733, 7051, 2177, 4032, 400, 8267, 10724, 6343,
 11699, 2709, 2348, 9276, 199, 8140, 1116, 4362, 10542, 7509,
 4463, 3631, 8311, 10476, 4188, 5615, 541, 11358, 10783, 2653,
 5769, 7483, 233, 7151, 7427, 6954, 8993, 8388, 2634, 2867, 8188,
 10115, 9728, 10919, 2716, 2602, 10405, 8148, 7446, 4372, 4018,
 7482, 9473, 6256, 743, 11460, 2574, 10848, 7890, 6186, 277,
 8438, 6377, 9923, 1538, 8021, 1912, 2915, 8575, 7640, 1224,
 6644, 7740, 8476, 7237, 8105, 8741, 8510, 2956, 7727, 5456,
 4878, 6062, 5590, 4643, 2031, 12027, 7298, 11101, 423, 11766,
 6001, 8391, 11344, 7039, 925, 12087, 4715, 7775, 2577, 12100,
 10177, 7515, 8393, 7854, 7358, 2549, 8037, 7490, 9570, 11450,
 7333, 9792, 6517, 6246, 6324, 5652, 4287, 2916, 10244, 6843,
 1032, 10596, 10106, 412, 1649, 796, 787, 9141, 8210, 11119,
 8722, 5557, 8075, 10581, 5333, 646, 11955, 8382, 10460, 249,
 10396, 1425, 10106, 9653, 2083, 9412, 9482, 10358, 5238, 4889,
 10735, 5696, 10184, 10472, 8912, 4715, 4135, 1850, 6734, 788,
 7911, 12091, 5068, 2196, 8528, 1228, 7261, 6719, 5451, 22, 7250,
 5546, 3002, 1364, 3609, 815, 9625, 6174, 11030, 1121, 5227,
 11682, 127, 9743, 2882, 2013, 6410, 3887, 5624, 6044, 6535,
 10445, 11640, 754, 806, 1728, 10444, 3467, 10796, 1342, 560,
 6412, 9877, 4231, 1004, 7563, 6241, 6650, 7678, 9513, 9268,
 5824, 756, 6364, 382, 6099, 11818, 3452, 10664, 9035, 1892,
 3627, 7790, 2766, 4747, 10766, 2582, 8247, 1343, 5404, 8999,
 1306, 2323, 1697, 3027, 3992, 10237, 12264, 2504, 12196, 285,
 3341, 1023, 11597, 65, 3054, 7012, 3354, 3802, 6381, 11090,
 7956, 8016, 5817, 3082, 7822, 10676, 10795, 9182, 3766, 1386,
 7018, 9919, 4122, 4277, 994, 957, 10047, 4963, 6036, 1829, 3699,
 5927, 2986, 11757, 1091, 8586, 4136, 5998, 8614, 738, 7930,
 9614, 1038, 3465, 9461, 8800, 448, 4790, 6902, 557, 2952, 10752,
 10914, 3678, 10642, 6378, 4775, 8587, 424, 160, 4814, 2921,
 4061, 1553, 10018, 3960, 5267, 1357, 11229, 9706, 5480, 3599,
 695, 9316, 12014, 8205, 274, 3219, 7113, 2914, 4379, 2025, 3948,
 10733, 2075, 9903, 6767, 7202, 5303, 10864, 11908, 2946, 1579,
 5946, 11135, 3629, 12006, 1620, 6884, 6120, 9640, 3085, 8987,
 6885, 126, 8477, 119, 7775, 10599, 11996, 1533, 6606, 9624,
 7770, 3292, 11468, 11115, 9034, 44, 1631, 3867, 10484, 8799,
 6863, 10298, 6792, 10913, 1051, 3927, 3297, 5283, 7269, 10315,
 8364, 7328, 2905, 9803, 8593, 1567, 7314, 934, 10166, 7739,
 2512, 8874, 11011, 10479, 7844, 3646, 6388, 7202, 9880, 4708,
 1057, 9014, 11431, 6222, 4398, 2374, 6684, 4743, 7242, 8114,
 8995, 1222, 2096, 5121, 10994, 8697, 10848, 10235, 2380, 8095,
 7857, 6687, 8380, 7399, 3751, 5398, 98, 7175, 3353, 3777, 8408,
 10568, 12088, 5008, 10713, 10027, 3345, 11243, 2602, 2825, 9460,
 2218, 5381, 9106, 12214, 844, 7720, 8328, 3552, 7008, 11397,
 6321, 1422, 2261, 251, 11402, 176, 10570
};

uint8_t seed_nist_key[] = { 124, 153, 53, 160, 176, 118, 148, 170, 12, 109, 16, 228, 219, 107, 26, 221, 47, 216, 26, 37, 204, 177, 72, 3, 45, 205, 115, 153, 54, 115, 127,
45, 181, 5, 215, 207, 173, 27, 73, 116, 153, 50, 60, 134, 134, 50, 94, 71};

uint8_t seed_nist[] = {196, 115, 28, 56, 25, 242, 155, 120, 71, 77, 165, 234, 163, 139, 94, 152, 178, 83, 84, 125, 118, 108, 242, 61, 80, 232, 135, 49, 192, 28, 166,
 225, 24, 108, 247, 80, 78, 54, 174, 18, 180, 233, 232, 20, 192, 110, 104, 235};

uint16_t hm_nist[] = {5856, 9672, 354, 9719, 7445, 6283, 10462, 8588, 85, 3840, 154, 4853, 9810, 2498, 6289, 11201, 10788, 1348, 4887, 9929, 6350, 11349, 9022, 8339, 1628, 6696, 7021, 7449, 11889, 6671, 6476,
 8912, 5472, 9103, 11621, 4985, 11799, 7779, 6236, 4880, 3469, 2493, 455, 8968, 7869, 9871, 3795, 10502, 24, 9231, 1668, 10999, 5937, 10579, 6780, 1407, 149, 922, 884, 5092, 7485,
 10910, 3231, 9806, 9181, 4821, 7829, 10197, 9857, 1682, 5559, 9831, 10176, 3765, 10055, 12080, 5137, 11767, 7822, 2386, 7572, 7172, 2543, 3735, 5842, 9635, 6402, 11416, 8387, 9006, 9905,
 6464, 7783, 8087, 469, 5723, 8863, 1320, 4171, 4942, 8036, 7169, 1063, 1414, 4290, 4015, 2886, 5520, 7406, 6283, 1727, 757, 2589, 5012, 10398, 347, 2945, 4993, 3535, 12102, 4117,
 10037, 9469, 3593, 607, 6667, 11300, 2911, 5494, 10477, 4953, 5479, 8012, 6745, 4327, 7739, 4946, 1830, 8740, 11249, 10418, 1337, 2159, 6103, 10419, 6852, 10918, 634, 2147, 11027, 115,
 11934, 2008, 5283, 9696, 5339, 8111, 10592, 4456, 3920, 11139, 7080, 6830, 275, 11516, 7928, 8530, 7695, 1683, 11501, 5871, 11165, 7100, 810, 7857, 5717, 10166, 9130, 11194, 10671, 536,
 737, 12248, 6353, 8544, 3937, 5034, 3917, 8711, 8462, 10378, 3165, 4493, 9024, 2140, 9035, 7460, 4719, 3552, 7015, 4469, 9174, 5994, 9150, 6422, 11130, 3000, 1976, 8802, 2033, 11441,
 1864, 8543, 611, 2935, 11438, 2307, 5860, 5554, 741, 6519, 8885, 2954, 5716, 6994, 3536, 7164, 5280, 3461, 6095, 5498, 11397, 11592, 9323, 12119, 5137, 2923, 5547, 9278, 6730, 2513,
 8428, 10364, 2322, 12010, 11719, 4476, 8565, 1958, 2343, 2126, 6759, 6207, 8633, 9496, 5827, 5339, 2665, 4457, 12239, 6369, 1174, 6305, 10726, 6062, 1470, 40, 3572, 5825, 9256, 3030,
 8189, 4495, 10957, 7556, 10444, 3929, 3336, 7719, 7701, 3920, 3240, 5384, 6158, 10377, 9603, 11575, 11387, 6515, 383, 10946, 10338, 10925, 9516, 2561, 9248, 11489, 5989, 5931, 10860, 5884,
 9448, 12029, 4249, 4721, 11411, 6516, 919, 9414, 4021, 2813, 6433, 4060, 6229, 9324, 8396, 3655, 4038, 11401, 11391, 6624, 6965, 1187, 7778, 9525, 5290, 4589, 1770, 9836, 1847, 5239,
 11924, 4889, 8212, 1707, 5735, 4974, 2531, 449, 2768, 12064, 9859, 10323, 3459, 4735, 9661, 384, 1189, 7548, 5661, 11844, 9595, 6749, 1936, 6998, 11774, 2877, 3385, 2207, 9872, 4350,
 11077, 9953, 455, 2552, 8605, 9946, 6442, 7246, 3157, 10849, 4656, 1667, 9455, 1555, 8596, 5495, 888, 8049, 11028, 3015, 10324, 2961, 2816, 9379, 8914, 5548, 6966, 8344, 8972, 8966,
 224, 6524, 7962, 7014, 4269, 11969, 9655, 6309, 11034, 2971, 417, 2194, 9184, 8810, 2677, 763, 7385, 8099, 1985, 11618, 4343, 4646, 4330, 2255, 3333, 4466, 6455, 7587, 7483, 6205,
 4553, 5597, 3179, 6977, 6462, 6934, 7464, 11732, 9158, 7192, 4401, 6097, 11916, 640, 9047, 1129, 6235, 7792, 10154, 7615, 11712, 4726, 6950, 4287, 5438, 3839, 3522, 8654, 287, 11696,
 6806, 2209, 8790, 8208, 9387, 7654, 10043, 11137, 3879, 11513, 11394, 335, 3681, 5862, 5871, 3232, 91, 6080, 3237, 4310, 6144, 12168, 10215, 8661, 10679, 10909, 2373, 7161, 7496, 11050,
 6570, 555, 11779, 1676, 3613, 8205, 7877, 2609, 3911, 11342, 570, 8790, 11693, 6020, 2933, 5761, 7284, 1002, 8389, 8784, 2452, 5762, 3906, 7918, 4778, 461, 7072, 5622, 7193, 11329,
 3073, 6858, 3900, 6287, 11292, 11080, 6353, 3629, 8090, 11688, 9714, 7511, 2563, 10715, 2508, 7801, 2557, 916, 1295, 6651, 6418, 10108, 11217, 9338, 6737, 10409, 2959, 1293, 9572, 12032,
 10789, 11653, 10462, 7187, 8367, 2531, 12179, 3863, 4057, 9816, 734, 3389, 12096, 7233, 4960, 4570, 2658, 820, 6382, 632, 11023, 7280, 3435, 2482, 1913, 7023, 9533, 10280, 6081, 3646,
 12266, 424, 8733, 4725, 1539, 6704, 9764, 6520, 7244, 3443, 10494, 11916, 11944, 3767, 2789, 5669, 9859, 641, 443, 11076, 2536, 3534, 8390, 11788, 7339, 5206, 760, 9294, 9545, 8756,
 6034, 9787, 4303, 1043, 5575, 860, 2621, 11280, 12077, 8035, 5223, 4583, 7951, 11222, 10971, 3537, 7731, 8094, 5838, 223, 4275, 9957, 2084, 5955, 4011, 7657, 9173, 3597, 2712, 10725,
 10346, 3651, 350, 3169, 11400, 1825, 5049, 7806, 1173, 11542, 8543, 7648, 8199, 4681, 7054, 1808, 2798, 2394, 3944, 5883, 11843, 1753, 10760, 8979, 11827, 6778, 8584, 6868, 4747, 6676,
 5529, 4707, 9596, 5927, 11200, 12274, 6497, 7278, 9540, 7538, 2256, 11887, 5972, 11673, 10582, 7963, 9216, 7581, 10778, 10853, 3564, 9854, 10547, 5543, 11609, 3186, 2957, 936, 8315, 4490,
 7193, 10426, 6110, 11637, 7138, 8593, 7410, 5410, 3688, 10817, 7093, 1293, 6357, 10232, 10823, 4042, 5633, 1375, 3747, 7271, 4427, 1849, 3352, 318, 3508, 2272, 10129, 10829, 5116, 2567,
 1578, 6237, 989, 8531, 469, 6691, 1502, 10305, 7559, 10900, 11630, 4216, 10706, 8369, 3183, 9266, 11177, 2421, 3305, 2495, 10760, 1992, 4494, 3514, 2709, 8561, 1209, 10993, 9179, 10532,
 1263, 5516, 11765, 8445, 2693, 1111, 9296, 3460, 7372, 7959, 6955, 12257, 7242, 9983, 2468, 6534, 2259, 9198, 5764, 7337, 5300, 3162, 8472, 4976, 525, 2903, 5240, 3828, 7315, 8395,
 22, 6187, 5909, 2705, 2746, 8692, 6759, 911, 9111, 8413, 933, 7938, 8098, 457, 2745, 2143, 3913, 648, 6736, 8181, 5411, 10779, 10705, 6067, 9205, 10743, 10356, 5927, 11019, 9355,
 3733, 11668, 4808, 3396, 581, 5516, 3786, 8937, 9592, 10958, 684, 9, 11507, 7949, 825, 992, 2153, 4397, 7207, 2613, 2593, 4230, 3948, 6263, 3018, 5583, 6313, 5092, 5134, 6779,
 8149, 9724, 8852, 5238, 4434, 6350, 5796, 1987, 5284, 2095, 11782, 3117, 7591, 11691, 3998, 4838, 298, 4268, 9993, 11225, 11223, 4244, 9010, 1279, 9420, 7818, 7942, 6627, 2509, 2456,
 11550, 3197, 4337, 12160, 8541, 8316, 5590, 11202, 9465, 3978, 3672, 2339, 7691, 5771, 8381, 8459, 6209, 1021, 665, 9588, 5900, 5966, 7372, 818, 2956, 6368, 9836, 3991, 8691, 7400,
 2830, 5539, 7047, 11858, 10381, 3689, 7071, 3433, 4787, 7316, 11891, 954, 6932, 432, 6332, 5622, 5057, 10670, 690, 4770, 9917, 5953, 8858, 8407, 755, 6660, 753, 6664, 5068, 3375,
 1622, 7096, 3763, 5873, 1412, 6214, 10790, 1338, 11117, 9322, 8155, 9179, 8043, 10635, 9787, 12253, 2304, 6153, 384, 7988, 11871, 4125, 6461, 1502, 131, 3969, 10969, 11105, 11258, 6726,
 10100, 5872, 8513, 5710, 9680, 1049, 7926, 582, 6033, 886, 5772, 4919, 2867, 6311, 9953, 9354, 6924, 193, 5844, 7729, 5066, 9664, 11580, 5521, 455, 11189, 10801, 1559, 5754, 4,
 5265, 915, 5725, 5430, 10918, 5851, 6012, 10330, 2482, 4025, 6231, 7545, 11241, 9675, 1985, 8639, 5134, 4303, 12177, 11175, 7180, 744, 3070, 5719, 6604, 11393, 6518, 2323, 2386, 5602,
 3505, 11607, 9690};
static double FFT_in[] = {5856.000000,
9672.000000, 354.000000, 9719.000000, 7445.000000, 6283.000000, 10462.000000, 8588.000000, 85.000000, 3840.000000, 154.000000, 4853.000000, 9810.000000, 2498.000000, 6289.000000, 11201.000000, 10788.000000, 1348.000000, 4887.000000, 9929.000000, 6350.000000, 11349.000000, 9022.000000, 8339.000000, 1628.000000, 6696.000000, 7021.000000, 7449.000000, 11889.000000, 6671.000000, 6476.000000,
8912.000000, 5472.000000, 9103.000000, 11621.000000, 4985.000000, 11799.000000, 7779.000000, 6236.000000, 4880.000000, 3469.000000, 2493.000000, 455.000000, 8968.000000, 7869.000000, 9871.000000, 3795.000000, 10502.000000, 24.000000, 9231.000000, 1668.000000, 10999.000000, 5937.000000, 10579.000000, 6780.000000, 1407.000000, 149.000000, 922.000000, 884.000000, 5092.000000, 7485.000000,
10910.000000, 3231.000000, 9806.000000, 9181.000000, 4821.000000, 7829.000000, 10197.000000, 9857.000000, 1682.000000, 5559.000000, 9831.000000, 10176.000000, 3765.000000, 10055.000000, 12080.000000, 5137.000000, 11767.000000, 7822.000000, 2386.000000, 7572.000000, 7172.000000, 2543.000000, 3735.000000, 5842.000000, 9635.000000, 6402.000000, 11416.000000, 8387.000000, 9006.000000, 9905.000000,
6464.000000, 7783.000000, 8087.000000, 469.000000, 5723.000000, 8863.000000, 1320.000000, 4171.000000, 4942.000000, 8036.000000, 7169.000000, 1063.000000, 1414.000000, 4290.000000, 4015.000000, 2886.000000, 5520.000000, 7406.000000, 6283.000000, 1727.000000, 757.000000, 2589.000000, 5012.000000, 10398.000000, 347.000000, 2945.000000, 4993.000000, 3535.000000, 12102.000000, 4117.000000,
10037.000000, 9469.000000, 3593.000000, 607.000000, 6667.000000, 11300.000000, 2911.000000, 5494.000000, 10477.000000, 4953.000000, 5479.000000, 8012.000000, 6745.000000, 4327.000000, 7739.000000, 4946.000000, 1830.000000, 8740.000000, 11249.000000, 10418.000000, 1337.000000, 2159.000000, 6103.000000, 10419.000000, 6852.000000, 10918.000000, 634.000000, 2147.000000, 11027.000000, 115.000000,
11934.000000, 2008.000000, 5283.000000, 9696.000000, 5339.000000, 8111.000000, 10592.000000, 4456.000000, 3920.000000, 11139.000000, 7080.000000, 6830.000000, 275.000000, 11516.000000, 7928.000000, 8530.000000, 7695.000000, 1683.000000, 11501.000000, 5871.000000, 11165.000000, 7100.000000, 810.000000, 7857.000000, 5717.000000, 10166.000000, 9130.000000, 11194.000000, 10671.000000, 536.000000,
737.000000, 12248.000000, 6353.000000, 8544.000000, 3937.000000, 5034.000000, 3917.000000, 8711.000000, 8462.000000, 10378.000000, 3165.000000, 4493.000000, 9024.000000, 2140.000000, 9035.000000, 7460.000000, 4719.000000, 3552.000000, 7015.000000, 4469.000000, 9174.000000, 5994.000000, 9150.000000, 6422.000000, 11130.000000, 3000.000000, 1976.000000, 8802.000000, 2033.000000, 11441.000000,
1864.000000, 8543.000000, 611.000000, 2935.000000, 11438.000000, 2307.000000, 5860.000000, 5554.000000, 741.000000, 6519.000000, 8885.000000, 2954.000000, 5716.000000, 6994.000000, 3536.000000, 7164.000000, 5280.000000, 3461.000000, 6095.000000, 5498.000000, 11397.000000, 11592.000000, 9323.000000, 12119.000000, 5137.000000, 2923.000000, 5547.000000, 9278.000000, 6730.000000, 2513.000000,
8428.000000, 10364.000000, 2322.000000, 12010.000000, 11719.000000, 4476.000000, 8565.000000, 1958.000000, 2343.000000, 2126.000000, 6759.000000, 6207.000000, 8633.000000, 9496.000000, 5827.000000, 5339.000000, 2665.000000, 4457.000000, 12239.000000, 6369.000000, 1174.000000, 6305.000000, 10726.000000, 6062.000000, 1470.000000, 40.000000, 3572.000000, 5825.000000, 9256.000000, 3030.000000,
8189.000000, 4495.000000, 10957.000000, 7556.000000, 10444.000000, 3929.000000, 3336.000000, 7719.000000, 7701.000000, 3920.000000, 3240.000000, 5384.000000, 6158.000000, 10377.000000, 9603.000000, 11575.000000, 11387.000000, 6515.000000, 383.000000, 10946.000000, 10338.000000, 10925.000000, 9516.000000, 2561.000000, 9248.000000, 11489.000000, 5989.000000, 5931.000000, 10860.000000, 5884.000000,
9448.000000, 12029.000000, 4249.000000, 4721.000000, 11411.000000, 6516.000000, 919.000000, 9414.000000, 4021.000000, 2813.000000, 6433.000000, 4060.000000, 6229.000000, 9324.000000, 8396.000000, 3655.000000, 4038.000000, 11401.000000, 11391.000000, 6624.000000, 6965.000000, 1187.000000, 7778.000000, 9525.000000, 5290.000000, 4589.000000, 1770.000000, 9836.000000, 1847.000000, 5239.000000,
11924.000000, 4889.000000, 8212.000000, 1707.000000, 5735.000000, 4974.000000, 2531.000000, 449.000000, 2768.000000, 12064.000000, 9859.000000, 10323.000000, 3459.000000, 4735.000000, 9661.000000, 384.000000, 1189.000000, 7548.000000, 5661.000000, 11844.000000, 9595.000000, 6749.000000, 1936.000000, 6998.000000, 11774.000000, 2877.000000, 3385.000000, 2207.000000, 9872.000000, 4350.000000,
11077.000000, 9953.000000, 455.000000, 2552.000000, 8605.000000, 9946.000000, 6442.000000, 7246.000000, 3157.000000, 10849.000000, 4656.000000, 1667.000000, 9455.000000, 1555.000000, 8596.000000, 5495.000000, 888.000000, 8049.000000, 11028.000000, 3015.000000, 10324.000000, 2961.000000, 2816.000000, 9379.000000, 8914.000000, 5548.000000, 6966.000000, 8344.000000, 8972.000000, 8966.000000,
224.000000, 6524.000000, 7962.000000, 7014.000000, 4269.000000, 11969.000000, 9655.000000, 6309.000000, 11034.000000, 2971.000000, 417.000000, 2194.000000, 9184.000000, 8810.000000, 2677.000000, 763.000000, 7385.000000, 8099.000000, 1985.000000, 11618.000000, 4343.000000, 4646.000000, 4330.000000, 2255.000000, 3333.000000, 4466.000000, 6455.000000, 7587.000000, 7483.000000, 6205.000000,
4553.000000, 5597.000000, 3179.000000, 6977.000000, 6462.000000, 6934.000000, 7464.000000, 11732.000000, 9158.000000, 7192.000000, 4401.000000, 6097.000000, 11916.000000, 640.000000, 9047.000000, 1129.000000, 6235.000000, 7792.000000, 10154.000000, 7615.000000, 11712.000000, 4726.000000, 6950.000000, 4287.000000, 5438.000000, 3839.000000, 3522.000000, 8654.000000, 287.000000, 11696.000000,
6806.000000, 2209.000000, 8790.000000, 8208.000000, 9387.000000, 7654.000000, 10043.000000, 11137.000000, 3879.000000, 11513.000000, 11394.000000, 335.000000, 3681.000000, 5862.000000, 5871.000000, 3232.000000, 91.000000, 6080.000000, 3237.000000, 4310.000000, 6144.000000, 12168.000000, 10215.000000, 8661.000000, 10679.000000, 10909.000000, 2373.000000, 7161.000000, 7496.000000, 11050.000000,
6570.000000, 555.000000, 11779.000000, 1676.000000, 3613.000000, 8205.000000, 7877.000000, 2609.000000, 3911.000000, 11342.000000, 570.000000, 8790.000000, 11693.000000, 6020.000000, 2933.000000, 5761.000000, 7284.000000, 1002.000000, 8389.000000, 8784.000000, 2452.000000, 5762.000000, 3906.000000, 7918.000000, 4778.000000, 461.000000, 7072.000000, 5622.000000, 7193.000000, 11329.000000,
3073.000000, 6858.000000, 3900.000000, 6287.000000, 11292.000000, 11080.000000, 6353.000000, 3629.000000, 8090.000000, 11688.000000, 9714.000000, 7511.000000, 2563.000000, 10715.000000, 2508.000000, 7801.000000, 2557.000000, 916.000000, 1295.000000, 6651.000000, 6418.000000, 10108.000000, 11217.000000, 9338.000000, 6737.000000, 10409.000000, 2959.000000, 1293.000000, 9572.000000, 12032.000000,
10789.000000, 11653.000000, 10462.000000, 7187.000000, 8367.000000, 2531.000000, 12179.000000, 3863.000000, 4057.000000, 9816.000000, 734.000000, 3389.000000, 12096.000000, 7233.000000, 4960.000000, 4570.000000, 2658.000000, 820.000000, 6382.000000, 632.000000, 11023.000000, 7280.000000, 3435.000000, 2482.000000, 1913.000000, 7023.000000, 9533.000000, 10280.000000, 6081.000000, 3646.000000,
12266.000000, 424.000000, 8733.000000, 4725.000000, 1539.000000, 6704.000000, 9764.000000, 6520.000000, 7244.000000, 3443.000000, 10494.000000, 11916.000000, 11944.000000, 3767.000000, 2789.000000, 5669.000000, 9859.000000, 641.000000, 443.000000, 11076.000000, 2536.000000, 3534.000000, 8390.000000, 11788.000000, 7339.000000, 5206.000000, 760.000000, 9294.000000, 9545.000000, 8756.000000,
6034.000000, 9787.000000, 4303.000000, 1043.000000, 5575.000000, 860.000000, 2621.000000, 11280.000000, 12077.000000, 8035.000000, 5223.000000, 4583.000000, 7951.000000, 11222.000000, 10971.000000, 3537.000000, 7731.000000, 8094.000000, 5838.000000, 223.000000, 4275.000000, 9957.000000, 2084.000000, 5955.000000, 4011.000000, 7657.000000, 9173.000000, 3597.000000, 2712.000000, 10725.000000,
10346.000000, 3651.000000, 350.000000, 3169.000000, 11400.000000, 1825.000000, 5049.000000, 7806.000000, 1173.000000, 11542.000000, 8543.000000, 7648.000000, 8199.000000, 4681.000000, 7054.000000, 1808.000000, 2798.000000, 2394.000000, 3944.000000, 5883.000000, 11843.000000, 1753.000000, 10760.000000, 8979.000000, 11827.000000, 6778.000000, 8584.000000, 6868.000000, 4747.000000, 6676.000000,
5529.000000, 4707.000000, 9596.000000, 5927.000000, 11200.000000, 12274.000000, 6497.000000, 7278.000000, 9540.000000, 7538.000000, 2256.000000, 11887.000000, 5972.000000, 11673.000000, 10582.000000, 7963.000000, 9216.000000, 7581.000000, 10778.000000, 10853.000000, 3564.000000, 9854.000000, 10547.000000, 5543.000000, 11609.000000, 3186.000000, 2957.000000, 936.000000, 8315.000000, 4490.000000,
7193.000000, 10426.000000, 6110.000000, 11637.000000, 7138.000000, 8593.000000, 7410.000000, 5410.000000, 3688.000000, 10817.000000, 7093.000000, 1293.000000, 6357.000000, 10232.000000, 10823.000000, 4042.000000, 5633.000000, 1375.000000, 3747.000000, 7271.000000, 4427.000000, 1849.000000, 3352.000000, 318.000000, 3508.000000, 2272.000000, 10129.000000, 10829.000000, 5116.000000, 2567.000000,
1578.000000, 6237.000000, 989.000000, 8531.000000, 469.000000, 6691.000000, 1502.000000, 10305.000000, 7559.000000, 10900.000000, 11630.000000, 4216.000000, 10706.000000, 8369.000000, 3183.000000, 9266.000000, 11177.000000, 2421.000000, 3305.000000, 2495.000000, 10760.000000, 1992.000000, 4494.000000, 3514.000000, 2709.000000, 8561.000000, 1209.000000, 10993.000000, 9179.000000, 10532.000000,
1263.000000, 5516.000000, 11765.000000, 8445.000000, 2693.000000, 1111.000000, 9296.000000, 3460.000000, 7372.000000, 7959.000000, 6955.000000, 12257.000000, 7242.000000, 9983.000000, 2468.000000, 6534.000000, 2259.000000, 9198.000000, 5764.000000, 7337.000000, 5300.000000, 3162.000000, 8472.000000, 4976.000000, 525.000000, 2903.000000, 5240.000000, 3828.000000, 7315.000000, 8395.000000,
22.000000, 6187.000000, 5909.000000, 2705.000000, 2746.000000, 8692.000000, 6759.000000, 911.000000, 9111.000000, 8413.000000, 933.000000, 7938.000000, 8098.000000, 457.000000, 2745.000000, 2143.000000, 3913.000000, 648.000000, 6736.000000, 8181.000000, 5411.000000, 10779.000000, 10705.000000, 6067.000000, 9205.000000, 10743.000000, 10356.000000, 5927.000000, 11019.000000, 9355.000000,
3733.000000, 11668.000000, 4808.000000, 3396.000000, 581.000000, 5516.000000, 3786.000000, 8937.000000, 9592.000000, 10958.000000, 684.000000, 9.000000, 11507.000000, 7949.000000, 825.000000, 992.000000, 2153.000000, 4397.000000, 7207.000000, 2613.000000, 2593.000000, 4230.000000, 3948.000000, 6263.000000, 3018.000000, 5583.000000, 6313.000000, 5092.000000, 5134.000000, 6779.000000,
8149.000000, 9724.000000, 8852.000000, 5238.000000, 4434.000000, 6350.000000, 5796.000000, 1987.000000, 5284.000000, 2095.000000, 11782.000000, 3117.000000, 7591.000000, 11691.000000, 3998.000000, 4838.000000, 298.000000, 4268.000000, 9993.000000, 11225.000000, 11223.000000, 4244.000000, 9010.000000, 1279.000000, 9420.000000, 7818.000000, 7942.000000, 6627.000000, 2509.000000, 2456.000000,
11550.000000, 3197.000000, 4337.000000, 12160.000000, 8541.000000, 8316.000000, 5590.000000, 11202.000000, 9465.000000, 3978.000000, 3672.000000, 2339.000000, 7691.000000, 5771.000000, 8381.000000, 8459.000000, 6209.000000, 1021.000000, 665.000000, 9588.000000, 5900.000000, 5966.000000, 7372.000000, 818.000000, 2956.000000, 6368.000000, 9836.000000, 3991.000000, 8691.000000, 7400.000000,
2830.000000, 5539.000000, 7047.000000, 11858.000000, 10381.000000, 3689.000000, 7071.000000, 3433.000000, 4787.000000, 7316.000000, 11891.000000, 954.000000, 6932.000000, 432.000000, 6332.000000, 5622.000000, 5057.000000, 10670.000000, 690.000000, 4770.000000, 9917.000000, 5953.000000, 8858.000000, 8407.000000, 755.000000, 6660.000000, 753.000000, 6664.000000, 5068.000000, 3375.000000,
1622.000000, 7096.000000, 3763.000000, 5873.000000, 1412.000000, 6214.000000, 10790.000000, 1338.000000, 11117.000000, 9322.000000, 8155.000000, 9179.000000, 8043.000000, 10635.000000, 9787.000000, 12253.000000, 2304.000000, 6153.000000, 384.000000, 7988.000000, 11871.000000, 4125.000000, 6461.000000, 1502.000000, 131.000000, 3969.000000, 10969.000000, 11105.000000, 11258.000000, 6726.000000,
10100.000000, 5872.000000, 8513.000000, 5710.000000, 9680.000000, 1049.000000, 7926.000000, 582.000000, 6033.000000, 886.000000, 5772.000000, 4919.000000, 2867.000000, 6311.000000, 9953.000000, 9354.000000, 6924.000000, 193.000000, 5844.000000, 7729.000000, 5066.000000, 9664.000000, 11580.000000, 5521.000000, 455.000000, 11189.000000, 10801.000000, 1559.000000, 5754.000000, 4.000000,
5265.000000, 915.000000, 5725.000000, 5430.000000, 10918.000000, 5851.000000, 6012.000000, 10330.000000, 2482.000000, 4025.000000, 6231.000000, 7545.000000, 11241.000000, 9675.000000, 1985.000000, 8639.000000, 5134.000000, 4303.000000, 12177.000000, 11175.000000, 7180.000000, 744.000000, 3070.000000, 5719.000000, 6604.000000, 11393.000000, 6518.000000, 2323.000000, 2386.000000, 5602.000000,
3505.000000, 11607.000000, 9690.000000};

static const double FFT_out[] = {73835.09279755657189526,
-16960.29853546927552088, 94553.17015919127152301, 82071.94236073162755929, -88004.66863913185079582, 8300.72078039113694103, -38341.27796110068447888, -38980.27545331198780332, 66294.86149470956297591, 107313.99380018431111239, -51097.25611872477747966, 107002.23844505583110731, -101176.55528033839073032, 151764.44191773579223081, 55989.31636525973590324, 122.30705398861755384, 2878.27077702543465421, 101592.30195218489097897, 97880.81648943608161062, -69110.75254422018770128, 7917.38452911922104249, 12119.48393724660309090, -106107.52924904532846995, 59739.30242627070401795, -72456.89826969381829258, -42974.09814608171291184, -30346.60099528233331512, -36006.54505514366610441, -79691.02256740226584952, -14016.81104602639970835, 16806.67684532898420002,
95742.02690367960894946, 72880.97136974820750766, -49397.86675869173632236, -53326.96602262630040059, -123966.47144981200108305, -5132.72459340597197297, 19686.32353365158996894, 48665.53564532098243944, -10101.52167415057192557, -24702.64340617377820308, -40094.29445880955609027, -13870.63260611699661240, 140267.12083295581396669, -106820.57353050280653406, 133726.94934111856855452, -46704.18045086555503076, 14469.92318501486442983, -99394.44130656791094225, -148414.40390281780855730, -36810.29185404482996091, 12146.24844073335043504, 97082.95701726766128559, 38225.85534318019927014, -29840.97954574082541512, 15863.05982589049381204, -55305.37772377265355317, 155865.89289725926937535, -54426.44240910955704749, -113175.45412842551013455, 18712.31028454464103561,
39832.50241447247390170, 19530.03917202287993859, -12476.62717389168392401, -130030.85746542178094387, -6342.24001512018730864, 50434.48595395436859690, -124369.72824291297001764, 108232.33327744550479110, -43772.89149556042684708, 4369.60266546234925045, 43112.42376901262468891, -9054.54637809899577405, 215095.44625012401957065, 41817.19947380627854727, 23961.02533376042265445, 9187.64305042823252734, 136032.02894146944163367, -46792.21560759702697396, -2624.91564967082740623, 46431.55307781905867159, -226379.03969093161867931, -132083.43530860391911119, 17910.43127065656881314, -33721.59635467609041370, 122394.51448104315204546, 148593.67029705992899835, -8548.84181103062292095, -28146.70273992858710699, -95741.78486191574484110, -95338.88591683097183704,
169616.75557698425836861, 613.72889464726176811, 73014.65897031367057934, -109099.86831017764052376, -15072.91308845349703915, -809.49148658505509957, -9817.19782486524127307, -50480.91575022137112683, -78572.14851577032823116, -96682.72582668950781226, 183494.12919567595236003, -137754.93423101585358381, -43061.88118573155952618, -9863.62918517781508854, 102536.70991776380105875, 42996.22781645908253267, 34171.60067747153516393, 22568.03046041366178542, -108987.33193072187714279, 58321.17460519946325803, 41460.92060022791702067, 18223.49520853795911535, 49813.47552600501512643, 15257.99694273668137612, -133508.78616409914684482, 75090.89451215666485950, -45903.96914593269320903, 6822.80085378332296386, 43681.60798432478622999, -44928.93990436308376957,
-107797.49088813974231016, -10023.51920262122439453, -22405.58741627566632815, 7132.28643703430134337, 118755.03199104634404648, -47939.60567796038230881, 55850.85211841105774511, 102934.07082613158854656, -25763.06708647995401407, 39387.69664979260414839, 89053.54641849399195053, 83627.21123034021002240, 20261.71260962740780087, -105504.82031717838253826, -145072.76390111015643924, 65737.06294060424261261, -30832.14207652145705651, 156470.62648803018964827, -46790.62381029383686837, 31018.97348446337855421, 94683.27456592582166195, -30673.45119045439787442, -14144.97662499570287764, 44850.68561019006301649, 109350.85091907685273327, 115843.60063254478154704, -174470.26264240295859054, 62628.67709203549020458, -94774.68844170674856286, -14977.83518277321127243,
-33605.49682981131627457, -37224.95882627287937794, 107754.73882116073218640, -10664.88282554637044086, 34271.43473518337123096, 150583.37920489002135582, -96449.87077499763108790, 62515.12384612378809834, -151281.30369704481563531, -19550.80314236521371640, -110320.80949123989557847, 31133.23072440285613993, 39481.26851507886749459, -107468.84175944325397722, -93794.81810440041590482, 46622.68596205220092088, -9749.23743035804363899, 93325.07672514501609839, -61916.68874402510118671, 84911.20614856964675710, -9219.92310374969383702, 11022.83745615159932640, 22819.68409509929551859, -42123.15600147088116501, 76852.94033134808705654, -113766.65044313488760963, 52607.34037697048188420, 104542.27925170346861705, -22752.25473262035666266, -11151.51090204596403055,
153587.43716112521360628, 9658.29683320798358181, 53259.66911990347580286, 84512.52232920342066791, 16486.61556412617210299, 43179.33579363180615474, -46251.00963365152711049, 33430.80473309130320558, -10497.05822997417453735, -40227.78993163572158664, -19487.76639099368185271, -33182.27547435550513910, -30931.56739071499760030, 62543.03051025887543801, 79657.94309409781999420, -24600.85813323397451313, 135813.98040910420240834, -73856.60228499044023920, 30636.34414052162901498, -86929.26543795579345897, 2579.45496228192496346, 108372.16284284109133296, 135967.25680637589539401, 68655.05175947266980074, 11001.34624536956107477, -120785.04678029504430015, 19551.89095083034771960, 41676.61968440002237912, -27962.17103962045803200, -80172.18545972497668117,
-61978.45736859520548023, 113937.59019166551297531, 61726.47480209726927569, 69699.14463567100756336, -63777.67928598007711116, -97570.74355754611315206, -24156.10929336055414751, 165819.78439234168035910, -527.67938328675518278, 10509.08561308640855714, 18919.83029651205652044, -23011.51614317747589666, -134213.49098333908477798, -13333.46881153393405839, 5297.80982979673353839, 180169.41056093579391018, 42541.21806720242602751, 6940.76534444785283995, 65386.93479145098535810, 30760.57308152700716164, -122165.18184792714600917, 188496.07971446134615690, -24245.23693058959906921, -132595.81067858336609788, -124331.08111071158782579, -27431.12535750104507315, -33844.76694124010100495, 26706.99814172750848229, 73775.05815240288211498, 31333.23712167965641129,
38437.94665786061523249, 58746.15406237724528182, 17789.38911320881743450, -59938.98594512401905376, -103187.43487484026991297, -134799.16135362049681135, 80040.88352933828718960, -96071.42000866158923600, -24864.85276812039955985, -31562.06308066943165613, -30551.88233516976470128, -45755.34896845353068784, -18752.19153569113768754, -108945.41812379073235206, 44243.90235510610364145, -66490.29050157070741989, 2683.22778952424414456, 165281.76557797289569862, 89040.11173359263921157, -157258.62045169324846938, 67123.62072522898961324, -55955.82426913324161433, -105734.19001086452044547, -18960.62924338199445629, -68090.51840253159753047, 62855.37160220608348027, 77447.74241159326629713, -47944.74994735483778641, 18625.41007765922768158, -94836.78074027533875778,
-32554.08787376293548732, -30756.67745180796555360, -2418.41312216889127740, -102810.80110690134461038, -9558.61723594398790738, 110569.11922447600227315, 6043.53384987596655264, 100876.94626676691405009, 63129.05870708233851474, 41481.50897635405999608, -60761.97223047623992898, -115428.53275883957394399, 56386.53132348766666837, -54972.53955874302482698, 8681.63520220780992531, 98259.45907960948534310, 32740.50752975763680297, -133142.93560949852690101, 2947.66111754335724982, -4999.92929720813663153, 12853.70040648009126016, 26176.44143369385710685, 55574.23473794143501436, -30300.08164247553213499, -39575.10860255554143805, -24212.92667249353326042, -43518.30614722728205379, 162074.42494489287491888, -5231.69593706757586915, 94365.48187024361686781,
53758.73993797116418136, 6618.16107015567104099, 113890.63614275582949631, -218739.74443532846635208, 75773.65053569484734908, -125195.76976532670960296, 92161.76842949791171122, 87491.36115080388844945, 131327.51048436327255331, 10418.81717048957943916, -129883.48602996615227312, 36964.45643423785804771, -86467.46461062834714539, 166069.79386569757480174, 14301.04484070620674174, 22687.21178089987370186, 51819.17287435050820932, 69082.06450487300753593, 150653.83161329981521703, 58610.64656947672483511, -24125.52699412605215912, 21281.35409242108653416, -35183.50923538530332735, -27007.16390842256078031, 57044.54443680004624184, -5954.96082438544908655, 15403.00008421459642705, -134666.34952985442942008, -57305.01226824028708506, 78991.34061864443356171,
-19132.62800374527432723, 84814.33117796857550275, 111953.52831897708529141, -17392.76595870834717061, 98245.11799050950503442, -22323.27059813657615450, -74417.10751127342518885, -62388.52982336072454927, 59826.21142567364586284, -131.00509085586963920, -15336.27721837712306296, -47364.46202197374077514, -38763.98013021519000176, -145827.04854828168754466, -5439.76803198925335892, 62680.70395742959954077, 85259.15578005425049923, -13366.81498591403942555, 86140.70543154240294825, -50129.48728464746818645, 118117.75136855099117383, 82305.39292455483519007, -54290.65741309981967788, 8354.11311117891818867, 984.43732187831938063, -24655.29231983365025371, 106068.50475491286488250, -154942.05644349328940734, -93361.20249783876352012, 8423.83331725847710914,
24213.15082597311265999, 31225.58370586369710509, 42744.59054091598954983, 124425.17082926961302292, -5862.79755264295090456, -114689.32074049169023056, -45403.39124120086489711, 185855.10875915730139241, 41656.55525453590962570, -76213.92514118319377303, -19841.18026730565907201, 161048.91383132853661664, 39625.65193666925188154, 23287.30147315526119201, -70217.23368185394792818, 63450.88279381894244580, -8254.24284251522476552, -74056.79579272709088400, 7384.02627014963945840, -57553.95530618097109254, 29068.37113757776023704, 31530.71739235273344093, -40990.61315631628531264, 36000.88545522540516686, 55967.72072297507838812, 82735.92585656623123214, -54357.78199571737786755, 148647.87869990777107887, -16801.71010240723262541, -17211.13127981293655466,
31306.46552912690094672, -4304.02442280161631061, 130099.41844773179036565, 54522.86907896002230700, 66265.41252604810870253, 169209.71566082254867069, -41833.64621176022774307, 192568.56939909176435322, 111758.77775283080700319, -54461.85221546588581987, 56492.60148342707543634, 6496.43394423459631071, 13633.40855887632642407, 18455.37103733031108277, -18759.53154859301139368, 1225.76904435209871735, -121176.75453775271307677, 9351.60294255946064368, 12957.01226322546426672, -52400.33480782002880005, 42453.25527154331939528, -104602.23945197960711084, -76886.71044773663743399, -14072.00699324622109998, 56868.44777996603806969, -21867.54431591417232994, -3782.27713485204549215, -98270.70986586608341895, -5835.37027774083981058, -41200.87157499594468391,
-28471.90292641291307518, 41709.31669429354951717, 36542.95837027375819162, 74246.24869145033881068, -68188.19504273289931007, 53833.20242238621722208, -124762.57654405868379399, -40035.30130797793390229, -25208.36803193720697891, -127426.85596762385102920, 33546.25106286352820462, 62072.20892944117804291, -13666.37567574569402495, -124094.93032327624678146, 24724.28468704591796268, 68540.68627564192865975, 67900.88167511302162893, 85100.74374841456301510, -62018.58060966039920459, -6944.86986780750885373, 60880.44788719595089788, -65560.25892016052966937, -61633.00502050072827842, -11820.31602497443236643, 28724.60519844196096528, -37580.65348146592441481, -18188.24557883287343429, -161382.58444556099129841, -87043.35364656655292492, -15763.06395731618249556,
17778.50198088463366730, -26825.18535495649848599, 15454.39836536018265178, 85753.25545853181392886, 22040.78999061306967633, 43960.97756810795544880, -86016.75955019306275062, 96367.60176836108439602, 46488.21784524089889601, 52714.92516637131484458, 47398.69449004169291584, 1898.37342676103799022, -36652.73769070001435466, -77790.74642163235694170, -20552.40326528557488928, 32363.05610498414534959, -5862.44142713282417390, -58187.04828144613566110, -87482.04685431791585870, 104917.36976186938409228, 43140.72242415409709793, -34083.21293710619647754, -110374.41729888925328851, -1005.84946928808130906, -50288.90893966470321175, -41363.75295597922377056, 20129.80310023119818652, 123874.65927605643810239, 9648.16549453449260909, 120674.43665591833996587,
-14095.21811648383300053, 239738.85320697299903259, 84537.65065687248716131, 100655.02607776666991413, 60512.59303697356517660, -14411.27933401550399140, 29844.25643820875848178, -37787.99793847754335729, 37353.02743673649820266, -70444.47982443854562007, 131358.91091943354695104, 16443.46837744362710509, -46716.81328724975173827, 25494.31026662555814255, 52718.97872957821527962, -24602.30200670846534194, 54816.66114192449458642, 62405.38615680122893536, 44793.12829482398956316, 151307.75125410442706198, 2151.73896227397199254, 18419.49051000307008508, 11231.34225008018620429, -23079.07062412844970822, 150506.34621674579102546, -18064.27622472119765007, -22052.40842476774196257, -37732.37806054520478938, -23257.54800934647937538, 1439.05693701654672623,
12994.14473309354070807, 4139671.18598237587139010, -30291.58503893576562405, -30213.41574885959562380, -36723.36478686022746842, -67198.03868428536225110, 179832.75637561973417178, -58987.38030096594593488, 3007.66790512755687814, -20789.94467939359310549, 46720.40869352516892832, 110840.88930435091606341, -64537.74522375394008122, -79878.51741117512574419, 41989.17510206277074758, 5209.30878972505524871, -66225.52102788299089298, 153555.78062640744610690, 50878.28310391810373403, 45515.27880535185977351, 199912.59272625943413004, -44213.88919925210939255, 107078.82657969956926536, 208888.05374131721328013, 112965.26164689808501862, 42816.47122502001002431, 35429.65273166721453890, 139954.36805757568799891, 21338.30869752177386545, 6561.53927416632359382,
28799.12246182933449745, -78396.34854178900422994, 32436.94126438992680050, 111760.72895480410079472, 24843.20917293565435102, 74230.51086085636052303, 48753.52703534449392464, 47935.80376272388093639, -82880.35440043803828303, 131472.14542009937576950, -99933.69691788493946660, 50379.77175526329665445, 18571.96088706225054921, 127639.12487851551850326, -85313.33135020159534179, 73650.73367829325434286, -83852.18636709016573150, 105273.61171112341980916, -36453.96603048111137468, 47046.47456623087782646, 41399.82637942050496349, -140688.25022990081924945, 45798.93363599309668643, -22136.03991634430713020, -87025.17423258055350743, -90108.36923967969778460, 30204.06716238575972966, 2390.52212884406617377, -11893.38855411637632642, 143544.02918288379441947,
-16072.29920879221754149, -101044.38305827944714110, 13401.80275828416051809, -111052.28463291346270125, -311691.33463843428762630, 283477.20194290520157665, -21396.18511924777703825, -46683.21525334374746308, -91525.75654238750576042, -184624.79853972472483292, 81301.26756754874077160, -77511.63221219101978932, -69431.65849157627962995, 207624.02253542380640283, -34626.43445201111899223, 55607.04859036779089365, 24133.87257471825796529, 101752.13225122709991410, -131020.06251024594530463, -18557.69606983169796877, 93306.20874595516943373, -19399.23780420349430642, -27450.51116255001761601, -61711.69219669288577279, -27297.56041479306441033, -14888.58673487594569451, -43941.03981814481085166, 18311.75684604047273751, -73845.51389163300336804, -63293.05729831161443144,
-95980.40065126650733873, 90407.91053469982580282, -74100.11015518833301030, 113111.29993227872182615, 8980.58304395541199483, 45258.86367521285865223, 12610.88485844693241233, 33936.66943966539838584, 56707.39942053468985250, 121037.63934728484309744, -14843.42160350755148102, -62954.69339418577146716, 17482.55730812011825037, 40541.24646242008020636, 39746.95510169029876124, 58098.61855626261967700, 29252.99884492655110080, 64069.32600003555126023, 52008.90541759361803997, 67869.29746725178847555, -60862.49659827169671189, -26155.34361124220959027, -64029.49508805527875666, 97989.74105045637406874, 114543.33548604311363306, -35261.90913124951475766, -113768.07409560943779070, -45218.87441783890244551, 45721.33132989300065674, 72719.04107827195548452,
-129550.20355651772115380, 12735.02371273598691914, 67765.59241136863420252, 12935.41371349686232861, 25305.73073584079975262, 20169.94055957303498872, 60442.49271592759760097, 84002.44314617814961821, -346481.95007623871788383, 484762.64456099702510983, -15898.43329846311826259, 97276.94888384801743086, 92365.84473044452897739, -98408.55421709784423001, -59326.37543578923941823, -18644.20248280748637626, -31298.08298995194490999, 33921.35594795018550940, -35895.03065875802712981, -54830.23880340081814211, -72567.47938630032876972, -11289.36467559594893828, -72649.92667701165191829, -82081.64258795115165412, 116447.04510496385046281, 131118.45906320493668318, -54702.74739606383081991, 47607.38468196941539645, -76962.69439553262782283, 206079.71377991582266986,
32348.71484526243875735, 115065.04617123900970910, -45013.61390955954266246, 29442.05332175507646753, 25986.49578636702062795, -39061.33803612114570569, -172157.98731459735427052, -55742.76093315808975603, 4900.92857223630198860, 60019.85659001064777840, -5607.66239068504728493, 22391.53058710704135592, -26917.91999467393543455, 100730.89896537967433687, -102108.45532266252848785, 105509.24665826863201801, -113073.41788067463494372, -123388.98731563420733437, 113271.97339085146086290, 120765.33288251727935858, 82539.43300241499673575, -10908.88374322297750041, -126371.46234013783396222, -104855.94105613612919115, 158481.48098869904060848, 63313.51597225567820715, -16876.80753158104926115, 160194.41909592371666804, -16079.35334321339905728, -94771.01051192061277106,
4866.34510727220185800, 33182.10415147137973690, 91336.95995353252510540, -15237.38576885836664587, -118243.82274257118115202, -77980.04383089409384411, -77120.20924752169230487, 35213.01803496939828619, 53023.62112934765173122, -43578.01366429699555738, 71198.13619493052829057, 11925.58775010148383444, -124514.74757504585431889, 169426.38868267898214981, 71147.63143993401899934, -37044.07784675798029639, 20334.69473416190885473, -6202.37715065776865231, -14164.84351951290591387, 18055.39609642670257017, -61870.20099157573713455, -59203.43643543432699516, 13807.04795236542122439, 142758.12647851099609397, 4045.31949043422355317, -116617.73403935375972651, -159343.86876672468497418, 5299.56880111239297548, -108558.19506326669943519, -33430.13997886832657969,
128939.37145219682133757, 13398.68326825588155771, -83807.19231393848895095, 50587.28096219808503520, -88456.06160356897453312, 32149.01516067911870778, -135309.53838362853275612, 5449.74602701629009971, -5261.17942242291428556, -50221.10484644706593826, -93598.75277908152202144, 27788.39122251459048130, 28793.29572838070453145, 92020.27955433180613909, -180411.34166816959623247, 130893.12058853832422756, -93836.00469108470133506, -8802.38574923046689946, 999.76310896846553078, 145532.26540409802692011, 4471.10315675807942171, 35979.80944458792509977, 120410.32596192367782351, -111526.15056666903547011, 66720.63919661258114502, -42343.50952331954613328, -175668.86247594869928434, 20543.89989302691537887, -45890.58787690405733883, -71086.62677564342448022,
-89581.43426310525683220, 61180.42009663122007623, 83264.56282152340281755, 28503.67672021219186718, -64391.91576111662288895, -125695.92482898684102111, -33216.25485929578280775, -51989.61832427966874093, -226730.22805856051854789, -79489.30318570496456232, -119645.03357261938799638, 53662.23527205130085349, 90295.77541419089538977, -120592.16986660043767188, 160374.72839989676140249, 119964.06719449814409018, -625456.97490668715909123, 799749.64797105221077800, -63273.70330362673848867, 76192.90154132421594113, 11941.04409387248597341, -10045.78871614774107002, -20248.92998066281143110, -107644.95645461758249439, -3408.09674351780267898, -94459.60074517266184557, -99894.08515792728576344, -87849.73906258490751497, 119185.23886783732450567, -28106.39497606373333838,
179818.44198644015705213, 80736.33311420737300068, -46080.77317424263310386, 86540.53624247742118314, 85931.65829286543885246, -62671.03472409825189970, 11083.93275281735986937, 38393.00984582245291676, -24055.92388515977654606, -88823.77595766021113377, -54137.75619859616563190, 118150.17338091961573809, 46689.09903568896697834, 68732.67810136199113913, -243104.80107560372562148, 11327.19173235203925287, 31975.57673530211468460, -92832.37522863138292450, -111311.60417696357762907, 199601.67861636108136736, 46079.75794500342453830, -30317.91463463395484723, -99197.61795696939225309, 102970.87097588325559627, 26603.77253185411973391, 46464.42354194031941006, 18747.15472582758229692, -48694.12234261607954977, 115050.03309268891462125, -87981.39707562493276782,
-127139.57517729492974468, -89611.68348202219931409, 22726.97276586428779410, -113246.34920967300422490, -105149.43424397532362491, 100290.72403402777854353, 35674.66341541310976027, 119748.61750009088427760, -147342.26313585360185243, -142079.34283848694758490, -24206.83951414829061832, 133363.36045648192521185, 14370.97844295404502191, 105318.66556047875201330, 133483.04670800594612956, -99327.10797801656008232, -24671.54857496824115515, 20968.80984865266509587, -56078.89613437599473400, -67976.16460708373051602, -93500.20685371522267815, 73074.16267154112574644, 88272.21852164019946940, -27575.79815184417748242, 80060.93296901250141673, 14425.41729100797965657, -17303.90393722632143181, -89984.14640481500828173, -76699.80304680739936884, -38896.12877150185522623,
-86609.50226486078463495, 30855.34683653258616687, -46633.25271390819398221, 30709.75506461165423389, -48760.58998570838593878, -3406.58201595777063631, -132283.92213673461810686, 23190.73531247848586645, -133471.55109822360100225, 5809.07133345949841896, -30081.81680011779099004, 122395.64992114534834400, 50575.55029359636682784, -75832.70127233550010715, -87031.92263244024070445, 164529.07459796735201962, -16361.81062460920657031, 19937.16287498436577152, 114213.19530521980777849, -4735.21537949405683321, -66191.61660388061136473, -4272.80563307424745290, -78108.41511708119651303, 94680.99579739979526494, -62406.77595237535570050, 192450.87546348958858289, -128327.95310642212280072, 43750.08432913210708648, -205208.78905813477467746, 22773.70871744811302051,
33793.43641663082235027, 49650.14820175067870878, 13896.41685522756597493, 58746.46857680859829998, -69472.77121708287450019, 34048.49928684414771851, -52602.14305767594487406, 70207.24504445660568308, 94716.10779109022405464, -7721.67839287290007633, -36342.58062397962930845, -82102.28071359366003890, 18076.84953687510642339, -14309.91246644698185264, 30436.73830205023477902, -39179.28048746217973530, -42728.68511576455784962, -57273.35221517524769297, -111286.75321169546805322, 71433.88496501433837693, -16820.85279585122407298, 160431.69263361010234803, -35244.86715995501435827, 70385.94227926593157463, -325637.25861247652210295, 390348.26145176414866000, -26469.32624730619136244, 82386.81356869440060109, 50967.16966913404758088, -69489.17387837673595641,
-80846.80448182280815672, 55938.56852167841861956, -129819.06620454424410127, 109630.64525300325476564, -21720.08587684341910062, 33573.98141970732103800, -54966.21527412656723754, -49110.10333561396691948, 98819.61249272088753060, 19660.53638263523316709, -6926.90249555724221864, 70965.82541558802768122, -60632.31379797311092261, 46290.09612847553216852, 5466.73572786980003002, -202250.02429172288975678, -58951.27593820364563726, 9736.35327720309942379, 35307.86174952262081206, 188566.00366045386181213, -62435.23915174676221795, -47571.60614412836730480, -338.77091496047432884, -33522.52602071795263328, -102909.35980781496618874, 13364.39138476990774507, -77605.96494271440315060, -53931.11619772499398096, -46747.10131835898937425, -8824.48416222086234484,
186072.41759538522455841, 35072.99794353003380820, -18997.13611087694880553, 34011.67995725775836036, -85658.40423899790039286, 91787.56038819173409138, -84543.00335119561350439, -76520.02474457380594686, 34565.84258235157903982, 86594.40683460448053665, -129046.01076656099758111, -41711.20016182413382921, 22943.31688183261212544, 9774.04109123999660369, -48782.38944070847355761, 91786.02074257793719880, -55596.11883458348893328, -156440.80758014798630029, -32098.99516101706831250, 46535.71013379150826950, 117213.49001080462767277, -14835.05509203542897012, 63487.10664375136548188, 6337.90606418216157181, -11745.10747059751338384, 88620.92736732176854275, 45236.70487289907759987, 116787.14707773749250919, -238413.04890219372464344, 260649.44827970070764422,
40249.83325725326722022, -152772.61740609339904040, -11824.30840828655345831, 53380.70299306318338495, -55239.21057711525645573, 136209.26267687301151454, 16699.49464690499007702, -615.99749569231062196, 156625.17901803308632225, -110887.47986122652946506, -6999.42825140859349631, 44343.37432739372889046, -53151.79241774101683404, 147193.86561689950758591, -23557.41556610124825966, -57910.56164762447588146, -64429.56823372033250052, 38604.90540974594478030, 18387.55841342618805356, 64033.11983632399642374, 13951.36913923149040784, 13286.76814559462945908, -139312.67984463399625383, -59885.60780949714535382, 3156.54550404672045261, 5071.83098305878957035, -119879.62364139466080815, 37422.07020193035714328, 120471.04978111226228066, -42712.92922067200561287,
-159075.57312105878372677, 37450.04635567845980404, -10996.41597235561494017, -51495.77378958264307585, -111817.35438732158218045, 113162.19309883122332394, -28282.36336538873729296, 80116.96271347980655264, -104308.65674434894754086, 51551.62964549169555539, 138542.81342443163157441, 2362.40293180459411815, 39636.66202647220052313, 128529.58266507538792212, -150213.09417594602564350, 1285.02632865518535255, 93464.39379180650576018, 33524.87206935969152255, -57032.54839151562919142, 48181.64639431597606745, -147292.47025012399535626, 97034.14600735486601479, -4232.45857888670434477, -65829.64146201827679761, -158601.82587503976537846, 107207.26035297117778100, 76046.68013454481842928, 72220.48534353350987658, 10611.60348397046618629, 65780.66692627179145347,
-72158.97469416672538500, 38303.67460635968018323, -1298519.35143863083794713,};


int8_t G_nist[] = {17, -40, 7, -14, -13, 33, 20, -46, 3, 4, -16, -4, 23, -76, -43, 14, -44, 7, -37, 9, 14, -16, -29, 1, -25, 55, -19, -14, -19, -9, 13,
-10, -13, -39, -2, -11, 15, -12, 37, -32, 0, 2, -2, 2, -8, 14, 11, 34, 6, 1, 39, -12, -14, 1, 21, 16, 15, -9, -29, 51, 2,
-13, -14, 28, 14, 36, -4, 27, 6, -38, -7, 22, -21, 3, -60, 28, 9, 19, -9, -12, -18, 39, 24, 48, 13, 66, 34, 8, 21, 13, 29,
21, -32, 10, -15, 54, 6, 17, 4, 12, -23, 21, 10, -19, -30, 12, -11, 15, 24, 0, -7, 11, -28, -6, -25, 42, 43, 27, -14, -11, 23,
-15, 1, -5, 17, -65, 15, 11, -2, 17, 30, -13, 14, 12, 19, 20, -15, -1, 17, -21, 19, -28, 14, 2, 0, 10, 12, -8, -45, 2, -55,
23, -33, 21, 14, -31, -14, 9, 48, -29, 22, 53, -36, -13, -15, -19, 78, -8, -3, 6, -24, 0, -10, -20, 10, -2, -3, 16, 25, -14, 6,
-12, -2, 16, -26, -14, -13, 32, -7, 39, 7, -34, -6, 15, -12, -10, 10, -19, 8, 38, -18, -3, -2, -11, -14, -25, 11, 11, -16, 7, 22,
-20, -35, 25, -41, -9, -28, -25, 65, -7, -4, -7, 21, -9, -4, 11, -28, 9, 48, 23, 10, -12, 7, -38, -22, -8, 25, -12, -34, -4, -18,
24, -18, -50, 4, 52, 39, -4, 38, -18, 17, -21, 0, 5, 21, 15, -22, 0, -8, 16, 7, -40, -10, 26, -4, -18, -7, 32, 17, -13, -18,
-4, -30, 17, -9, 48, 48, -9, 6, 15, 18, 7, -14, -24, 18, 66, -10, -63, 35, -16, 0, 4, 0, -32, -9, -7, -20, -39, -50, 41, 18,
-33, 6, -11, 0, 9, 35, -2, 59, -20, 10, 10, -12, -23, -17, 3, -27, -91, -5, 52, 51, -12, 14, 22, -33, 58, -5, 52, 7, -33, -9,
-12, 20, -16, 11, -32, 44, -33, -18, 12, 34, -3, 17, 5, -38, -35, 4, -21, -8, -4, -23, -38, 22, -39, -52, 18, 22, -8, 3, -48, -24,
29, 1, -4, 1, -22, 6, 4, 10, -79, -27, -16, -21, -59, 61, -14, -27, 27, 25, 27, 18, 35, -51, 43, -4, -32, 35, 21, -44, -10, 18,
-2, 14, 26, -8, -47, -37, -9, -14, 32, 15, 36, 39, 51, -1, -9, -35, 0, -13, 39, -39, -18, 5, 46, 14, 23, -24, 3, 83, -36, -2,
18, 51, 15, 26, -32, 22, -5, -10, -14, 8, 9, -22, 11, -40, 57, -60, -8, 26, -3, -27, -7, 14, -13, -1, 2, 23, 29, 7, 40, 37,
-7, -18, -18, 11, 11, 20, 1, -70, -25, -25, 13, 9, 11, 1, 27, 29, 18, 28, -3, 41, -49, -34, 43, 46, -11, 15, -14, 6, 36, 15,
7, 17, -14, -16, 9, -37, -17, -41, -28, -23, -17, -4, -1, 36, -28, -22, -33, -11, 31, -11, -16, 29, -23, 10, -13, 5, -34, 26, -41, -21,
-1, -41, 4, 47, 3, 17, 6, -45, -20, -11, 37, -35, 23, -11, 12, 59, -9, 11, 9, 29, -54, 19, -57, -23, 25, 33, 33, 31, 18, -24,
7, 20, -6, 37, 63, -24, -22, -6, 20, -41, 23, -9, -37, 16, 3, 67, -7, 56, 7, -5, 4, -9, 58, 20, -5, 1, -1, 3, 43, -20,
-27, 22, 10, -17, 23, -36, 65, 28, -12, 16, 18, -28, -13, 9, 26, 27, 1, 22, -3, -26, 23, -4, -22, 15, -15, 31, 11, -50, -34, 21,
-22, -5, 55, -35, -37, 22, 30, -12, 12, -40, 13, 14, -14, 1, 22, -2, -27, 32, 42, -38, -27, 0, 7, -20, -41, -32, 4, 19, -21, -18,
14, -18, 4, -1, 14, 23, 19, -3, -1, 45, 9, -11, -47, 1, -34, -5, -43, -1, -1, -25, -5, -16, 33, -13, -10, 6, -23, 10, 67, 11,
-20, -19, 14, -21, 13, -19, 44, 9, -25, -8, 32, 14, 0, 13, -8, -34, -57, -6, 15, 1, -19, 47, -35, 23, 21, 15, 7, 37, 14, 46,
-14, 5, 9, 9, -33, 19, -2, -5, 20, -37, 0, 9, -53, -18, 30, -21, 8, -33, 12, 19, -15, -16, -2, -10, 5, -36, 13, 39, 74, 24,
-4, -40, 8, -27, 26, 23, 3, 17, 5, -23, -20, -24, -9, 22, -28, 53, -20, -5, 11, 32, 23, 6, 20, -6, 16, 21, -8, -16, -7, -50,
4, 19, -13, -16, 8, 7, 19, 50, -15, -17, 18, 29, -10, 35, 20, 27, 7, -7, 27, -22, 35, 19, -56, -30, 15, 16, -3, 47, -19, -1,
71, 12, 21, -28, 36, 3, 6, 16, 48, -29, -38, -2, -24, -46, -7, -27, 31, 20, -19, -25, -13, -54, 15, 18, -17, 30, 33, -42, -28, 7,
13, 29, -68, 38, 0, -3, 34, -9, -1, -42, -16, 13, -27, 20, -6, -36, -36, -4, -59, -12, 6, 41, 23, -20, 26, -62, -1, 61, -26, -58,
82, -34, 23, 46, 8, -58, 42, -21, -41, -38, -70, -9, 34, 19, -21, 2, 13, -39, -21, 17, -3, 42, 10, 34, -53, 35, -36, -12, -29, 25,
9, -30, 24, -30, 8, 10, -34, 28, 12, -19, 12, 24, 18, -35, -10, -10, 6, 34, 20, -35, 20, -3, -12, 36, 11, -24, 33, -37, 10, 39,
21, 25, -14, -7, 58, -11, 48, 69, -1, 18, -25, -7, 14, 61, -13, 32, 52, 15, 5, -2, -10, -30, -33, 19, 24, 70, 12, -14, -28, 4,
1, -45, -30, -2, 15, 27, -11, 6, 8, -4, -46, 19, 13, 39, -13, -13, -9, -11, 4, -27, -23, -32, -15, 10, 2, 49, 77, -36, -6, 22,
8, -27, 5, -11, 8, 0, -7, 11, 42, 3, 24, -14, 7, 5, -7, -7, 40, 52, -32, 30, 40, -37, -8, -24, 11, -10, -12, -25, -17, 50,
21, -15, -68, 1, 0, 18, -39, -7, -3, 38, -7, -33, -5, -20, 20, 4, -2, -10, 46, -43, -26, 2, 12, -9, 25, 29, 5, 23, 11, 4,
15, -25, -12};

int8_t F_nist[] = {7, 11, -17, -28, 2, -1, 28, 3, -4, 5, 19, -20, -3, -28, 25, 15, -2, -43, 21, 9, 6, -35, 6, -44, -18, -34, -40, -20, 10, -56, -10,
-28, 24, 13, -29, 8, -40, 19, -2, 36, 1, -4, 20, 39, -22, 6, 5, -22, 44, 8, -24, 5, -56, -49, 19, 25, -4, 7, -56, -23, 9,
-5, -10, 9, -16, 6, -1, 11, 25, 14, 12, -5, 12, -13, 5, 23, 7, -25, -3, -2, 43, 18, 0, -2, 28, 12, -9, 10, -44, 36, 18,
-34, -3, -10, 2, 70, 39, -20, 4, -10, 29, 27, -24, 28, -6, 50, -1, -31, -22, 15, 36, -17, 6, -7, -12, 34, -14, -4, 6, -14, 19,
-9, -20, 42, -22, 3, -1, 20, 13, 13, 23, -18, 2, 62, 7, 40, 8, -57, 19, 12, -11, -49, 5, 55, 11, 48, -46, -18, 2, -36, 28,
65, -18, -64, -32, -5, -2, 17, 31, -12, -62, 28, -12, -47, -5, 11, -36, 43, -3, 30, 19, 21, -45, 1, -64, 20, -27, 18, 6, 8, 36,
14, 15, 6, -31, 50, -53, -27, 51, -46, 0, 0, 27, 3, 45, -61, 34, -4, 17, -47, -12, -40, 25, 9, 17, 4, 4, -7, 16, 14, -13,
14, -21, 35, -20, 32, -23, 15, -7, -38, -40, 20, 37, -16, -42, -1, -18, 22, -15, 40, 24, 58, -19, 13, -86, 16, -25, -19, 14, 37, 20,
-16, -35, -6, -56, 28, 22, -27, 5, -3, -10, -33, 35, 26, 25, 3, 9, -23, 37, -11, 4, -15, -21, 2, -41, -23, -25, 31, 34, -4, 3,
-20, 22, 39, -6, -67, 3, 13, 36, -5, 33, -3, -25, -12, 26, -48, 7, -9, 67, -14, -10, 27, 33, 9, 35, 0, -31, -2, 19, -5, -53,
6, -29, -29, 14, 2, 16, -15, 10, -21, 30, -16, 16, -26, 35, 50, -22, -4, 17, -11, -56, 4, -12, -4, 21, 26, -19, 31, -23, -3, -22,
28, 8, 10, 4, 45, -15, -71, -34, 10, -15, 22, -1, 1, -19, 25, -48, -35, -4, -3, 2, 27, 37, 30, 9, 36, -17, -29, 8, 20, -56,
-24, -10, -9, -35, -48, -25, -19, 46, 16, 6, -27, -16, 4, 4, -7, 21, 1, 25, -1, -24, 23, -15, -64, -23, -34, 16, 19, 8, -44, -1,
-1, -36, -11, 14, -29, -15, -5, -18, -12, -7, 17, 28, 39, -30, 10, 29, -33, -34, 9, -29, 63, -25, -36, 29, 51, -9, 0, -22, -4, -12,
-10, 6, 17, 12, 25, -4, 54, 8, 1, -10, 47, 22, -17, 17, -28, 30, 22, 32, 34, 7, 29, -16, 18, 10, -5, -2, 15, 70, -4, -15,
29, 37, -29, 32, 30, -13, 11, -24, -21, -17, 16, -44, -21, 25, 24, 31, -18, -28, -44, 0, -29, 40, 10, 31, -49, -37, -4, -17, 24, -13,
-9, 9, -22, 4, -44, -7, -2, 4, 26, 10, -6, 11, -8, -43, -31, -52, 11, 19, 20, 26, -11, -13, -16, 22, -14, -5, 32, 0, -10, -16,
-14, 7, 15, -59, -20, -6, -51, -9, -21, -19, -15, -23, -24, 29, 23, -5, 43, -4, 14, -20, -37, -18, 14, 6, 15, -9, 16, -5, -28, -26,
-38, 40, 38, 28, -13, -15, 3, 26, 24, 10, 22, 13, 1, 35, -11, -2, -66, 21, -17, 51, -7, 24, -21, 7, -1, -31, 21, 35, 30, -52,
-20, 31, 10, 8, 57, 19, -8, -12, 19, -10, 13, -16, -31, -15, -4, -9, 19, -1, 30, -30, 24, -5, 8, 27, 26, 7, 7, -22, 9, -5,
8, 20, 31, -59, -6, 18, 35, -5, -25, -10, -42, 28, -4, 45, 36, -16, -16, -35, 39, -18, -34, 20, 28, 16, -1, -9, -3, 72, -29, -18,
22, 17, -28, -9, -36, 37, 47, -9, -3, 17, -52, -5, -17, -2, -23, -1, -54, 3, -16, -15, 8, -13, -15, 13, 4, -48, 31, -36, 18, 5,
29, -33, -42, 28, -53, -33, -1, -17, -29, -12, 49, 35, -21, -45, -1, 2, 67, 0, -30, -49, 12, 6, -31, 18, 58, 25, 6, -37, 32, 4,
15, 47, -24, 48, -11, -19, 14, 65, -12, 2, 46, -5, -30, 34, -15, -5, -52, 33, 20, 20, -27, 2, -28, 17, -57, -21, 25, 56, 4, -25,
-40, 17, -50, 30, 14, -9, 1, 22, -15, -14, -21, 95, 3, -19, -4, 3, 13, 40, 6, 30, 22, 5, -28, -16, -7, -10, 30, -11, -20, -12,
-12, 20, -25, 12, 10, 34, -10, -67, -10, 46, 25, 3, 7, -4, 15, -5, 20, 16, 31, -13, 5, 12, 69, -21, -60, 4, 8, -10, -11, 23,
17, 2, 16, -59, 23, 0, -7, -35, -29, 25, 12, -8, -18, 30, -54, 28, -29, -36, 62, -24, 22, -5, 1, 37, 12, 1, -21, 18, -2, 1,
-13, -23, 23, -1, 9, 7, -53, -48, 12, 3, 18, 39, -37, 31, -45, -34, 4, 25, -3, 41, 19, 5, -64, -14, 15, 15, 15, -11, -12, -18,
-9, 44, -17, 21, -25, -44, -41, 28, 59, -51, 13, -18, 5, -1, 11, -48, 46, -46, -29, -31, 37, -9, -13, -1, 29, -28, -19, -23, 43, -18,
-22, 19, 4, -29, -3, -2, 5, -50, -39, -10, -3, 28, -8, 22, -18, 42, -29, 20, -13, 15, 4, 32, -27, 20, 33, -21, -36, -10, -15, -25,
7, 43, -9, 57, -29, 12, 25, -37, 0, 52, 38, -11, -25, -31, -31, 4, 23, -10, -35, -9, 13, -11, -15, 13, 9, -5, 45, 43, -24, 33,
25, 31, 12, -8, -8, 49, -2, 11, 32, 4, -18, -8, 46, 71, 32, -4, 4, -4, -19, 12, -21, 24, 41, -48, -16, 20, -8, 8, -22, -41,
45, -11, -23, 66, 19, 23, 25, -63, -15, -27, -27, -22, -3, 27, -25, -44, 27, -46, -38, -24, -20, -2, 18, -40, 47, 8, -44, 20, 15, 21,
16, -2, -55, 0, -20, -56, 0, 23, -23, 33, -70, 7, -23, -17, 10, 21, -12, 12, -54, -46, -19, 23, 25, 38, -61, -7, 18, -19, 10, 12,
5, -15, 17};

int8_t g_nist[] = {2, 2, -3, -4, 2, -2, 1, -1, 0, 1, 1, -2, 1, -2, 0, -2, 4, 6, -1, 0, -1, 0, 4, 1, -3, 0, 6, -1, 2, 1, 6,
-3, 3, 2, 5, 0, 0, 1, 1, -2, -3, 0, 0, 1, 4, 0, -6, 5, 1, 1, 2, 1, -2, 2, -3, -3, -1, 1, 0, 0, 1,
-1, -1, -1, 0, -1, 5, 1, 1, -4, -3, -3, -2, 2, -3, -2, 5, 1, 1, 2, 1, 1, 1, -1, -4, 0, 2, 2, 0, -3, 6,
-4, -1, 0, -1, 3, -2, 3, -1, -5, 6, 2, -2, 2, 2, -7, 0, 3, -1, 1, 0, 3, -1, -2, 3, 2, 2, 0, -8, -1, 1,
1, 2, 4, 3, 5, 1, 0, -3, 3, 3, 1, 3, 3, 0, 0, -3, -1, -4, -7, 1, -2, 2, -5, 0, -3, 0, 0, 2, -2, 3,
0, 1, -1, -1, 0, 1, -1, 0, 2, -3, -5, 3, -1, 0, 1, 0, -3, 1, 3, -2, 5, 2, -6, 1, 1, -2, 2, 4, 5, 4,
-1, 4, 1, 1, 8, -5, 0, 5, 4, 1, -1, 2, -1, 3, -1, 8, -5, -9, -1, 1, 0, 7, 0, -1, -2, 4, -3, 4, 1, 3,
4, 2, -3, 0, 0, 2, -2, 0, 5, -1, -3, 3, 2, -2, 2, 1, 0, 1, -4, 0, 0, 0, 0, -1, -2, -1, 1, -2, 2, 0,
0, -2, -3, -2, -1, 1, -3, 1, 1, -4, 4, 2, -1, 1, 2, 1, -3, 0, -4, 0, -8, 4, 5, 0, -2, 4, 4, 2, 2, -1,
-4, 1, 2, -5, -6, 2, 1, -2, 4, 1, 2, 3, -2, 1, 4, 1, 1, 2, -1, 2, 1, 6, -2, -1, 3, -3, -4, 0, 0, -1,
4, -1, 3, -4, -1, -1, 3, 1, 0, -3, -3, 4, 2, 3, -1, 1, 2, 8, 1, -1, -2, 1, 6, 1, -1, 2, 3, 2, 4, 6,
-1, 7, 0, -2, 0, 0, 0, 1, 7, 1, -1, -6, 2, -3, 5, 1, -4, -1, 1, 2, 3, -1, 2, -5, 1, -2, 5, -1, 3, 1,
-3, 2, -2, 1, -2, -7, 0, -2, 0, 2, -2, -3, -4, -3, -1, -4, -2, 5, 6, 0, 2, -1, -2, 6, 5, 0, -2, -2, -1, 0,
0, -5, -3, 0, 0, -7, -2, -2, 1, 1, -6, 3, -1, 5, 2, 5, -1, -4, 4, 5, 1, 6, 2, -2, -2, -3, 4, 2, 3, -1,
0, 0, 1, 1, 0, 0, 0, 1, 2, 0, 6, -4, -2, 7, -3, 0, 2, -1, -1, -1, 1, 1, -1, -1, -4, -1, -1, 1, 0, 4,
2, -1, 1, -4, -1, -2, -3, 0, 6, 2, -1, 3, 1, 0, 7, 2, -5, 2, 1, 1, -1, 0, -2, -2, 1, 1, 2, -2, 3, -1,
5, 5, 0, -1, -3, -3, 5, 6, 1, -4, -2, 9, 1, 1, -1, 2, -2, 6, 1, 1, 2, 1, 5, 1, -3, 1, 8, -2, -2, 4,
-1, 7, -2, 3, 3, -1, 0, 0, 0, 3, 0, -3, 0, 0, -2, 3, -3, -1, 4, -3, -3, 1, 0, -4, 0, 5, 0, 2, 0, 7,
4, 1, 2, 2, -1, -6, 3, 1, 1, 2, -3, 2, -3, 0, 1, 2, 2, -7, 5, -1, 0, -5, 1, -3, 0, -2, 1, 3, 4, -1,
3, -2, 3, 3, -2, -4, 4, 0, 1, 0, -4, 3, -2, -1, 0, 3, 0, -1, 3, -2, 1, 2, 4, 0, 0, -3, -1, 1, -2, 1,
1, 2, -3, -1, 3, -1, 0, 3, 0, -2, 1, -1, -3, -4, -3, 1, 6, 0, -3, -1, -2, 1, -2, 1, 0, -1, -1, -2, -5, 4,
1, -3, 3, -2, -5, 0, 0, 0, 2, 2, 0, -4, 6, -1, 6, -1, 3, 0, 1, 4, 0, 1, 4, 0, -5, -6, -1, 2, 1, 0,
3, -3, 3, 0, 3, 2, 2, 0, 3, 5, -2, 4, -2, -6, -2, 5, -5, -1, 3, -1, 5, 0, 1, 0, 0, 1, -1, -1, 2, 2,
-1, 1, -3, -3, 2, -3, 3, 1, -1, 1, 2, 1, 0, -5, 2, -2, -3, 1, 0, 3, 1, -2, -6, 2, 3, 5, 0, 5, 1, 0,
-1, -2, 3, 2, -6, -6, -1, -3, -1, -4, 3, 1, -4, -1, 2, 1, -1, -3, -1, -1, 0, -2, 2, 5, 2, -6, 1, -4, -3, -3,
1, -1, -5, 2, -1, -2, -1, 7, 1, -3, -1, 0, 0, -1, 1, 1, -4, 0, -4, 3, 5, 3, -7, -1, -2, -1, 3, -4, 3, 0,
-1, 0, 3, 0, 0, 2, 3, 5, 3, -3, 4, 0, 0, 5, -1, 1, 0, -1, 0, -4, -4, 2, 4, 4, -7, -4, -3, 4, 3, 2,
-6, 1, -2, 2, 1, -1, 0, -2, 4, 3, 1, 3, -1, -6, -1, 3, 3, 3, -2, 4, 1, 4, 0, 1, 0, -1, 0, 1, 1, -2,
-3, 2, 2, 1, -1, 1, -4, -3, -6, 2, 0, -2, 4, 6, -6, 2, 3, -3, -3, 4, -3, 3, 1, -1, 0, 0, 0, -6, 0, -2,
2, -2, 2, 6, -2, -2, 2, 0, -2, -1, 0, -1, 8, 2, 1, 2, 0, 1, 1, 1, 4, 1, -2, -2, 0, 2, -2, 2, 2, -3,
0, 7, 2, 4, 5, -2, -1, -1, 6, 3, -1, -2, 3, -1, 0, 0, 6, -1, -3, -2, 0, -7, 3, -2, 1, 6, 1, 1, 0, -4,
-4, 1, 0, 3, -2, 2, 2, 0, 4, 3, -2, 2, 0, -2, -1, -3, 0, 2, 5, -3, -5, 0, -1, -4, 7, -1, 4, 2, -1, -2,
2, 2, -2, 3, -1, -1, -2, 4, 0, 5, 1, 0, 2, 2, 1, 1, 1, 0, -2, 4, 4, 1, -5, 4, -3, -1, -2, -3, 4, 1,
-5, -1, -6, -4, -3, 2, -7, -6, 3, -6, 3, -1, -1, -3, 1, 7, -2, 5, 2, 0, -1, 3, -2, 2, -6, 0, -2, 6, -1, 3,
-1, -1, -3};

int8_t f_nist[] = {-1, 4, 3, 0, -4, 2, -4, 0, -2, 3, 6, -2, -4, 0, -5, -1, 1, 1, 1, 2, 1, 2, -3, 4, 2, -4, -2, -2, 0, -1, 1,
-1, -4, -4, 0, -7, 3, 2, -1, -3, -1, -3, 4, -3, -2, 0, 0, 3, -4, -1, 5, 3, 2, 6, 2, -2, 0, 1, 0, 2, -6,
-1, 3, -1, 0, -4, 3, 5, -3, 0, -4, 4, 4, -1, -2, -1, 2, -4, -2, 5, -3, 8, 5, 0, -2, 4, -2, 2, -4, -2, 3,
-1, 3, -5, 2, 0, 3, -3, -2, 3, -3, 3, -1, -6, 0, 3, 1, 1, 0, -5, 1, -2, -2, -2, 0, 6, 0, -6, -1, 0, 0,
-7, -3, 1, -2, 3, -2, -3, 0, -2, 2, 4, 1, 1, 1, -4, -2, 2, -4, -1, 5, 0, 2, 5, -3, -2, 4, 1, 1, 0, 0,
2, -4, -1, -1, 2, -4, -1, -2, 2, -1, -4, -1, 0, -4, 0, 0, -1, 3, 5, 1, -4, -3, 0, 5, 3, 2, 1, 0, 2, 2,
5, -1, 0, -2, -3, -1, 1, 2, 2, -1, -1, -1, 3, 2, 2, 2, -1, 2, 4, -2, 3, 2, 3, 0, -1, 1, 1, 3, 0, -3,
-5, 1, 1, 5, 4, 2, 0, -1, -2, 0, -3, 3, -4, 1, -2, 0, 0, 4, -4, 3, -5, -1, 0, 3, 5, -2, 0, -1, -2, -6,
-2, 1, 1, -5, -1, -3, 0, -2, -2, 1, 2, 2, 0, -3, 2, -8, -1, -2, 5, 2, -3, -8, 2, 2, -1, -4, 0, -2, 3, -6,
-1, 2, -3, 2, 1, 2, -4, 4, -5, -2, -2, 1, 2, -1, -1, -5, 0, 4, -4, 1, 0, 7, -2, 0, -3, 3, 6, -1, -1, 0,
-1, 2, 2, -1, 6, 0, -2, 0, -1, 1, -5, 6, 3, 3, -1, 0, 2, 1, 0, 1, -3, -4, -1, 2, 5, 3, -1, 6, -1, 2,
1, -4, -2, 0, 3, 0, 2, -3, -2, 3, -1, -4, -2, 2, 2, -1, 0, 0, -6, 0, 0, 5, 6, 0, 0, -1, -3, -1, 0, 4,
-5, -4, 3, 4, 0, 0, 3, 3, -1, -5, 0, -1, -1, -6, -1, 3, 3, 1, -3, -2, 2, 0, 4, -5, 1, 4, -1, -2, 1, 0,
1, -2, 0, 1, 1, -2, -1, 3, 5, 2, -4, -3, -5, 3, -3, -3, -7, 4, 2, -4, -5, -2, 1, 0, 2, -3, -2, -5, -3, 1,
-5, -2, 2, 1, 1, 2, 1, -1, -1, -1, 3, -1, 0, -1, 0, 0, 0, -1, -2, -2, -1, -1, -3, 0, 0, -7, -1, 2, -2, 0,
-2, 2, 2, 0, -1, 2, 0, 1, 3, -2, -4, 2, -4, 3, -1, -1, -7, 7, 1, 0, -3, 5, 3, -6, 3, 5, 0, 3, 2, 4,
3, -3, -6, 1, -1, 3, 0, -1, 3, 3, 0, -3, 1, -8, 5, 3, 1, 1, 2, 0, 3, 3, 2, 3, 1, 0, -4, 0, 2, 0,
-2, 4, -3, -3, -1, -7, -4, -1, -4, 4, -8, -1, 0, -3, -2, 3, -2, -3, 1, 0, 5, -4, -3, 2, -2, 4, 1, 4, 6, 4,
1, 1, 0, -2, -4, -2, 2, 0, -2, 1, 0, 3, 0, -3, -4, -3, 2, 1, -1, 0, -1, -2, -4, 1, -1, 4, -1, -1, -1, 0,
-6, 6, -1, 4, 7, 2, 0, -1, 1, -3, -2, 0, -4, 1, 0, 4, 0, -2, -7, -1, 0, -1, -4, 5, 1, -2, 1, 4, 2, -2,
-5, 1, -2, 1, 4, -2, -4, 3, 1, 1, 2, -1, 1, -5, -3, -4, -2, 4, 1, -6, 2, -1, -2, -1, 2, -2, -3, 5, 2, -1,
-4, 5, 1, 0, 0, 0, -4, 2, 4, 1, -5, 4, -2, 2, 0, -2, 0, -6, -1, 0, -1, 3, -1, -2, -1, 1, 2, -5, -8, -5,
-3, 4, 0, 1, 2, -2, 1, 4, 0, 3, 3, -1, -2, 2, 2, 1, -1, 0, -5, 1, 3, 3, 1, -2, 3, -3, 2, 0, 7, 0,
4, 0, 2, 2, 0, 1, 2, 1, 4, -3, -1, -2, -1, -2, -1, 0, 3, -1, 4, 0, 0, -1, 1, 2, -3, -6, -2, -1, 3, 1,
-5, -4, 2, -1, -6, 1, -1, 2, 0, 0, -3, -3, 1, 1, 1, 6, 0, -1, 0, -3, -1, 3, 1, -4, 3, -1, -5, 0, 1, 1,
1, 3, -1, -1, -4, -2, -1, 2, 0, -3, -5, 1, 1, -1, -2, 2, -8, -1, 0, -1, 0, 1, 1, -3, 4, -1, -3, 0, -2, 1,
3, 1, -6, -3, 0, 0, 0, 3, -7, 1, -3, 4, 5, 0, -2, 4, 1, 0, 4, -7, 0, 1, -6, 2, 1, -1, -1, 0, 2, -2,
4, -2, 1, 0, 4, -3, -1, 0, 5, -1, 1, 7, -1, -5, -2, 3, -1, 2, -3, 0, 6, 2, -3, -2, 3, 0, -4, 3, 0, 0,
4, -2, 3, 0, -1, 4, -2, -2, -2, -1, 5, -2, 0, 1, 1, -1, 2, -1, -3, 4, 5, 1, 0, 3, -2, 1, -1, 1, -2, 0,
-4, 1, -1, 4, -4, 5, 4, 0, -5, -2, 3, -2, -1, -1, 0, 3, -2, 4, -1, -1, 0, -5, 2, -3, 1, 2, -1, -4, 2, -1,
1, 4, -1, -3, -1, -1, -2, -1, 1, 0, -2, -1, -6, 0, 1, 0, -1, 0, 2, -4, 2, 0, 2, 4, 0, 1, -1, 3, -2, -1,
-3, 5, 7, 3, -5, 1, 0, -3, 1, 2, 5, -2, 0, -1, -1, -1, -2, 3, 4, -3, 2, 2, 3, 5, -5, 3, 4, 0, 0, 4,
2, 0, -4, -1, 0, 0, -1, 3, 1, -3, -3, -6, -3, 2, 1, -3, 0, -3, 0, 0, -2, 0, -1, 4, 0, 5, 0, 0, -4, 3,
-1, -6, 0, 1, 1, 1, 0, 3, -6, -1, -1, -2, 3, -1, -2, 3, -2, -3, 1, -6, 4, 7, 0, 0, 0, 1, -7, 1, 0, -5,
3, 3, -2};

uint16_t h_nist[] = {272, 6811, 7421, 2381, 1429, 5736, 708, 11023, 4378, 9810, 7171, 9264, 4180, 7107, 1050, 964, 4040, 2738, 8484, 12277, 8220, 2054, 9192, 1602, 7536, 6925, 529, 4860, 7948, 9237, 4682,
7336, 5173, 3695, 3337, 6927, 1317, 1882, 1297, 10439, 4143, 10628, 2891, 443, 11855, 8704, 2000, 8224, 6708, 1548, 1706, 8089, 10621, 10216, 6656, 3886, 2706, 4046, 9576, 7839, 5570,
8493, 4740, 6946, 11054, 1649, 7149, 11963, 4461, 11489, 131, 10228, 5008, 8961, 220, 5100, 3352, 1373, 4127, 2409, 6167, 6647, 6958, 2863, 700, 11198, 1712, 8010, 2528, 146, 6591,
7914, 702, 11682, 5731, 9066, 4683, 8372, 939, 8485, 3689, 2846, 4404, 5389, 4592, 6445, 9765, 7328, 9031, 10525, 2361, 4956, 7001, 2304, 3633, 8848, 4452, 5968, 9002, 350, 1341,
31, 4774, 9665, 6016, 4384, 4928, 4816, 11996, 6262, 10997, 6796, 7530, 5363, 3064, 1576, 2599, 6982, 6442, 5812, 6034, 5330, 5283, 10896, 7686, 8969, 9123, 6871, 7157, 6202, 8771,
12271, 11169, 8680, 1399, 616, 9531, 1430, 6138, 3896, 9989, 3789, 7660, 8242, 7953, 2848, 2863, 7723, 4441, 11167, 7400, 559, 10265, 447, 8306, 10935, 928, 8710, 5848, 8030, 10226,
4498, 3639, 11000, 745, 3095, 2487, 5388, 6411, 9117, 11112, 5100, 8781, 7833, 3498, 5494, 7167, 8070, 8979, 6493, 11440, 6759, 604, 8796, 4499, 12202, 9080, 1496, 431, 1508, 8158,
5699, 1536, 5165, 6077, 5032, 9119, 8300, 3474, 9624, 7655, 72, 3116, 2278, 9281, 2399, 9806, 2801, 9451, 1353, 7231, 11661, 11685, 8193, 2393, 1311, 9294, 5830, 8134, 10511, 9047,
5403, 10866, 10507, 2142, 10482, 8050, 1088, 9617, 2295, 5828, 11330, 8948, 4082, 9745, 8207, 9582, 7520, 1851, 2809, 6641, 10758, 2702, 6571, 2029, 10202, 1088, 9118, 7399, 9753, 5792,
4421, 10184, 6981, 7229, 11271, 8062, 1413, 5169, 4077, 9244, 9220, 4267, 3326, 5221, 7151, 6704, 11413, 7515, 10377, 3555, 4191, 8119, 10018, 3768, 10081, 9050, 10513, 378, 3172, 9398,
6859, 3092, 9900, 10454, 5987, 4351, 5228, 1185, 2630, 7521, 5307, 4410, 7630, 11465, 2462, 10665, 3909, 2933, 6464, 764, 2401, 7532, 1548, 1401, 7893, 111, 11186, 4775, 202, 9655,
5619, 4669, 9954, 7458, 3568, 11813, 5206, 10129, 11158, 10498, 6875, 2886, 11490, 3618, 7703, 11176, 9522, 8753, 5215, 4654, 705, 2762, 5486, 624, 141, 4439, 2353, 4477, 9091, 4628,
561, 5036, 10013, 9363, 3795, 11581, 7839, 12111, 4363, 3898, 9847, 8916, 1554, 1104, 3810, 5381, 3781, 6807, 3589, 7817, 558, 10707, 160, 2125, 4738, 2973, 9270, 6361, 1139, 1512,
4637, 4799, 4692, 1026, 2713, 7877, 7994, 2659, 7797, 8682, 11721, 238, 9796, 10774, 7876, 655, 6359, 5269, 3258, 5636, 8563, 8254, 5571, 3731, 5396, 11857, 11445, 7401, 4280, 1662,
1794, 10452, 662, 4460, 142, 11299, 7921, 8532, 11888, 7123, 12273, 4594, 5046, 8439, 11709, 6815, 2625, 8431, 4853, 10958, 2317, 5836, 11335, 8239, 8709, 5036, 5405, 1547, 5450, 5129,
5999, 3670, 2460, 6997, 2249, 1453, 3024, 5688, 4450, 4322, 2005, 6929, 8873, 10629, 10942, 2568, 1261, 5766, 8995, 10022, 1426, 6420, 5040, 2820, 7948, 3122, 5996, 2010, 603, 11348,
11917, 4752, 8489, 10700, 4976, 3164, 9266, 2248, 11129, 2585, 9411, 2859, 3341, 10728, 10748, 8690, 138, 2691, 3729, 9488, 9392, 7664, 7919, 5389, 5616, 4052, 2695, 546, 6248, 2519,
7125, 2467, 1339, 2854, 1355, 11994, 8177, 3037, 7441, 3342, 3571, 10684, 4759, 5426, 10082, 2753, 9965, 5841, 5698, 6579, 8209, 10592, 1207, 12167, 1506, 4984, 7703, 1633, 2195, 6822,
6028, 82, 3848, 11449, 8448, 9266, 6488, 5964, 9065, 5803, 6682, 3286, 10073, 991, 11856, 1994, 1247, 6132, 7285, 8083, 2489, 2986, 12147, 8136, 38, 11430, 4945, 3395, 2218, 8964,
1549, 7704, 4885, 75, 1312, 1123, 8830, 10274, 4298, 7632, 8273, 4475, 10020, 4896, 4589, 842, 10703, 9907, 3132, 5760, 7316, 11552, 3261, 2768, 8119, 11584, 6224, 9491, 708, 8770,
2542, 10875, 1635, 10022, 8467, 9949, 5828, 744, 4623, 11114, 4172, 7937, 10098, 10316, 6232, 11146, 6252, 2206, 3665, 2440, 5606, 3158, 4432, 6076, 8178, 8312, 8219, 12101, 2519, 10930,
8850, 7011, 2994, 7334, 10905, 7673, 10143, 6009, 8865, 3643, 8137, 11076, 7945, 10849, 3687, 313, 7343, 4057, 1296, 1083, 5082, 11640, 3331, 5580, 6261, 4351, 3175, 10933, 11654, 11989,
8504, 3099, 7801, 8315, 9414, 7596, 6560, 11055, 6657, 8172, 5121, 4807, 8381, 4911, 6537, 10562, 10704, 4028, 8695, 5997, 8976, 5052, 1984, 5093, 1889, 6645, 2028, 10436, 1105, 7934,
3520, 704, 6393, 1505, 892, 6660, 3697, 5817, 8246, 8477, 5381, 4498, 7775, 9134, 8883, 3568, 10414, 3549, 10063, 1196, 692, 2583, 3229, 1968, 8005, 9914, 2269, 4385, 12080, 10815,
2046, 3926, 9900, 8489, 11696, 5556, 1500, 215, 7708, 11430, 2315, 7476, 1519, 4364, 11748, 5211, 152, 4088, 6501, 10240, 7539, 7967, 7725, 8727, 7485, 6363, 8631, 8803, 2540, 11690,
7847, 10664, 5556, 10339, 4769, 10301, 3207, 8112, 403, 669, 4643, 3490, 10282, 2221, 4263, 6663, 6281, 7223, 8489, 8574, 6264, 6525, 6744, 9779, 5411, 7172, 9174, 3627, 10931, 7690,
7002, 11975, 6796, 2658, 7909, 3243, 9528, 5334, 5947, 137, 2320, 3269, 10197, 1809, 10758, 11704, 6083, 1551, 11430, 5853, 4447, 8599, 5424, 9215, 6358, 9749, 5458, 5949, 11641, 6477,
6527, 5009, 11538, 7067, 5759, 1289, 4511, 1284, 2780, 6742, 2482, 3161, 7439, 8698, 11359, 8057, 3900, 1268, 5302, 4333, 8330, 3254, 6157, 1173, 5758, 10027, 4587, 599, 1220, 11969,
7514, 9927, 11980, 4006, 10964, 1488, 6184, 4220, 7820, 6280, 1041, 7068, 6655, 3357, 3654, 6379, 6808, 7026, 8332, 3392, 5666, 9773, 2187, 10935, 6967, 6260, 9678, 5189, 4011, 6450,
6046, 6131, 6886, 10249, 3831, 10753, 10138, 2309, 6828, 3217, 130, 3213, 9169, 2209, 7635, 3738, 4275, 2068, 5982, 6941, 6789, 11482, 3979, 2041, 7099, 186, 12198, 2353, 8595, 8944,
12160, 6053, 3328, 1706, 10510, 6795, 11912, 5310, 693, 7412, 2386, 4971, 11620, 9422, 8249, 1586, 2016, 3823, 1529, 10509, 2352, 8601, 11907, 3171, 2408, 10770, 1736, 10696, 11027, 9778,
1065, 10848, 6567, 12244, 2391, 3685, 10688, 3834, 11767, 9438, 9695, 10331, 7292, 4394, 3645, 3414, 4106, 8016, 2202, 5964, 187, 6723, 3462, 3309, 3555, 6556, 3475, 7462, 6048, 3111,
8471, 6336, 4892, 11418, 8011, 1982, 7921, 2656, 3087, 4048, 3684, 2289, 5243, 8965, 672, 4947, 5450, 21, 610, 7642, 2163, 5665, 8482, 9028, 1325, 10213, 8360, 7678, 2528, 11805,
10435, 497, 10362, 6670, 5151, 10857, 1841, 1086, 1942, 6957, 5800, 1726, 5321, 8984, 5236, 805, 1337, 9833, 11533, 3780, 11747, 6251, 5943, 6063, 4866, 2928, 11126, 2472, 10346, 6382,
1096, 9503, 2764};
# 9 "/home/ubuntu/FalconHLS/code_hls/tb.c" 2

static void *
xmalloc(size_t len)
{
 void *buf;

 if (len == 0) {
  return ((void*)0);
 }
 buf = malloc(len);
 if (buf == ((void*)0)) {
  fprintf(stderr, "memory allocation error\n");
  exit(1);
 }
 return buf;
}

static void
xfree(void *buf)
{
 if (buf != ((void*)0)) {
  free(buf);
 }
}

static void
check_eq(const void *a, const void *b, size_t len, const char *banner)
{
 size_t u;

 if (memcmp(a, b, len) == 0) {
  return;
 }
 fprintf(stderr, "%s: wrong value:\n", banner);
 fprintf(stderr, "a: ");
 for (u = 0; u < len; u ++) {
  fprintf(stderr, "%02x", ((const unsigned char *)a)[u]);
 }
 fprintf(stderr, "\n");
 fprintf(stderr, "b: ");
 for (u = 0; u < len; u ++) {
  fprintf(stderr, "%02x", ((const unsigned char *)b)[u]);
 }
 fprintf(stderr, "\n");
 exit(1);
}



static void
test_sign_self(const int8_t *f, const int8_t *g,
 const int8_t *F, const int8_t *G, const uint16_t *h_src,
 unsigned logn, uint8_t *tmp)
{
 int i;
 size_t n;
 inner_shake256_context rng;
 char buf[20];
 uint16_t *h, *hm, *hm2;
 int16_t *sig;
 uint8_t *tt;
 fpr *expanded_key;

 n = (size_t)1 << logn;
 h = (uint16_t *)tmp;
 hm = h + n;
 sig = (int16_t *)(hm + n);
 hm2 = (uint16_t *)sig;
 tt = (uint8_t *)(sig + n);
 if (logn == 1) {
  tt += 4;
 }

 memcpy(h, h_src, n * sizeof *h);
 to_ntt_monty(h, logn);


 memcpy(buf, "sign 0", 7);
 buf[5] = '0' + logn;

 i_shake256_init(&rng);
 i_shake256_inject(&rng, (uint8_t *)buf, strlen(buf));
 i_shake256_flip(&rng);
# 125 "/home/ubuntu/FalconHLS/code_hls/tb.c"
 expanded_key = (fpr *)tt;
 tt = (uint8_t *)expanded_key + (8 * logn + 40) * n;
 expand_privkey(expanded_key, f, g, F, G);
# 137 "/home/ubuntu/FalconHLS/code_hls/tb.c"
 for (i = 0; i < 1; i ++) {
  uint8_t msg[50];
  inner_shake256_context sc;


  i_shake256_init(&sc);
  i_shake256_inject(&sc, msg, sizeof msg);
  i_shake256_flip(&sc);

  uint16_t hmtest [1024];
  hash_to_point_vartime(&sc, hm, logn);
  sign_tree(sig, expanded_key, hmtest, msg, seed_nist);

  printf("sig  \n");
  for(int k = 0; k<1024; ++k)
   if(k % 30 == 0)
    printf("%d, \n ", sig[k]);
   else
    printf("%d, ", sig[k]);
  printf("\n \n");

  if (!verify_raw(hmtest, sig, h, logn, tt)) {
   fprintf(stderr, "self signature (dyn) not verified\n");
   exit(1);
  }

  if (i % 10 == 0) {
   printf(".");
   fflush(stdout);
  }
 }

 printf(" ");
 fflush(stdout);
}


#ifndef HLS_FASTSIM
#ifdef __cplusplus
extern "C"
#endif
void apatb_keygen_sw(signed char *, signed char *, signed char *, signed char *, unsigned short *, unsigned char *);
# 173 "/home/ubuntu/FalconHLS/code_hls/tb.c"
void test_keygen_inner(unsigned logn, uint8_t *tmp)
{
 size_t n;
 int8_t *f, *g, *F, *G;
 uint16_t *h, *hm, *h2;
 int16_t *sig, *s1;
 uint8_t *tt;
# 219 "/home/ubuntu/FalconHLS/code_hls/tb.c"
 n = (size_t)1 << logn;
 f = (int8_t *)tmp;
 g = f + n;
 F = g + n;
 G = F + n;
 h = (uint16_t *)(G + n);
 h2 = h + n;
 hm = h2 + n;
 sig = (int16_t *)(hm + n);
 s1 = sig + n;
 tt = (uint8_t *)(s1 + n);
 if (logn == 1) {
   tt += 4;
  }

 uint32_t out_number[100];

    
#ifndef HLS_FASTSIM
#define keygen apatb_keygen_sw
#endif
# 236 "/home/ubuntu/FalconHLS/code_hls/tb.c"
keygen(f, g, F, G, h, seed_nist_key);
#undef keygen
# 236 "/home/ubuntu/FalconHLS/code_hls/tb.c"


 int i = 0;
# 278 "/home/ubuntu/FalconHLS/code_hls/tb.c"
 for(i = 0; i<1024;++i)
  if(f[i] != f_nist[i]){
            printf("%d cal = %d, cor = %d", i, f[i], f_nist[i]);

  }
 printf("f correct \n \n");

 for(i = 0; i<1024;++i)
  if(g[i] != g_nist[i])
            printf("%d cal = %d, cor = %d", i, g[i], g_nist[i]);
 printf("g correct \n \n");

 for(i = 0; i<1024;++i)
  if(G[i] != G_nist[i]){
            printf("%d cal = %d, cor = %d", i, G[i], G_nist[i]);

  }
 printf("G correct \n \n");

 for(i = 0; i<1024;++i)
  if(F[i] != F_nist[i]){
            printf("%d cal = %d, cor = %d", i, F[i], F_nist[i]);

  }
 printf("F correct \n \n");

 for(i = 0; i<1024;++i)
  if(h[i] != h_nist[i]){
            printf("%d cal = %d, cor = %d", i, h[i], h_nist[i]);

  }
 printf("h correct \n \n");





}
#endif
# 315 "/home/ubuntu/FalconHLS/code_hls/tb.c"


static void
test_keygen(void)
{
 uint8_t *tmp;
 size_t tlen;
 unsigned logn;

 printf("Test keygen: ");
 fflush(stdout);
 tlen = 90112;
 tmp = xmalloc(tlen);

  test_keygen_inner(10, tmp);

 xfree(tmp);
 printf("done.\n");
 fflush(stdout);
}


static void
test_sign(void)
{
 uint8_t *tmp;
 size_t tlen;

 printf("Test sign: ");
 fflush(stdout);

 tlen = 178176;
 tmp = xmalloc(tlen);





 test_sign_self(ntru_f_1024, ntru_g_1024, ntru_F_1024, ntru_G_1024,
  ntru_h_1024, 10, tmp);

 xfree(tmp);

 printf("done.\n");
 fflush(stdout);
}

void test_expand_key(void)
{

 fpr expanded_key[15360];
 expand_privkey(expanded_key, ntru_f_1024, ntru_g_1024, ntru_F_1024, ntru_G_1024);
}

void test_FFT(void)
{

 FFT(FFT_in,10);
    for(int i = 0; i<1024;++i)
            if(FFT_in[i] != FFT_out[i])
            printf("%d cal = %lf, cor = %lf ", i, FFT_in[i], FFT_out[i]);
        printf("\n \n");
    printf("Test Finished \n");

}

void test_bug(void)
{
 double in = -1.23;
 double out;
 double out2;

 int32_t out_int;

 bug(&in, &out, &out2, &out_int);

 printf("double in = %lf \n", in);
 printf("double out = %lf \n", out);
 printf("double out2 = %lf \n", out2);

 printf("int out = %d \n", out_int);
}

static void
test_vrfy(void)
{
 uint8_t *tmp;
 size_t tlen;

 printf("Test verify: ");
 fflush(stdout);
 tlen = 8192;
 tmp = xmalloc(tlen);



 test_vrfy_inner(ntru_h_1024, KAT_SIG_1024_sig, KAT_SIG_1024_msg, KAT_SIG_1024_nonce);

 xfree(tmp);
 printf("done.\n");
 fflush(stdout);
}

int
main(void)
{
# 433 "/home/ubuntu/FalconHLS/code_hls/tb.c"
    test_keygen();
# 448 "/home/ubuntu/FalconHLS/code_hls/tb.c"
 return 0;
}
