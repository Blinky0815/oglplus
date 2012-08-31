/*
 *  .file oglplus/enums/texture_min_filter_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/texture_min_filter.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	TextureMinFilter*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_NEAREST
	case GL_NEAREST: return StrLit("NEAREST");
#endif
#if defined GL_LINEAR
	case GL_LINEAR: return StrLit("LINEAR");
#endif
#if defined GL_NEAREST_MIPMAP_NEAREST
	case GL_NEAREST_MIPMAP_NEAREST: return StrLit("NEAREST_MIPMAP_NEAREST");
#endif
#if defined GL_NEAREST_MIPMAP_LINEAR
	case GL_NEAREST_MIPMAP_LINEAR: return StrLit("NEAREST_MIPMAP_LINEAR");
#endif
#if defined GL_LINEAR_MIPMAP_NEAREST
	case GL_LINEAR_MIPMAP_NEAREST: return StrLit("LINEAR_MIPMAP_NEAREST");
#endif
#if defined GL_LINEAR_MIPMAP_LINEAR
	case GL_LINEAR_MIPMAP_LINEAR: return StrLit("LINEAR_MIPMAP_LINEAR");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

