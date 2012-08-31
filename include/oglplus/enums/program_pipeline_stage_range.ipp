/*
 *  .file oglplus/enums/program_pipeline_stage_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/program_pipeline_stage.txt' instead.
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLbitfield*,
	ProgramPipelineStage
> EnumValueRange(ProgramPipelineStage*)
OGLPLUS_NOEXCEPT(true)
#if OGLPLUS_LINK_LIBRARY && !defined(OGLPLUS_IMPLEMENTING_LIBRARY)
;
#else
{
static const GLbitfield _values[] = {
#if defined GL_VERTEX_SHADER_BIT
GL_VERTEX_SHADER_BIT,
#endif
#if defined GL_TESS_CONTROL_SHADER_BIT
GL_TESS_CONTROL_SHADER_BIT,
#endif
#if defined GL_TESS_EVALUATION_SHADER_BIT
GL_TESS_EVALUATION_SHADER_BIT,
#endif
#if defined GL_GEOMETRY_SHADER_BIT
GL_GEOMETRY_SHADER_BIT,
#endif
#if defined GL_FRAGMENT_SHADER_BIT
GL_FRAGMENT_SHADER_BIT,
#endif
#if defined GL_COMPUTE_SHADER_BIT
GL_COMPUTE_SHADER_BIT,
#endif
#if defined GL_ALL_SHADER_BITS
GL_ALL_SHADER_BITS,
#endif
0
};
return aux::CastIterRange<
	const GLbitfield*,
	ProgramPipelineStage
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#endif

