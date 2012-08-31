/*
 *  .file oglplus/enums/ext/nv_path_stroke_cover_mode_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_stroke_cover_mode.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PathNVStrokeCoverMode*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_CONVEX_HULL_NV
	case GL_CONVEX_HULL_NV: return StrLit("CONVEX_HULL_NV");
#endif
#if defined GL_BOUNDING_BOX_NV
	case GL_BOUNDING_BOX_NV: return StrLit("BOUNDING_BOX_NV");
#endif
#if defined GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV
	case GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV: return StrLit("BOUNDING_BOX_OF_BOUNDING_BOXES_NV");
#endif
#if defined GL_PATH_STROKE_COVER_MODE_NV
	case GL_PATH_STROKE_COVER_MODE_NV: return StrLit("PATH_STROKE_COVER_MODE_NV");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

