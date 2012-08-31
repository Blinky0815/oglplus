/*
 *  .file oglplus/enums/ext/nv_path_cap_style_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_cap_style.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVCapStyle*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_FLAT
	case GL_FLAT: return StrLit("FLAT");
#endif
#if defined GL_SQUARE_NV
	case GL_SQUARE_NV: return StrLit("SQUARE_NV");
#endif
#if defined GL_ROUND_NV
	case GL_ROUND_NV: return StrLit("ROUND_NV");
#endif
#if defined GL_TRIANGULAR_NV
	case GL_TRIANGULAR_NV: return StrLit("TRIANGULAR_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

