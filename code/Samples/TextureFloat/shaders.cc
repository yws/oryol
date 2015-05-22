//-----------------------------------------------------------------------------
// #version:19# machine generated, do not edit!
//-----------------------------------------------------------------------------
#include "Pre.h"
#include "shaders.h"

namespace Oryol {
namespace Shaders {
#if ORYOL_OPENGL
const char* copyVS_glsl100_src = 
"#define mul(v,m) (m * v)\n"
"#define _POSITION gl_Position\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* offscreenVS_glsl100_src = 
"#define mul(v,m) (m * v)\n"
"#define _POSITION gl_Position\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* copyFS_glsl100_src = 
"precision mediump float;\n"
"#define mul(v,m) (m * v)\n"
"#define _TEXTURE2D texture2D\n"
"#define _COLOR gl_FragColor\n"
"uniform sampler2D tex;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_COLOR = _TEXTURE2D(tex, uv) * 0.01;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* offscreenFS_glsl100_src = 
"precision mediump float;\n"
"#ifdef GL_FRAGMENT_PRECISION_HIGH\n"
"precision highp float;\n"
"#endif\n"
"#define mul(v,m) (m * v)\n"
"#define _COLOR gl_FragColor\n"
"uniform float time;\n"
"varying vec2 uv;\n"
"vec3 mod289(vec3 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec2 mod289(vec2 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec3 permute(vec3 x) {\n"
"return mod289(((x*34.0)+1.0)*x);\n"
"}\n"
"float snoise(vec2 v)\n"
"{\n"
"const vec4 C = vec4(0.211324865405187,\n"
"0.366025403784439,\n"
"-0.577350269189626,\n"
"0.024390243902439);\n"
"vec2 i  = floor(v + dot(v, C.yy) );\n"
"vec2 x0 = v -   i + dot(i, C.xx);\n"
"vec2 i1;\n"
"i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n"
"vec4 x12 = x0.xyxy + C.xxzz;\n"
"x12.xy -= i1;\n"
"i = mod289(i);\n"
"vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n"
"+ i.x + vec3(0.0, i1.x, 1.0 ));\n"
"vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n"
"m = m*m ;\n"
"m = m*m ;\n"
"vec3 x = 2.0 * fract(p * C.www) - 1.0;\n"
"vec3 h = abs(x) - 0.5;\n"
"vec3 ox = floor(x + 0.5);\n"
"vec3 a0 = x - ox;\n"
"m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n"
"vec3 g;\n"
"g.x  = a0.x  * x0.x  + h.x  * x0.y;\n"
"g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n"
"return 130.0 * dot(m, g);\n"
"}\n"
"void main() {\n"
"vec2 dx = vec2(time, 0.0);\n"
"vec2 dy = vec2(0.0, time);\n"
"vec2 dxy = vec2(time, time);\n"
"float red;\n"
"red  = (snoise((uv * 1.5) + dx) * 0.5) + 0.5;\n"
"red += snoise((uv * 5.0) + dx) * 0.15;\n"
"red += snoise((uv * 5.0) + dy) * 0.15;\n"
"float green;\n"
"green  = (snoise((uv * 1.5) + dy) * 0.5) + 0.5;\n"
"green += snoise((uv * 5.0) + dy) * 0.15;\n"
"green += snoise((uv * 5.0) + dx) * 0.15;\n"
"float blue;\n"
"blue  = (snoise((uv * 1.5) + dxy) * 0.5) + 0.5;\n"
"blue += snoise((uv * 5.0) + dxy) * 0.15;\n"
"blue += snoise((uv * 5.0) - dxy) * 0.15;\n"
"_COLOR = vec4(red, green, blue, 0.0) * 100.0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* copyVS_glsl120_src = 
"#version 120\n"
"#define mul(v,m) (m * v)\n"
"#define _POSITION gl_Position\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* offscreenVS_glsl120_src = 
"#version 120\n"
"#define mul(v,m) (m * v)\n"
"#define _POSITION gl_Position\n"
"attribute vec4 position;\n"
"attribute vec2 texcoord0;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* copyFS_glsl120_src = 
"#version 120\n"
"#define mul(v,m) (m * v)\n"
"#define _TEXTURE2D texture2D\n"
"#define _COLOR gl_FragColor\n"
"uniform sampler2D tex;\n"
"varying vec2 uv;\n"
"void main() {\n"
"_COLOR = _TEXTURE2D(tex, uv) * 0.01;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* offscreenFS_glsl120_src = 
"#version 120\n"
"#define mul(v,m) (m * v)\n"
"#define _COLOR gl_FragColor\n"
"uniform float time;\n"
"varying vec2 uv;\n"
"vec3 mod289(vec3 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec2 mod289(vec2 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec3 permute(vec3 x) {\n"
"return mod289(((x*34.0)+1.0)*x);\n"
"}\n"
"float snoise(vec2 v)\n"
"{\n"
"const vec4 C = vec4(0.211324865405187,\n"
"0.366025403784439,\n"
"-0.577350269189626,\n"
"0.024390243902439);\n"
"vec2 i  = floor(v + dot(v, C.yy) );\n"
"vec2 x0 = v -   i + dot(i, C.xx);\n"
"vec2 i1;\n"
"i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n"
"vec4 x12 = x0.xyxy + C.xxzz;\n"
"x12.xy -= i1;\n"
"i = mod289(i);\n"
"vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n"
"+ i.x + vec3(0.0, i1.x, 1.0 ));\n"
"vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n"
"m = m*m ;\n"
"m = m*m ;\n"
"vec3 x = 2.0 * fract(p * C.www) - 1.0;\n"
"vec3 h = abs(x) - 0.5;\n"
"vec3 ox = floor(x + 0.5);\n"
"vec3 a0 = x - ox;\n"
"m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n"
"vec3 g;\n"
"g.x  = a0.x  * x0.x  + h.x  * x0.y;\n"
"g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n"
"return 130.0 * dot(m, g);\n"
"}\n"
"void main() {\n"
"vec2 dx = vec2(time, 0.0);\n"
"vec2 dy = vec2(0.0, time);\n"
"vec2 dxy = vec2(time, time);\n"
"float red;\n"
"red  = (snoise((uv * 1.5) + dx) * 0.5) + 0.5;\n"
"red += snoise((uv * 5.0) + dx) * 0.15;\n"
"red += snoise((uv * 5.0) + dy) * 0.15;\n"
"float green;\n"
"green  = (snoise((uv * 1.5) + dy) * 0.5) + 0.5;\n"
"green += snoise((uv * 5.0) + dy) * 0.15;\n"
"green += snoise((uv * 5.0) + dx) * 0.15;\n"
"float blue;\n"
"blue  = (snoise((uv * 1.5) + dxy) * 0.5) + 0.5;\n"
"blue += snoise((uv * 5.0) + dxy) * 0.15;\n"
"blue += snoise((uv * 5.0) - dxy) * 0.15;\n"
"_COLOR = vec4(red, green, blue, 0.0) * 100.0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* copyVS_glsl150_src = 
"#version 150\n"
"#define mul(v,m) (m * v)\n"
"#define _POSITION gl_Position\n"
"in vec4 position;\n"
"in vec2 texcoord0;\n"
"out vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* offscreenVS_glsl150_src = 
"#version 150\n"
"#define mul(v,m) (m * v)\n"
"#define _POSITION gl_Position\n"
"in vec4 position;\n"
"in vec2 texcoord0;\n"
"out vec2 uv;\n"
"void main() {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* copyFS_glsl150_src = 
"#version 150\n"
"#define mul(v,m) (m * v)\n"
"#define _TEXTURE2D texture\n"
"#define _COLOR _FragColor\n"
"uniform sampler2D tex;\n"
"in vec2 uv;\n"
"out vec4 _FragColor;\n"
"void main() {\n"
"_COLOR = _TEXTURE2D(tex, uv) * 0.01;\n"
"}\n"
;
#endif
#if ORYOL_OPENGL
const char* offscreenFS_glsl150_src = 
"#version 150\n"
"#define mul(v,m) (m * v)\n"
"#define _COLOR _FragColor\n"
"uniform float time;\n"
"in vec2 uv;\n"
"out vec4 _FragColor;\n"
"vec3 mod289(vec3 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec2 mod289(vec2 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec3 permute(vec3 x) {\n"
"return mod289(((x*34.0)+1.0)*x);\n"
"}\n"
"float snoise(vec2 v)\n"
"{\n"
"const vec4 C = vec4(0.211324865405187,\n"
"0.366025403784439,\n"
"-0.577350269189626,\n"
"0.024390243902439);\n"
"vec2 i  = floor(v + dot(v, C.yy) );\n"
"vec2 x0 = v -   i + dot(i, C.xx);\n"
"vec2 i1;\n"
"i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n"
"vec4 x12 = x0.xyxy + C.xxzz;\n"
"x12.xy -= i1;\n"
"i = mod289(i);\n"
"vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n"
"+ i.x + vec3(0.0, i1.x, 1.0 ));\n"
"vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n"
"m = m*m ;\n"
"m = m*m ;\n"
"vec3 x = 2.0 * fract(p * C.www) - 1.0;\n"
"vec3 h = abs(x) - 0.5;\n"
"vec3 ox = floor(x + 0.5);\n"
"vec3 a0 = x - ox;\n"
"m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n"
"vec3 g;\n"
"g.x  = a0.x  * x0.x  + h.x  * x0.y;\n"
"g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n"
"return 130.0 * dot(m, g);\n"
"}\n"
"void main() {\n"
"vec2 dx = vec2(time, 0.0);\n"
"vec2 dy = vec2(0.0, time);\n"
"vec2 dxy = vec2(time, time);\n"
"float red;\n"
"red  = (snoise((uv * 1.5) + dx) * 0.5) + 0.5;\n"
"red += snoise((uv * 5.0) + dx) * 0.15;\n"
"red += snoise((uv * 5.0) + dy) * 0.15;\n"
"float green;\n"
"green  = (snoise((uv * 1.5) + dy) * 0.5) + 0.5;\n"
"green += snoise((uv * 5.0) + dy) * 0.15;\n"
"green += snoise((uv * 5.0) + dx) * 0.15;\n"
"float blue;\n"
"blue  = (snoise((uv * 1.5) + dxy) * 0.5) + 0.5;\n"
"blue += snoise((uv * 5.0) + dxy) * 0.15;\n"
"blue += snoise((uv * 5.0) - dxy) * 0.15;\n"
"_COLOR = vec4(red, green, blue, 0.0) * 100.0;\n"
"}\n"
;
#endif
#if ORYOL_D3D11
const char* copyVS_hlsl5_src = 
"#define _POSITION _oPosition\n"
"#define mat4 float4x4\n"
"#define mat2 float2x2\n"
"#define mat3 float3x3\n"
"#define vec4 float4\n"
"#define vec2 float2\n"
"#define vec3 float3\n"
"void main(\n"
"in vec4 position : position,\n"
"in vec2 texcoord0 : texcoord0,\n"
"out vec2 uv : uv,\n"
"out vec4 _oPosition : SV_POSITION) {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_D3D11
const char* offscreenVS_hlsl5_src = 
"#define _POSITION _oPosition\n"
"#define mat4 float4x4\n"
"#define mat2 float2x2\n"
"#define mat3 float3x3\n"
"#define vec4 float4\n"
"#define vec2 float2\n"
"#define vec3 float3\n"
"void main(\n"
"in vec4 position : position,\n"
"in vec2 texcoord0 : texcoord0,\n"
"out vec2 uv : uv,\n"
"out vec4 _oPosition : SV_POSITION) {\n"
"_POSITION = position;\n"
"uv = texcoord0;\n"
"}\n"
;
#endif
#if ORYOL_D3D11
const char* copyFS_hlsl5_src = 
"#define _TEXTURE2D FIXME_TEXTURE2D\n"
"#define _COLOR _oColor\n"
"#define mat4 float4x4\n"
"#define mat2 float2x2\n"
"#define mat3 float3x3\n"
"#define vec4 float4\n"
"#define vec2 float2\n"
"#define vec3 float3\n"
"sampler2D tex;\n"
"void main(\n"
"in vec2 uv : uv,\n"
"out vec4 _oColor : SV_TARGET) {\n"
"_COLOR = _TEXTURE2D(tex, uv) * 0.01;\n"
"}\n"
;
#endif
#if ORYOL_D3D11
const char* offscreenFS_hlsl5_src = 
"#define _COLOR _oColor\n"
"#define mat4 float4x4\n"
"#define mat2 float2x2\n"
"#define mat3 float3x3\n"
"#define vec4 float4\n"
"#define vec2 float2\n"
"#define vec3 float3\n"
"float time;\n"
"vec3 mod289(vec3 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec2 mod289(vec2 x) {\n"
"return x - floor(x * (1.0 / 289.0)) * 289.0;\n"
"}\n"
"vec3 permute(vec3 x) {\n"
"return mod289(((x*34.0)+1.0)*x);\n"
"}\n"
"float snoise(vec2 v)\n"
"{\n"
"const vec4 C = vec4(0.211324865405187,\n"
"0.366025403784439,\n"
"-0.577350269189626,\n"
"0.024390243902439);\n"
"vec2 i  = floor(v + dot(v, C.yy) );\n"
"vec2 x0 = v -   i + dot(i, C.xx);\n"
"vec2 i1;\n"
"i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n"
"vec4 x12 = x0.xyxy + C.xxzz;\n"
"x12.xy -= i1;\n"
"i = mod289(i);\n"
"vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n"
"+ i.x + vec3(0.0, i1.x, 1.0 ));\n"
"vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n"
"m = m*m ;\n"
"m = m*m ;\n"
"vec3 x = 2.0 * fract(p * C.www) - 1.0;\n"
"vec3 h = abs(x) - 0.5;\n"
"vec3 ox = floor(x + 0.5);\n"
"vec3 a0 = x - ox;\n"
"m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n"
"vec3 g;\n"
"g.x  = a0.x  * x0.x  + h.x  * x0.y;\n"
"g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n"
"return 130.0 * dot(m, g);\n"
"}\n"
"void main(\n"
"in vec2 uv : uv,\n"
"out vec4 _oColor : SV_TARGET) {\n"
"vec2 dx = vec2(time, 0.0);\n"
"vec2 dy = vec2(0.0, time);\n"
"vec2 dxy = vec2(time, time);\n"
"float red;\n"
"red  = (snoise((uv * 1.5) + dx) * 0.5) + 0.5;\n"
"red += snoise((uv * 5.0) + dx) * 0.15;\n"
"red += snoise((uv * 5.0) + dy) * 0.15;\n"
"float green;\n"
"green  = (snoise((uv * 1.5) + dy) * 0.5) + 0.5;\n"
"green += snoise((uv * 5.0) + dy) * 0.15;\n"
"green += snoise((uv * 5.0) + dx) * 0.15;\n"
"float blue;\n"
"blue  = (snoise((uv * 1.5) + dxy) * 0.5) + 0.5;\n"
"blue += snoise((uv * 5.0) + dxy) * 0.15;\n"
"blue += snoise((uv * 5.0) - dxy) * 0.15;\n"
"_COLOR = vec4(red, green, blue, 0.0) * 100.0;\n"
"}\n"
;
#endif
ProgramBundleSetup Offscreen::CreateSetup() {
    ProgramBundleSetup setup("Offscreen");
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL100, offscreenVS_glsl100_src, offscreenFS_glsl100_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL120, offscreenVS_glsl120_src, offscreenFS_glsl120_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL150, offscreenVS_glsl150_src, offscreenFS_glsl150_src);
    #endif
    #if ORYOL_D3D11
    setup.AddProgramFromSources(0, ShaderLang::HLSL5, offscreenVS_hlsl5_src, offscreenFS_hlsl5_src);
    #endif
    setup.AddUniform("time", Time);
    return setup;
}
ProgramBundleSetup Copy::CreateSetup() {
    ProgramBundleSetup setup("Copy");
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL100, copyVS_glsl100_src, copyFS_glsl100_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL120, copyVS_glsl120_src, copyFS_glsl120_src);
    #endif
    #if ORYOL_OPENGL
    setup.AddProgramFromSources(0, ShaderLang::GLSL150, copyVS_glsl150_src, copyFS_glsl150_src);
    #endif
    #if ORYOL_D3D11
    setup.AddProgramFromSources(0, ShaderLang::HLSL5, copyVS_hlsl5_src, copyFS_hlsl5_src);
    #endif
    setup.AddTextureUniform("tex", Texture);
    return setup;
}
}
}
