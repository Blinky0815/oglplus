/*
 *  .file oglplus/enums/texture_target_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/texture_target.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC StrLit EnumValueName(
	TextureTarget*,
	GLenum value
) OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
switch(value)
{
#if defined GL_TEXTURE_1D
	case GL_TEXTURE_1D: return StrLit("TEXTURE_1D");
#endif
#if defined GL_TEXTURE_2D
	case GL_TEXTURE_2D: return StrLit("TEXTURE_2D");
#endif
#if defined GL_TEXTURE_3D
	case GL_TEXTURE_3D: return StrLit("TEXTURE_3D");
#endif
#if defined GL_TEXTURE_1D_ARRAY
	case GL_TEXTURE_1D_ARRAY: return StrLit("TEXTURE_1D_ARRAY");
#endif
#if defined GL_TEXTURE_2D_ARRAY
	case GL_TEXTURE_2D_ARRAY: return StrLit("TEXTURE_2D_ARRAY");
#endif
#if defined GL_TEXTURE_RECTANGLE
	case GL_TEXTURE_RECTANGLE: return StrLit("TEXTURE_RECTANGLE");
#endif
#if defined GL_TEXTURE_BUFFER
	case GL_TEXTURE_BUFFER: return StrLit("TEXTURE_BUFFER");
#endif
#if defined GL_TEXTURE_CUBE_MAP
	case GL_TEXTURE_CUBE_MAP: return StrLit("TEXTURE_CUBE_MAP");
#endif
#if defined GL_TEXTURE_CUBE_MAP_ARRAY
	case GL_TEXTURE_CUBE_MAP_ARRAY: return StrLit("TEXTURE_CUBE_MAP_ARRAY");
#endif
#if defined GL_TEXTURE_2D_MULTISAMPLE
	case GL_TEXTURE_2D_MULTISAMPLE: return StrLit("TEXTURE_2D_MULTISAMPLE");
#endif
#if defined GL_TEXTURE_2D_MULTISAMPLE_ARRAY
	case GL_TEXTURE_2D_MULTISAMPLE_ARRAY: return StrLit("TEXTURE_2D_MULTISAMPLE_ARRAY");
#endif
#if defined GL_TEXTURE_CUBE_MAP_POSITIVE_X
	case GL_TEXTURE_CUBE_MAP_POSITIVE_X: return StrLit("TEXTURE_CUBE_MAP_POSITIVE_X");
#endif
#if defined GL_TEXTURE_CUBE_MAP_NEGATIVE_X
	case GL_TEXTURE_CUBE_MAP_NEGATIVE_X: return StrLit("TEXTURE_CUBE_MAP_NEGATIVE_X");
#endif
#if defined GL_TEXTURE_CUBE_MAP_POSITIVE_Y
	case GL_TEXTURE_CUBE_MAP_POSITIVE_Y: return StrLit("TEXTURE_CUBE_MAP_POSITIVE_Y");
#endif
#if defined GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
	case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y: return StrLit("TEXTURE_CUBE_MAP_NEGATIVE_Y");
#endif
#if defined GL_TEXTURE_CUBE_MAP_POSITIVE_Z
	case GL_TEXTURE_CUBE_MAP_POSITIVE_Z: return StrLit("TEXTURE_CUBE_MAP_POSITIVE_Z");
#endif
#if defined GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
	case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z: return StrLit("TEXTURE_CUBE_MAP_NEGATIVE_Z");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrLit();
}
#endif

