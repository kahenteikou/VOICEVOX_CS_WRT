#include "pch.h"
#include "VOICEVOX_Libraryplusplus.h"
VOICEVOX_Libraryplusplus::VOICEVOX_Libraryplusplus(const wchar_t* coredll_path) {
	_hmod = LoadLibrary(coredll_path);

	__voicevox_load_openjtalk_dict = (VOICEVOX_LOAD_Ojtalk_dict)GetProcAddress(_hmod, "voicevox_load_openjtalk_dict");
	__voicevox_error_result_to_message = (VOICEVOX_error_result_to_message)GetProcAddress(_hmod, "voicevox_error_result_to_message");
	__voicevox_tts = (VOICEVOX_VOICEVOXTTS)GetProcAddress(_hmod, "voicevox_tts");
	__voicevox_wav_free = (VOICEVOX_VOICEVOXTTSFREE)GetProcAddress(_hmod, "voicevox_wav_free");
	__voicevox_initialize = (VOICEVOX_INITIALIZE)GetProcAddress(_hmod, "initialize");
	__voicevox_loadmodel = (VOICEVOX_LOADMODEL)GetProcAddress(_hmod, "load_model");
	__voicevox_tts_kana = (VOICEVOX_VOICEVOXTTSKANA)GetProcAddress(_hmod, "voicevox_tts_from_kana");
	__voicevox_is_model_loaded = (VOICEVOX_ISMODELLOADED)GetProcAddress(_hmod, "is_model_loaded");
}
VOICEVOX_Libraryplusplus::~VOICEVOX_Libraryplusplus() {
	FreeLibrary(_hmod);
}
bool VOICEVOX_Libraryplusplus::InitializeCore(bool use_cpu, int cpu_numthreads, bool load_allmodels) {
	return this->__voicevox_initialize(use_cpu, cpu_numthreads, load_allmodels);
}

VOICEVOX_Libraryplusplus::VoiceVoxResultenum VOICEVOX_Libraryplusplus::voicevox_load_openjtalk_dict(const char* dpath) {
	return this->__voicevox_load_openjtalk_dict(dpath);
}

const char* VOICEVOX_Libraryplusplus::voicevox_error_result_to_message(VoiceVoxResultenum result_code) {
	return this->__voicevox_error_result_to_message(result_code);
}
VOICEVOX_Libraryplusplus::VoiceVoxResultenum VOICEVOX_Libraryplusplus::voicevox_tts(std::string text, int64_t speaker_id, int* output_binary_size, uint8_t** output_wav) {
	//std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> cvt;
	return this->__voicevox_tts(text.c_str(), speaker_id, output_binary_size, output_wav);
}
VOICEVOX_Libraryplusplus::VoiceVoxResultenum VOICEVOX_Libraryplusplus::voicevox_tts_from_kana(std::string text, int64_t speaker_id, int* output_binary_size, uint8_t** output_wav) {
	//std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> cvt;
	return this->__voicevox_tts_kana(text.c_str(), speaker_id, output_binary_size, output_wav);
}
void VOICEVOX_Libraryplusplus::voicevox_free_wav(uint8_t* wav) {
	this->__voicevox_wav_free(wav);
}
bool VOICEVOX_Libraryplusplus::load_model(int64_t speaker_id) {
	return this->__voicevox_loadmodel(speaker_id);
}

bool VOICEVOX_Libraryplusplus::is_model_loaded(int64_t speaker_id) {
	return this->__voicevox_is_model_loaded(speaker_id);
}