/*
 *  .file oglplus/enums/texture_target_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/texture_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	TextureTarget
> EnumValueRange(TextureTarget*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_TEXTURE_1D
GL_TEXTURE_1D,
#endif
#if defined GL_TEXTURE_2D
GL_TEXTURE_2D,
#endif
#if defined GL_TEXTURE_3D
GL_TEXTURE_3D,
#endif
#if defined GL_TEXTURE_1D_ARRAY
GL_TEXTURE_1D_ARRAY,
#endif
#if defined GL_TEXTURE_2D_ARRAY
GL_TEXTURE_2D_ARRAY,
#endif
#if defined GL_TEXTURE_RECTANGLE
GL_TEXTURE_RECTANGLE,
#endif
#if defined GL_TEXTURE_BUFFER
GL_TEXTURE_BUFFER,
#endif
#if defined GL_TEXTURE_CUBE_MAP
GL_TEXTURE_CUBE_MAP,
#endif
#if defined GL_TEXTURE_CUBE_MAP_ARRAY
GL_TEXTURE_CUBE_MAP_ARRAY,
#endif
#if defined GL_TEXTURE_2D_MULTISAMPLE
GL_TEXTURE_2D_MULTISAMPLE,
#endif
#if defined GL_TEXTURE_2D_MULTISAMPLE_ARRAY
GL_TEXTURE_2D_MULTISAMPLE_ARRAY,
#endif
#if defined GL_TEXTURE_CUBE_MAP_POSITIVE_X
GL_TEXTURE_CUBE_MAP_POSITIVE_X,
#endif
#if defined GL_TEXTURE_CUBE_MAP_NEGATIVE_X
GL_TEXTURE_CUBE_MAP_NEGATIVE_X,
#endif
#if defined GL_TEXTURE_CUBE_MAP_POSITIVE_Y
GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
#endif
#if defined GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
GL_TEXTURE_CUBE_MAP_NEGATIVE_Y,
#endif
#if defined GL_TEXTURE_CUBE_MAP_POSITIVE_Z
GL_TEXTURE_CUBE_MAP_POSITIVE_Z,
#endif
#if defined GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	TextureTarget
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

