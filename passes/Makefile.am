
pass_libdir=$(libdir)/wldbg
pass_lib_LTLIBRARIES = dump.la example.la

AM_CPPFLAGS =  -I$(top_srcdir) -I$(top_srcdir)/src

dump_la_LDFLAGS = -module -avoid-version
dump_la_SOURCES = dump.c

example_la_LDFLAGS = -module -avoid-version
example_la_SOURCES = example.c
