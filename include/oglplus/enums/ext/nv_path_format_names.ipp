/*
 *  .file oglplus/enums/ext/nv_path_format_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_format.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVFormat*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_PATH_FORMAT_SVG_NV
	case GL_PATH_FORMAT_SVG_NV: return StrLit("PATH_FORMAT_SVG_NV");
#endif
#if defined GL_PATH_FORMAT_PS_NV
	case GL_PATH_FORMAT_PS_NV: return StrLit("PATH_FORMAT_PS_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

