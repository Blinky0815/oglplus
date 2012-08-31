/*
 *  .file oglplus/enums/transform_feedback_primitive_type_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/transform_feedback_primitive_type.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	TransformFeedbackPrimitiveType
> EnumValueRange(TransformFeedbackPrimitiveType*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_TRIANGLES
GL_TRIANGLES,
#endif
#if defined GL_LINES
GL_LINES,
#endif
#if defined GL_POINTS
GL_POINTS,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	TransformFeedbackPrimitiveType
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

