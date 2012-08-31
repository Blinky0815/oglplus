/*
 *  .file oglplus/enums/ext/nv_path_font_target_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_font_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVFontTarget*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_STANDARD_FONT_NAME_NV
	case GL_STANDARD_FONT_NAME_NV: return StrLit("STANDARD_FONT_NAME_NV");
#endif
#if defined GL_SYSTEM_FONT_NAME_NV
	case GL_SYSTEM_FONT_NAME_NV: return StrLit("SYSTEM_FONT_NAME_NV");
#endif
#if defined GL_FILE_NAME_NV
	case GL_FILE_NAME_NV: return StrLit("FILE_NAME_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

