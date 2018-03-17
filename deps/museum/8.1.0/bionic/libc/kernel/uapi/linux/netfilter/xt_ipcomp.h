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
#ifndef _XT_IPCOMP_H
#define _XT_IPCOMP_H
#define XT_IPCOMP_H
#define XT_IPCOMP_H_
#define NDK_ANDROID_SUPPORT_XT_IPCOMP_H
#define NDK_ANDROID_SUPPORT_XT_IPCOMP_H_
#define NDK_ANDROID_SUPPORT_UAPI_XT_IPCOMP_H
#define NDK_ANDROID_SUPPORT_UAPI_XT_IPCOMP_H_
#define _UAPI_XT_IPCOMP_H
#define _UAPI_XT_IPCOMP_H_
#define _XT_IPCOMP_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
struct xt_ipcomp {
  __u32 spis[2];
  __u8 invflags;
  __u8 hdrres;
};
#define XT_IPCOMP_INV_SPI 0x01
#define XT_IPCOMP_INV_MASK 0x01
#endif