#pragma once

#include "LexiComposition.h"

class LexiCompositor {
public:
	// ��ʽ��������
	void SetComposition( LexiComposition* );

	// ��ʱ��ʽ��
	virtual void Compose();
};
