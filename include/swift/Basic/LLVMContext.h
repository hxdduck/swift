//===--- LLVMContext.h ----------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2016 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_BASIC_LLVMCONTEXT_H
#define SWIFT_BASIC_LLVMCONTEXT_H

namespace llvm {

class LLVMContext;

} // end llvm namespace

namespace swift {

/// Returns a global LLVM context for Swift clients that only care about
/// operating on a single thread.
llvm::LLVMContext &getGlobalLLVMContext();

} // end swift namespace

#endif
