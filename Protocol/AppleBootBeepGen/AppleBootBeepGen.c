/** @file
  Copyright (C) 2005 - 2015 Apple Inc.  All rights reserved.<BR>

  This program and the accompanying materials have not been licensed.
  Neither is its usage, its redistribution, in source or binary form,
  licensed, nor implicitely or explicitely permitted, except when
  required by applicable law.

  Unless required by applicable law or agreed to in writing, software
  distributed is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
  OR CONDITIONS OF ANY KIND, either express or implied.
**/

#include <AppleEfi.h>

#include <Protocol/AppleBootBeepGen.h>

// gAppleBootBeepGenProtocolGuid
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gAppleBootBeepGenProtocolGuid = APPLE_BOOT_BEEP_GEN_PROTOCOL_GUID;

EFI_GUID_STRING (&gAppleBootBeepGenProtocolGuid, "Boot Beep", "Apple Boot Beep Protocol");
