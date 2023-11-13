#pragma once
#include <Windows.h>
#include <wchar.h>
#include <cstdint>
#include <string>
#include <codecvt>
#include "core.h"

class VOICEVOX_Libraryplusplus
{
public:
	VOICEVOX_Libraryplusplus(const wchar_t* coredll_path);
	~VOICEVOX_Libraryplusplus();
	typedef enum {
		SUCCEED = 0,
		NOT_LOADED_OPENJTALK_DICT = 1
	}VoiceVoxResultenum;
	bool InitializeCore(bool use_cpu, int cpu_numthreads = 0, bool load_allmodels = true);
	VoiceVoxResultenum voicevox_load_openjtalk_dict(const char* dpath);
	const char* voicevox_error_result_to_message(VoiceVoxResultenum result_code);
	VoiceVoxResultenum voicevox_tts(std::string text, int64_t speaker_id, int* output_binary_size, uint8_t** output_wav);
	VoiceVoxResultenum voicevox_tts_from_kana(std::string text, int64_t speaker_id, int* output_binary_size, uint8_t** output_wav);
	void voicevox_free_wav(uint8_t* wav); 
	bool load_model(int64_t speaker_id);
	bool is_model_loaded(int64_t speaker_id);
private:
	HMODULE _hmod = nullptr;
	typedef VoiceVoxResultenum(*VOICEVOX_LOAD_Ojtalk_dict)(const char* dpath);
	typedef const char* (*VOICEVOX_error_result_to_message)(VoiceVoxResultenum result_code);
	typedef VoiceVoxResultenum(*VOICEVOX_VOICEVOXTTS)(const char* text, int64_t speaker_id, int* output_binary_size,
		uint8_t** output_wav);
	typedef VoiceVoxResultenum(*VOICEVOX_VOICEVOXTTSKANA)(const char* text, int64_t speaker_id, int* output_binary_size,
		uint8_t** output_wav);
	typedef void(*VOICEVOX_VOICEVOXTTSFREE)(uint8_t* wav);
	typedef bool(*VOICEVOX_INITIALIZE)(bool use_cpu, int cpu_num_threads, bool load_all_models);
	typedef bool(*VOICEVOX_LOADMODEL)(int64_t speaker_id);
	typedef bool(*VOICEVOX_ISMODELLOADED)(int64_t speaker_id);

	VOICEVOX_LOAD_Ojtalk_dict __voicevox_load_openjtalk_dict;
	VOICEVOX_error_result_to_message __voicevox_error_result_to_message;
	VOICEVOX_VOICEVOXTTS __voicevox_tts;
	VOICEVOX_VOICEVOXTTSFREE __voicevox_wav_free;
	VOICEVOX_INITIALIZE __voicevox_initialize;
	VOICEVOX_LOADMODEL __voicevox_loadmodel;
	VOICEVOX_VOICEVOXTTSKANA __voicevox_tts_kana;
	VOICEVOX_ISMODELLOADED __voicevox_is_model_loaded;
};

