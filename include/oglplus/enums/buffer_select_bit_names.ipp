/*
 *  .file oglplus/enums/buffer_select_bit_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/buffer_select_bit.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	BufferSelectBit*,
	GLbitfield value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_COLOR_BUFFER_BIT
	case GL_COLOR_BUFFER_BIT: return StrLit("COLOR_BUFFER_BIT");
#endif
#if defined GL_DEPTH_BUFFER_BIT
	case GL_DEPTH_BUFFER_BIT: return StrLit("DEPTH_BUFFER_BIT");
#endif
#if defined GL_STENCIL_BUFFER_BIT
	case GL_STENCIL_BUFFER_BIT: return StrLit("STENCIL_BUFFER_BIT");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

