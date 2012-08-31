/*
 *  .file oglplus/enums/buffer_indexed_target_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/buffer_indexed_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	BufferIndexedTarget
> EnumValueRange(BufferIndexedTarget*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_ATOMIC_COUNTER_BUFFER
GL_ATOMIC_COUNTER_BUFFER,
#endif
#if defined GL_SHADER_STORAGE_BUFFER
GL_SHADER_STORAGE_BUFFER,
#endif
#if defined GL_TRANSFORM_FEEDBACK_BUFFER
GL_TRANSFORM_FEEDBACK_BUFFER,
#endif
#if defined GL_UNIFORM_BUFFER
GL_UNIFORM_BUFFER,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	BufferIndexedTarget
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

