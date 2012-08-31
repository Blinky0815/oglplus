/*
 *  .file oglplus/enums/buffer_usage_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/buffer_usage.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	BufferUsage*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_STREAM_DRAW
	case GL_STREAM_DRAW: return StrLit("STREAM_DRAW");
#endif
#if defined GL_STREAM_READ
	case GL_STREAM_READ: return StrLit("STREAM_READ");
#endif
#if defined GL_STREAM_COPY
	case GL_STREAM_COPY: return StrLit("STREAM_COPY");
#endif
#if defined GL_STATIC_DRAW
	case GL_STATIC_DRAW: return StrLit("STATIC_DRAW");
#endif
#if defined GL_STATIC_READ
	case GL_STATIC_READ: return StrLit("STATIC_READ");
#endif
#if defined GL_STATIC_COPY
	case GL_STATIC_COPY: return StrLit("STATIC_COPY");
#endif
#if defined GL_DYNAMIC_DRAW
	case GL_DYNAMIC_DRAW: return StrLit("DYNAMIC_DRAW");
#endif
#if defined GL_DYNAMIC_READ
	case GL_DYNAMIC_READ: return StrLit("DYNAMIC_READ");
#endif
#if defined GL_DYNAMIC_COPY
	case GL_DYNAMIC_COPY: return StrLit("DYNAMIC_COPY");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

