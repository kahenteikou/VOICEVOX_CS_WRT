// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_VOICEVOX_CS_WRT_2_H
#define WINRT_VOICEVOX_CS_WRT_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/VOICEVOX_CS_WRT.1.h"
WINRT_EXPORT namespace winrt::VOICEVOX_CS_WRT
{
    struct __declspec(empty_bases) VoiceVoxCoreWrapper : winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper,
        impl::require<VoiceVoxCoreWrapper, winrt::Windows::Foundation::IClosable>
    {
        VoiceVoxCoreWrapper(std::nullptr_t) noexcept {}
        VoiceVoxCoreWrapper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper(ptr, take_ownership_from_abi) {}
        explicit VoiceVoxCoreWrapper(param::hstring const& coredll_path);
    };
    struct __declspec(empty_bases) VoiceVoxCore_SoundResult : winrt::VOICEVOX_CS_WRT::IVoiceVoxCore_SoundResult
    {
        VoiceVoxCore_SoundResult(std::nullptr_t) noexcept {}
        VoiceVoxCore_SoundResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::VOICEVOX_CS_WRT::IVoiceVoxCore_SoundResult(ptr, take_ownership_from_abi) {}
        VoiceVoxCore_SoundResult(winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM const& result_v, int64_t out_size, int64_t out_wav_ptr);
    };
}
#endif
