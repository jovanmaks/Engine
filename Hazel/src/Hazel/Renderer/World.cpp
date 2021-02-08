#include "hzpch.h"
#include "Hazel/Renderer/World.h"
#include <glm/gtc/matrix_transform.hpp>




namespace Hazel{

    struct GridVertex
    {
        glm::vec3 GridPosition;
        glm::vec4 GridColor;
    };

    struct GridData
    {
        GridVertex* GridVertexBufferPtr = nullptr;
        uint32_t GridIndexCount = 0;
        glm::vec4 GridVertexPositions[4];

    };

    static GridData s_Data;



    void World::DrawGrid(const glm::mat4& transform, const glm::vec4& color) 
    {
        HZ_PROFILE_FUNCTION();

        constexpr size_t gridVertexCount = 4;

        for ( size_t i=0; i< gridVertexCount; i++ )
        {
            s_Data.GridVertexBufferPtr->GridPosition = transform * s_Data.GridVertexPositions[i];
            s_Data.GridVertexBufferPtr->GridColor = color;
            s_Data.GridVertexBufferPtr++;
        }

        s_Data.GridIndexCount +=6;
    }


}