/*
 *  .file oglplus/enums/debug_output_severity_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/debug_output_severity.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	DebugOutputSeverity
> EnumValueRange(DebugOutputSeverity*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLenum _values[] = {
#if defined GL_DEBUG_SEVERITY_HIGH
GL_DEBUG_SEVERITY_HIGH,
#endif
#if defined GL_DEBUG_SEVERITY_MEDIUM
GL_DEBUG_SEVERITY_MEDIUM,
#endif
#if defined GL_DEBUG_SEVERITY_LOW
GL_DEBUG_SEVERITY_LOW,
#endif
#if defined GL_DEBUG_SEVERITY_NOTIFICATION
GL_DEBUG_SEVERITY_NOTIFICATION,
#endif
#if defined GL_DONT_CARE
GL_DONT_CARE,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	DebugOutputSeverity
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

