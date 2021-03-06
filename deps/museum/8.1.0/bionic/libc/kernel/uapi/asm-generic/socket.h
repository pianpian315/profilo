/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __ASM_GENERIC_SOCKET_H
#define __ASM_GENERIC_SOCKET_H
#define _ASM_GENERIC_SOCKET_H
#define _ASM_GENERIC_SOCKET_H_
#define _UAPI_ASM_GENERIC_SOCKET_H
#define _UAPI_ASM_GENERIC_SOCKET_H_
#define NDK_ANDROID_SUPPORT__ASM_GENERIC_SOCKET_H
#define NDK_ANDROID_SUPPORT__ASM_GENERIC_SOCKET_H_
#define NDK_ANDROID_SUPPORT_UAPI__ASM_GENERIC_SOCKET_H
#define NDK_ANDROID_SUPPORT_UAPI__ASM_GENERIC_SOCKET_H_
#define _UAPI__ASM_GENERIC_SOCKET_H
#define _UAPI__ASM_GENERIC_SOCKET_H_
#define __ASM_GENERIC_SOCKET_H_
#include <museum/8.1.0/bionic/libc/asm/sockios.h>
#define SOL_SOCKET 1
#define SO_DEBUG 1
#define SO_REUSEADDR 2
#define SO_TYPE 3
#define SO_ERROR 4
#define SO_DONTROUTE 5
#define SO_BROADCAST 6
#define SO_SNDBUF 7
#define SO_RCVBUF 8
#define SO_SNDBUFFORCE 32
#define SO_RCVBUFFORCE 33
#define SO_KEEPALIVE 9
#define SO_OOBINLINE 10
#define SO_NO_CHECK 11
#define SO_PRIORITY 12
#define SO_LINGER 13
#define SO_BSDCOMPAT 14
#define SO_REUSEPORT 15
#ifndef SO_PASSCRED
#define SO_PASSCRED 16
#define SO_PEERCRED 17
#define SO_RCVLOWAT 18
#define SO_SNDLOWAT 19
#define SO_RCVTIMEO 20
#define SO_SNDTIMEO 21
#endif
#define SO_SECURITY_AUTHENTICATION 22
#define SO_SECURITY_ENCRYPTION_TRANSPORT 23
#define SO_SECURITY_ENCRYPTION_NETWORK 24
#define SO_BINDTODEVICE 25
#define SO_ATTACH_FILTER 26
#define SO_DETACH_FILTER 27
#define SO_GET_FILTER SO_ATTACH_FILTER
#define SO_PEERNAME 28
#define SO_TIMESTAMP 29
#define SCM_TIMESTAMP SO_TIMESTAMP
#define SO_ACCEPTCONN 30
#define SO_PEERSEC 31
#define SO_PASSSEC 34
#define SO_TIMESTAMPNS 35
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define SO_MARK 36
#define SO_TIMESTAMPING 37
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define SO_PROTOCOL 38
#define SO_DOMAIN 39
#define SO_RXQ_OVFL 40
#define SO_WIFI_STATUS 41
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define SO_PEEK_OFF 42
#define SO_NOFCS 43
#define SO_LOCK_FILTER 44
#define SO_SELECT_ERR_QUEUE 45
#define SO_BUSY_POLL 46
#define SO_MAX_PACING_RATE 47
#define SO_BPF_EXTENSIONS 48
#define SO_INCOMING_CPU 49
#define SO_ATTACH_BPF 50
#define SO_DETACH_BPF SO_DETACH_FILTER
#define SO_ATTACH_REUSEPORT_CBPF 51
#define SO_ATTACH_REUSEPORT_EBPF 52
#define SO_CNX_ADVICE 53
#define SCM_TIMESTAMPING_OPT_STATS 54
#endif
