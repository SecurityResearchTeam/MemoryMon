// Copyright (c) 2015-2016, tandasat. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

/// @file
/// Declares interfaces to the ScopedLock class.

#ifndef MEMORYMON_SCOPEDLOCK_H_
#define MEMORYMON_SCOPEDLOCK_H_

#include <fltKernel.h>

////////////////////////////////////////////////////////////////////////////////
//
// macro utilities
//

////////////////////////////////////////////////////////////////////////////////
//
// constants and macros
//

////////////////////////////////////////////////////////////////////////////////
//
// types
//

class ScopedLock {
 public:
  explicit ScopedLock(_In_ KSPIN_LOCK* spinlock);
  ~ScopedLock();

 private:
  KSPIN_LOCK* spinlock_;
  KLOCK_QUEUE_HANDLE lock_handle_;
};

////////////////////////////////////////////////////////////////////////////////
//
// prototypes
//

////////////////////////////////////////////////////////////////////////////////
//
// variables
//

////////////////////////////////////////////////////////////////////////////////
//
// implementations
//

#endif  // MEMORYMON_SCOPEDLOCK_H_