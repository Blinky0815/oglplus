/*
 *  .file oglplus/enums/buffer_target.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/buffer_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#if OGLPLUS_DOCUMENTATION_ONLY

/// ARRAY_BUFFER
Array,
/// ATOMIC_COUNTER_BUFFER
AtomicCounter,
/// COPY_READ_BUFFER
CopyRead,
/// COPY_WRITE_BUFFER
CopyWrite,
/// DISPATCH_INDIRECT_BUFFER
DispatchIndirect,
/// DRAW_INDIRECT_BUFFER
DrawIndirect,
/// ELEMENT_ARRAY_BUFFER
ElementArray,
/// PIXEL_PACK_BUFFER
PixelPack,
/// PIXEL_UNPACK_BUFFER
PixelUnpack,
/// SHADER_STORAGE_BUFFER
ShaderStorage,
/// TEXTURE_BUFFER
TextureBuffer,
/// TRANSFORM_FEEDBACK_BUFFER
TransformFeedback,
/// UNIFORM_BUFFER
Uniform,
/// QUERY_BUFFER_AMD
Query,
/// EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD
ExternalVirtualMemory

#else // !OGLPLUS_DOCUMENTATION_ONLY

# if !OGLPLUS_NO_SCOPED_ENUMS
// native scoped enums
# include <oglplus/enums/buffer_target_nse.ipp>
# else
// emulated scoped enums
# include <oglplus/enums/buffer_target_ese.ipp>
# endif

#endif
