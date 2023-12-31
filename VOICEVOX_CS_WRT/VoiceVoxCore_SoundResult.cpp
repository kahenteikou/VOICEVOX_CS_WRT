#include "pch.h"
#include "VoiceVoxCore_SoundResult.h"
#include "VoiceVoxCore_SoundResult.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::VOICEVOX_CS_WRT::implementation
{
    VoiceVoxCore_SoundResult::VoiceVoxCore_SoundResult(winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM const& result_v, int64_t out_size, int64_t out_wav_ptr)
    {
        //throw hresult_not_implemented();
        _result_value = result_v;
        _output_size = out_size;
        _output_wav_ptr = out_wav_ptr;
    }
    winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM VoiceVoxCore_SoundResult::RESULT_VALUE()
    {
        return _result_value;
    }
    void VoiceVoxCore_SoundResult::RESULT_VALUE(winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM const& value)
    {
        _result_value = value;
    }
    int64_t VoiceVoxCore_SoundResult::OUTPUT_SIZE()
    {
        return _output_size;
    }
    void VoiceVoxCore_SoundResult::OUTPUT_SIZE(int64_t value)
    {
        _output_size = value;
    }
    int64_t VoiceVoxCore_SoundResult::OUTPUT_WAV_PTR()
    {
        return _output_wav_ptr;
    }
    void VoiceVoxCore_SoundResult::OUTPUT_WAV_PTR(int64_t value)
    {
        _output_wav_ptr = value;
    }
}
