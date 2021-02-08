
	void Renderer2D::DrawGrid(const glm::mat4& transform, const glm::vec4& color)
	{
		HZ_PROFILE_FUNCTION();

			constexpr size_t quadVertexCount = 8;

			glm::vec4 testing[8];

			testing[0] = { -0.5f, -0.5f, 0.0f, 1.0f };
			testing[1] = {  0.5f, -0.5f, 0.0f, 1.0f };
			testing[2] = {  0.5f,  0.5f, 0.0f, 1.0f };
			testing[3] = { -0.5f,  0.5f, 0.0f, 1.0f };

			testing[4] = {  0.5f, -0.5f, 0.0f, 1.0f };
			testing[5] = {  1.5f, -0.5f, 0.0f, 1.0f };
			testing[6] = {  1.5f,  0.5f, 0.0f, 1.0f };
			testing[7] = {  0.5f,  0.5f, 0.0f, 1.0f };

		for (size_t i = 0; i < quadVertexCount; i++)
		{
			s_Data.QuadVertexBufferPtr->Position = transform * testing[i];
			s_Data.QuadVertexBufferPtr->Color = color;
			s_Data.QuadVertexBufferPtr++;
		}

		s_Data.QuadIndexCount += 6*2;

		s_Data.Stats.QuadCount++;
	}