/*
 *  .file oglplus/enums/ext/nv_path_font_style_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_font_style.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVFontStyle*,
	GLbitfield value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_BOLD_BIT_NV
	case GL_BOLD_BIT_NV: return StrLit("BOLD_BIT_NV");
#endif
#if defined GL_ITALIC_BIT_NV
	case GL_ITALIC_BIT_NV: return StrLit("ITALIC_BIT_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

