#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "common.h"
#include "shader.h"
#include "program.h"
#include "buffer.h"
#include "vertex_layout.h"

// ... context 클래스 선언
CLASS_PTR(Context)
class Context
{
public:
    static ContextUPtr Create();
    void CreateCircle(float radius, int segment);
    void CreateDoughnut(float out_radius,float in_radius,int segment,float start, float end);
    void Render();

private:
    Context() {}
    bool Init();
    ProgramUPtr m_program;

    VertexLayoutUPtr m_vertexLayout;
    BufferUPtr m_vertexBuffer;
    BufferUPtr m_indexBuffer;
    int m_indexCount { 6 };
};

#endif // __CONTEXT_H__