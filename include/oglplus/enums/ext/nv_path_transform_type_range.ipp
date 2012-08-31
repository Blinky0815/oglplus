/*
 *  .file oglplus/enums/ext/nv_path_transform_type_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/ext/nv_path_transform_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	PathNVTransformType
> EnumValueRange(PathNVTransformType*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_NONE
GL_NONE,
#endif
#if defined GL_TRANSLATE_X_NV
GL_TRANSLATE_X_NV,
#endif
#if defined GL_TRANSLATE_Y_NV
GL_TRANSLATE_Y_NV,
#endif
#if defined GL_TRANSLATE_2D_NV
GL_TRANSLATE_2D_NV,
#endif
#if defined GL_TRANSLATE_3D_NV
GL_TRANSLATE_3D_NV,
#endif
#if defined GL_AFFINE_2D_NV
GL_AFFINE_2D_NV,
#endif
#if defined GL_AFFINE_3D_NV
GL_AFFINE_3D_NV,
#endif
#if defined GL_TRANSPOSE_AFFINE_2D_NV
GL_TRANSPOSE_AFFINE_2D_NV,
#endif
#if defined GL_TRANSPOSE_AFFINE_3D_NV
GL_TRANSPOSE_AFFINE_3D_NV,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	PathNVTransformType
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

