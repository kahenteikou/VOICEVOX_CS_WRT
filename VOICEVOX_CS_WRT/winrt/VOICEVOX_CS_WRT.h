// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_VOICEVOX_CS_WRT_H
#define WINRT_VOICEVOX_CS_WRT_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220531.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220531.1"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/VOICEVOX_CS_WRT.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::InitializeCore(bool use_cpu, int32_t cpu_numthreads, bool load_allmodels) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->InitializeCore(use_cpu, cpu_numthreads, load_allmodels, &result));
        return result;
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::voicevox_load_openjtalk_dict(param::hstring const& dpath) const
    {
        winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->voicevox_load_openjtalk_dict(*(void**)(&dpath), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::voicevox_error_result_to_message(winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM const& result_code) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->voicevox_error_result_to_message(static_cast<int32_t>(result_code), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::voicevox_tts(param::hstring const& text, int64_t speaker_id, int64_t output_binary_size, int64_t output_wav) const
    {
        winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->voicevox_tts(*(void**)(&text), speaker_id, output_binary_size, output_wav, reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::voicevox_tts_from_kana(param::hstring const& text, int64_t speaker_id, int64_t output_binary_size, int64_t output_wav) const
    {
        winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->voicevox_tts_from_kana(*(void**)(&text), speaker_id, output_binary_size, output_wav, reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::voicevox_free_wav(int64_t wav) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->voicevox_free_wav(wav));
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::load_model(int64_t speaker_id) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->load_model(speaker_id, &result));
        return result;
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapper<D>::is_model_loaded(int64_t speaker_id) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper)->is_model_loaded(speaker_id, &result));
        return result;
    }
    template <typename D> auto consume_VOICEVOX_CS_WRT_IVoiceVoxCoreWrapperFactory<D>::CreateInstance(param::hstring const& coredll_path) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapperFactory)->CreateInstance(*(void**)(&coredll_path), &value));
        return winrt::VOICEVOX_CS_WRT::VoiceVoxCoreWrapper{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper> : produce_base<D, winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper>
    {
        int32_t __stdcall InitializeCore(bool use_cpu, int32_t cpu_numthreads, bool load_allmodels, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().InitializeCore(use_cpu, cpu_numthreads, load_allmodels));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall voicevox_load_openjtalk_dict(void* dpath, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM>(this->shim().voicevox_load_openjtalk_dict(*reinterpret_cast<hstring const*>(&dpath)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall voicevox_error_result_to_message(int32_t result_code, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().voicevox_error_result_to_message(*reinterpret_cast<winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM const*>(&result_code)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall voicevox_tts(void* text, int64_t speaker_id, int64_t output_binary_size, int64_t output_wav, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM>(this->shim().voicevox_tts(*reinterpret_cast<hstring const*>(&text), speaker_id, output_binary_size, output_wav));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall voicevox_tts_from_kana(void* text, int64_t speaker_id, int64_t output_binary_size, int64_t output_wav, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::VOICEVOX_CS_WRT::VoiceVoxResult_ENUM>(this->shim().voicevox_tts_from_kana(*reinterpret_cast<hstring const*>(&text), speaker_id, output_binary_size, output_wav));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall voicevox_free_wav(int64_t wav) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().voicevox_free_wav(wav);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall load_model(int64_t speaker_id, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().load_model(speaker_id));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall is_model_loaded(int64_t speaker_id, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().is_model_loaded(speaker_id));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapperFactory> : produce_base<D, winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapperFactory>
    {
        int32_t __stdcall CreateInstance(void* coredll_path, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::VOICEVOX_CS_WRT::VoiceVoxCoreWrapper>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&coredll_path)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::VOICEVOX_CS_WRT
{
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapper> : winrt::impl::hash_base {};
    template<> struct hash<winrt::VOICEVOX_CS_WRT::IVoiceVoxCoreWrapperFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::VOICEVOX_CS_WRT::VoiceVoxCoreWrapper> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif