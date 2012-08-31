/*
 *  .file oglplus/enums/buffer_target_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/buffer_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	BufferTarget
> EnumValueRange(BufferTarget*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_ARRAY_BUFFER
GL_ARRAY_BUFFER,
#endif
#if defined GL_ATOMIC_COUNTER_BUFFER
GL_ATOMIC_COUNTER_BUFFER,
#endif
#if defined GL_COPY_READ_BUFFER
GL_COPY_READ_BUFFER,
#endif
#if defined GL_COPY_WRITE_BUFFER
GL_COPY_WRITE_BUFFER,
#endif
#if defined GL_DISPATCH_INDIRECT_BUFFER
GL_DISPATCH_INDIRECT_BUFFER,
#endif
#if defined GL_DRAW_INDIRECT_BUFFER
GL_DRAW_INDIRECT_BUFFER,
#endif
#if defined GL_ELEMENT_ARRAY_BUFFER
GL_ELEMENT_ARRAY_BUFFER,
#endif
#if defined GL_PIXEL_PACK_BUFFER
GL_PIXEL_PACK_BUFFER,
#endif
#if defined GL_PIXEL_UNPACK_BUFFER
GL_PIXEL_UNPACK_BUFFER,
#endif
#if defined GL_SHADER_STORAGE_BUFFER
GL_SHADER_STORAGE_BUFFER,
#endif
#if defined GL_TEXTURE_BUFFER
GL_TEXTURE_BUFFER,
#endif
#if defined GL_TRANSFORM_FEEDBACK_BUFFER
GL_TRANSFORM_FEEDBACK_BUFFER,
#endif
#if defined GL_UNIFORM_BUFFER
GL_UNIFORM_BUFFER,
#endif
#if defined GL_QUERY_BUFFER_AMD
GL_QUERY_BUFFER_AMD,
#endif
#if defined GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	BufferTarget
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

