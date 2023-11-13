#include "pch.h"
#include "VoiceVoxCoreWrapper.h"
#include "VoiceVoxCoreWrapper.g.cpp"

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
    VoiceVoxCoreWrapper::VoiceVoxCoreWrapper(hstring const& coredll_path)
    {
        //throw hresult_not_implemented();

        _hmod = LoadLibrary(coredll_path.c_str());

        __voicevox_load_openjtalk_dict = (VOICEVOX_LOAD_Ojtalk_dict)GetProcAddress(_hmod, "voicevox_load_openjtalk_dict");
        __voicevox_error_result_to_message = (VOICEVOX_error_result_to_message)GetProcAddress(_hmod, "voicevox_error_result_to_message");
        __voicevox_tts = (VOICEVOX_VOICEVOXTTS)GetProcAddress(_hmod, "voicevox_tts");
        __voicevox_wav_free = (VOICEVOX_VOICEVOXTTSFREE)GetProcAddress(_hmod, "voicevox_wav_free");
        __voicevox_initialize = (VOICEVOX_INITIALIZE)GetProcAddress(_hmod, "initialize");
        __voicevox_loadmodel = (VOICEVOX_LOADMODEL)GetProcAddress(_hmod, "load_model");
        __voicevox_tts_kana = (VOICEVOX_VOICEVOXTTSKANA)GetProcAddress(_hmod, "voicevox_tts_from_kana");
        __voicevox_is_model_loaded = (VOICEVOX_ISMODELLOADED)GetProcAddress(_hmod, "is_model_loaded");
    }
    bool VoiceVoxCoreWrapper::InitializeCore(bool use_cpu, int32_t cpu_numthreads, bool load_allmodels)
    {
        //throw hresult_not_implemented();
        if (__voicevox_initialize) {
            return __voicevox_initialize(use_cpu, cpu_numthreads, load_allmodels);
        }
        else {
            return false;
        }
    }
    winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM VoiceVoxCoreWrapper::voicevox_load_openjtalk_dict(hstring const& dpath)
    {
        throw hresult_not_implemented();
    }
    hstring VoiceVoxCoreWrapper::voicevox_error_result_to_message(winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM const& result_code)
    {
        throw hresult_not_implemented();
    }
    winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM VoiceVoxCoreWrapper::voicevox_tts(hstring const& text, int64_t speaker_id, int64_t output_binary_size, int64_t output_wav)
    {
        throw hresult_not_implemented();
    }
    winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM VoiceVoxCoreWrapper::voicevox_tts_from_kana(hstring const& text, int64_t speaker_id, int64_t output_binary_size, int64_t output_wav)
    {
        throw hresult_not_implemented();
    }
    void VoiceVoxCoreWrapper::voicevox_free_wav(int64_t wav)
    {
        throw hresult_not_implemented();
    }
    bool VoiceVoxCoreWrapper::load_model(int64_t speaker_id)
    {
        throw hresult_not_implemented();
    }
    bool VoiceVoxCoreWrapper::is_model_loaded(int64_t speaker_id)
    {
        throw hresult_not_implemented();
    }
    void VoiceVoxCoreWrapper::Close()
    {
        throw hresult_not_implemented();
    }
}
