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
#ifndef _LINUX_QRTR_H
#define _LINUX_QRTR_H
#define LINUX_QRTR_H
#define LINUX_QRTR_H_
#define _UAPI_LINUX_QRTR_H
#define _UAPI_LINUX_QRTR_H_
#define _LINUX_QRTR_H_
#include <museum/8.0.0/bionic/libc/linux/socket.h>
struct sockaddr_qrtr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __kernel_sa_family_t sq_family;
  __u32 sq_node;
  __u32 sq_port;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
