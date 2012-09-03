/*
 *  .file oglplus/enums/object_type_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/object_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	ObjectType*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_BUFFER
	case GL_BUFFER: return StrLit("BUFFER");
#endif
#if defined GL_FRAMEBUFFER
	case GL_FRAMEBUFFER: return StrLit("FRAMEBUFFER");
#endif
#if defined GL_PROGRAM_PIPELINE
	case GL_PROGRAM_PIPELINE: return StrLit("PROGRAM_PIPELINE");
#endif
#if defined GL_PROGRAM
	case GL_PROGRAM: return StrLit("PROGRAM");
#endif
#if defined GL_QUERY
	case GL_QUERY: return StrLit("QUERY");
#endif
#if defined GL_RENDERBUFFER
	case GL_RENDERBUFFER: return StrLit("RENDERBUFFER");
#endif
#if defined GL_SAMPLER
	case GL_SAMPLER: return StrLit("SAMPLER");
#endif
#if defined GL_SHADER
	case GL_SHADER: return StrLit("SHADER");
#endif
#if defined GL_TEXTURE
	case GL_TEXTURE: return StrLit("TEXTURE");
#endif
#if defined GL_TRANSFORM_FEEDBACK
	case GL_TRANSFORM_FEEDBACK: return StrLit("TRANSFORM_FEEDBACK");
#endif
#if defined GL_VERTEX_ARRAY
	case GL_VERTEX_ARRAY: return StrLit("VERTEX_ARRAY");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

