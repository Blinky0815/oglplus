/*
 *  .file oglplus/enums/debug_output_source_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/debug_output_source.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	DebugOutputSource
> EnumValueRange(DebugOutputSource*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_DEBUG_SOURCE_API
GL_DEBUG_SOURCE_API,
#endif
#if defined GL_DEBUG_SOURCE_WINDOW_SYSTEM
GL_DEBUG_SOURCE_WINDOW_SYSTEM,
#endif
#if defined GL_DEBUG_SOURCE_SHADER_COMPILER
GL_DEBUG_SOURCE_SHADER_COMPILER,
#endif
#if defined GL_DEBUG_SOURCE_THIRD_PARTY
GL_DEBUG_SOURCE_THIRD_PARTY,
#endif
#if defined GL_DEBUG_SOURCE_APPLICATION
GL_DEBUG_SOURCE_APPLICATION,
#endif
#if defined GL_DEBUG_SOURCE_OTHER
GL_DEBUG_SOURCE_OTHER,
#endif
#if defined GL_DONT_CARE
GL_DONT_CARE,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	DebugOutputSource
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

