/*
 *  .file oglplus/enums/texture_swizzle_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/texture_swizzle.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	TextureSwizzle*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_RED
	case GL_RED: return StrLit("RED");
#endif
#if defined GL_GREEN
	case GL_GREEN: return StrLit("GREEN");
#endif
#if defined GL_BLUE
	case GL_BLUE: return StrLit("BLUE");
#endif
#if defined GL_ALPHA
	case GL_ALPHA: return StrLit("ALPHA");
#endif
#if defined GL_ZERO
	case GL_ZERO: return StrLit("ZERO");
#endif
#if defined GL_ONE
	case GL_ONE: return StrLit("ONE");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

