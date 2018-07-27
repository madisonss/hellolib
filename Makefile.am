# hellolib makefile
#
# Copyright (c) 2018 Verizon Communications, Inc.
#

ACLOCAL_AMFLAGS = -I m4

prefix = /usr
includedir = $(prefix)/include
helloincdir = $(includedir)/hello

lib_LTLIBRARIES = libhello.la
libhello_la_SOURCES = libhello.c
libhello_la_LDFLAGS = -version-info 1:1:1
helloinc_HEADERS = hello.h
