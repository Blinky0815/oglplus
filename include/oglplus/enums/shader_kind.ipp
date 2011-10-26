/*
 *  .file oglplus/enums/shader_kind.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/shader_kind.txt' instead.
 *
 *  Copyright 2010-2011 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// VERTEX_SHADER
Vertex,
/// TESS_CONTROL_SHADER
TessControl,
/// TESS_EVALUATION_SHADER
TessEvaluation,
/// GEOMETRY_SHADER
Geometry,
/// FRAGMENT_SHADER
Fragment

#else // OGLPLUS_DOCUMENTATION_ONLY

#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#if defined GL_VERTEX_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
Vertex = GL_VERTEX_SHADER
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_TESS_CONTROL_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
TessControl = GL_TESS_CONTROL_SHADER
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_TESS_EVALUATION_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
TessEvaluation = GL_TESS_EVALUATION_SHADER
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_GEOMETRY_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
Geometry = GL_GEOMETRY_SHADER
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#if defined GL_FRAGMENT_SHADER
# if OGLPLUS_LIST_NEEDS_COMMA
,
# endif
Fragment = GL_FRAGMENT_SHADER
# ifndef OGLPLUS_LIST_NEEDS_COMMA
#  define OGLPLUS_LIST_NEEDS_COMMA 1
# endif
#endif
#ifdef OGLPLUS_LIST_NEEDS_COMMA
# undef OGLPLUS_LIST_NEEDS_COMMA
#endif

#endif // OGLPLUS_DOCUMENTATION_ONLY
