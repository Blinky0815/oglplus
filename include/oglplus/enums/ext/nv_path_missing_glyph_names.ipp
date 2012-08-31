/*
 *  .file oglplus/enums/ext/nv_path_missing_glyph_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_missing_glyph.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVMissingGlyph*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_SKIP_MISSING_GLYPH_NV
	case GL_SKIP_MISSING_GLYPH_NV: return StrLit("SKIP_MISSING_GLYPH_NV");
#endif
#if defined GL_USE_MISSING_GLYPH_NV
	case GL_USE_MISSING_GLYPH_NV: return StrLit("USE_MISSING_GLYPH_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

