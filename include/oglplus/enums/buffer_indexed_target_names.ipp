/*
 *  .file oglplus/enums/buffer_indexed_target_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/buffer_indexed_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	BufferIndexedTarget*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_ATOMIC_COUNTER_BUFFER
	case GL_ATOMIC_COUNTER_BUFFER: return StrLit("ATOMIC_COUNTER_BUFFER");
#endif
#if defined GL_SHADER_STORAGE_BUFFER
	case GL_SHADER_STORAGE_BUFFER: return StrLit("SHADER_STORAGE_BUFFER");
#endif
#if defined GL_TRANSFORM_FEEDBACK_BUFFER
	case GL_TRANSFORM_FEEDBACK_BUFFER: return StrLit("TRANSFORM_FEEDBACK_BUFFER");
#endif
#if defined GL_UNIFORM_BUFFER
	case GL_UNIFORM_BUFFER: return StrLit("UNIFORM_BUFFER");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

