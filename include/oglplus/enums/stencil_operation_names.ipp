/*
 *  .file oglplus/enums/stencil_operation_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/stencil_operation.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	StencilOperation*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_KEEP
	case GL_KEEP: return StrLit("KEEP");
#endif
#if defined GL_ZERO
	case GL_ZERO: return StrLit("ZERO");
#endif
#if defined GL_REPLACE
	case GL_REPLACE: return StrLit("REPLACE");
#endif
#if defined GL_INCR
	case GL_INCR: return StrLit("INCR");
#endif
#if defined GL_DECR
	case GL_DECR: return StrLit("DECR");
#endif
#if defined GL_INVERT
	case GL_INVERT: return StrLit("INVERT");
#endif
#if defined GL_INCR_WRAP
	case GL_INCR_WRAP: return StrLit("INCR_WRAP");
#endif
#if defined GL_DECR_WRAP
	case GL_DECR_WRAP: return StrLit("DECR_WRAP");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

