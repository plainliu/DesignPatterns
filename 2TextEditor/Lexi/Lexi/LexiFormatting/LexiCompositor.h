#pragma once

#include "LexiComposition.h"

class LexiCompositor {
public:
	// 格式化的内容
	void SetComposition( LexiComposition* );

	// 何时格式化
	virtual void Compose();
};
