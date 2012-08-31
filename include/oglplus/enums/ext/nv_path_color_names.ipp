/*
 *  .file oglplus/enums/ext/nv_path_color_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_color.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVColor*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_PRIMARY_COLOR_NV
	case GL_PRIMARY_COLOR_NV: return StrLit("PRIMARY_COLOR_NV");
#endif
#if defined GL_SECONDARY_COLOR_NV
	case GL_SECONDARY_COLOR_NV: return StrLit("SECONDARY_COLOR_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

