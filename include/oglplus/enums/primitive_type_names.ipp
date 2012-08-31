/*
 *  .file oglplus/enums/primitive_type_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/primitive_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	PrimitiveType*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_POINTS
	case GL_POINTS: return StrLit("POINTS");
#endif
#if defined GL_LINE_STRIP
	case GL_LINE_STRIP: return StrLit("LINE_STRIP");
#endif
#if defined GL_LINE_LOOP
	case GL_LINE_LOOP: return StrLit("LINE_LOOP");
#endif
#if defined GL_LINES
	case GL_LINES: return StrLit("LINES");
#endif
#if defined GL_TRIANGLE_STRIP
	case GL_TRIANGLE_STRIP: return StrLit("TRIANGLE_STRIP");
#endif
#if defined GL_TRIANGLE_FAN
	case GL_TRIANGLE_FAN: return StrLit("TRIANGLE_FAN");
#endif
#if defined GL_TRIANGLES
	case GL_TRIANGLES: return StrLit("TRIANGLES");
#endif
#if defined GL_LINES_ADJACENCY
	case GL_LINES_ADJACENCY: return StrLit("LINES_ADJACENCY");
#endif
#if defined GL_LINE_STRIP_ADJACENCY
	case GL_LINE_STRIP_ADJACENCY: return StrLit("LINE_STRIP_ADJACENCY");
#endif
#if defined GL_TRIANGLES_ADJACENCY
	case GL_TRIANGLES_ADJACENCY: return StrLit("TRIANGLES_ADJACENCY");
#endif
#if defined GL_TRIANGLE_STRIP_ADJACENCY
	case GL_TRIANGLE_STRIP_ADJACENCY: return StrLit("TRIANGLE_STRIP_ADJACENCY");
#endif
#if defined GL_PATCHES
	case GL_PATCHES: return StrLit("PATCHES");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

