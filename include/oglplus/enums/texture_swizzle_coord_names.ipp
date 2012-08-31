/*
 *  .file oglplus/enums/texture_swizzle_coord_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/texture_swizzle_coord.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	TextureSwizzleCoord*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_TEXTURE_SWIZZLE_R
	case GL_TEXTURE_SWIZZLE_R: return StrLit("TEXTURE_SWIZZLE_R");
#endif
#if defined GL_TEXTURE_SWIZZLE_G
	case GL_TEXTURE_SWIZZLE_G: return StrLit("TEXTURE_SWIZZLE_G");
#endif
#if defined GL_TEXTURE_SWIZZLE_B
	case GL_TEXTURE_SWIZZLE_B: return StrLit("TEXTURE_SWIZZLE_B");
#endif
#if defined GL_TEXTURE_SWIZZLE_A
	case GL_TEXTURE_SWIZZLE_A: return StrLit("TEXTURE_SWIZZLE_A");
#endif
#if defined GL_TEXTURE_SWIZZLE_RGBA
	case GL_TEXTURE_SWIZZLE_RGBA: return StrLit("TEXTURE_SWIZZLE_RGBA");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

