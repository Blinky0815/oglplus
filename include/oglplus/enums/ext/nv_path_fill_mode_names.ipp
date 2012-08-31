/*
 *  .file oglplus/enums/ext/nv_path_fill_mode_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_fill_mode.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVFillMode*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_INVERT
	case GL_INVERT: return StrLit("INVERT");
#endif
#if defined GL_COUNT_UP_NV
	case GL_COUNT_UP_NV: return StrLit("COUNT_UP_NV");
#endif
#if defined GL_COUNT_DOWN_NV
	case GL_COUNT_DOWN_NV: return StrLit("COUNT_DOWN_NV");
#endif
#if defined GL_PATH_FILL_MODE_NV
	case GL_PATH_FILL_MODE_NV: return StrLit("PATH_FILL_MODE_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

