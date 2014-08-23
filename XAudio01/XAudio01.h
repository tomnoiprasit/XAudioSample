#pragma once

#include "resource.h"
#include <xaudio2.h>

IXAudio2* pXAudio2 = NULL;
IXAudio2MasteringVoice* pMasterVoice = NULL;
IXAudio2SourceVoice* pSourceVoice;

HRESULT hr;
bool SetupAudio();