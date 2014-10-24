/* src/xconfig.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#undef HAVE_LIBCRYPTO

/* Define to 1 to enable mysql */
#undef HAVE_LIBMYSQLCLIENT

/* Define to 1 to enable postgresql */
#undef HAVE_LIBPQ

/* Define to 1 if you have the <libpq-fe.h> header file. */
#undef HAVE_LIBPQ_FE_H

/* Define to 1 to enable sqlite3 */
#undef HAVE_LIBSQLITE3

/* Define to 1 if you have the `ssl' library (-lssl). */
#undef HAVE_LIBSSL

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <mysql.h> header file. */
#undef HAVE_MYSQL_H

/* Define to 1 to enable oracle */
#undef HAVE_ORACLE

/* Define to 1 to enable ms Sql Server */
#undef HAVE_SQLSERVER

/* sqlite3_errstr */
#undef HAVE_SQLITE3_ERRSTR

/* sqlite3_soft_heap_limit */
#undef HAVE_SQLITE3_SOFT_HEAP_LIMIT

/* sqlite3_soft_heap_limit64 */
#undef HAVE_SQLITE3_SOFT_HEAP_LIMIT64

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
#undef HAVE_STRUCT_TM_TM_GMTOFF

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the `timegm' function. */
#undef HAVE_TIMEGM

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to 1 to package protect (hide) non-api objects */
#undef PACKAGE_PROTECTED

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Version number of package */
#undef VERSION

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#undef YYTEXT_POINTER

/* Define to 1 to hide objects for linking with zild */
#undef ZILD_PACKAGE_PROTECTED

/* Define to empty if `const' does not conform to ANSI C. */
#undef const
