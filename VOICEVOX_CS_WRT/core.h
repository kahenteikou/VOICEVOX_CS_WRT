#pragma once
typedef enum {
	SUCCEED = 0,
	NOT_LOADED_OPENJTALK_DICT = 1
}VoiceVoxResultenum;
typedef VoiceVoxResultenum(*VOICEVOX_LOAD_Ojtalk_dict)(const char* dpath);
typedef const char*(*VOICEVOX_error_result_to_message)(VoiceVoxResultenum result_code);
typedef VoiceVoxResultenum(*VOICEVOX_VOICEVOXTTS)(const char* text, int64_t speaker_id, int* output_binary_size,
	uint8_t** output_wav);
typedef void(*VOICEVOX_VOICEVOXTTSFREE)(uint8_t* wav);
typedef bool(*VOICEVOX_INITIALIZE)(bool use_cpu, int cpu_num_threads, bool load_all_models);
typedef bool(*VOICEVOX_LOADMODEL)(int64_t speaker_id);
typedef bool(*VOICEVOX_ISMODELLOADED)(int64_t speaker_id);

typedef VoiceVoxResultenum(*VOICEVOX_VOICEVOXTTSKANA)(const char* text, int64_t speaker_id, int* output_binary_size,
	uint8_t** output_wav);