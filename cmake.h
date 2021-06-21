/* cmake.h.in. Creates cmake.h during a cmake run */

/* Product identification */
#define PRODUCT_TASKWARRIOR 1

/* Package information */
#define PACKAGE           "task"
#define VERSION           "2.5.1"
#define PACKAGE_BUGREPORT "support@taskwarrior.org"
#define PACKAGE_NAME      "task"
#define PACKAGE_TARNAME   "task"
#define PACKAGE_VERSION   "2.5.1"
#define PACKAGE_STRING    "task 2.5.1"

#define CMAKE_BUILD_TYPE  ""

/* Installation details */
#define TASK_RCDIR "/usr/local/share/doc/task/rc"

/* Localization */
#define PACKAGE_LANGUAGE 1
#define LANGUAGE_ENG_USA 1
#define LANGUAGE_ESP_ESP 2
#define LANGUAGE_FRA_FRA 4
#define LANGUAGE_DEU_DEU 3
#define LANGUAGE_ITA_ITA 5
#define LANGUAGE_POR_PRT 6
#define LANGUAGE_EPO_RUS 7
#define LANGUAGE_POL_POL 8
#define LANGUAGE_JPN_JPN 9

/* git information */
#define HAVE_COMMIT

/* cmake information */
#define HAVE_CMAKE
#define CMAKE_VERSION "3.4.3"

/* Compiling platform */
/* #undef LINUX */
#define DARWIN
/* #undef CYGWIN */
/* #undef FREEBSD */
/* #undef OPENBSD */
/* #undef NETBSD */
/* #undef HAIKU */
/* #undef SOLARIS */
/* #undef KFREEBSD */
/* #undef GNUHURD */
/* #undef UNKNOWN */

/* Found the GnuTLS library */
#define HAVE_LIBGNUTLS

/* Found tm_gmtoff */
#define HAVE_TM_GMTOFF

/* Found timegm */
#define HAVE_TIMEGM

/* Found st.st_birthtime struct member */
#define HAVE_ST_BIRTHTIME

/* Found get_current_dir_name */
/* #undef HAVE_GET_CURRENT_DIR_NAME */

/* Found uuid_unparse_lower in the uuid library */
#define HAVE_UUID_UNPARSE_LOWER

/* Found wordexp.h */
#define HAVE_WORDEXP

/* Undefine this to eliminate the execute command */
#define HAVE_EXECUTE 1

