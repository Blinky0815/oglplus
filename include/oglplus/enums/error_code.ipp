/*
 *  .file oglplus/enums/error_code.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/error_code.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// NO_ERROR
NoError,
/// OUT_OF_MEMORY
OutOfMemory,
/// INVALID_ENUM
InvalidEnum,
/// INVALID_VALUE
InvalidValue,
/// INVALID_OPERATION
InvalidOperation,
/// INVALID_FRAMEBUFFER_OPERATION
InvalidFramebufferOperation,
/// STACK_OVERFLOW
StackOverflow,
/// STACK_UNDERFLOW
StackUnderflow,
/// TABLE_TOO_LARGE
TableTooLarge

#else // !OGLPLUS_DOCUMENTATION_ONLY

# if !OGLPLUS_NO_SCOPED_ENUMS
// native scoped enums
# include <oglplus/enums/error_code_nse.ipp>
# else
// emulated scoped enums
# include <oglplus/enums/error_code_ese.ipp>
# endif

#endif
