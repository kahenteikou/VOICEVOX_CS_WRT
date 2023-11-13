// See https://aka.ms/new-console-template for more information
using System.Media;
using System.Runtime.InteropServices;

Console.WriteLine("Hello, World!");
var a22a = new VOICEVOX_CS_WRT.VoiceVoxCoreWrapper("core.dll");
a22a.InitializeCore(false, 0, false);
var ret = a22a.voicevox_load_openjtalk_dict("open_jtalk_dic_utf_8-1.11");

Console.WriteLine(ret);
int speaker_id = 1;
a22a.load_model(speaker_id);
//IntPtr output_binary_size_ptr = Marshal.AllocHGlobal(Marshal.SizeOf<long>());
//IntPtr out_wav_ptr = 0;
var result=a22a.voicevox_tts("野獣先輩", 1);
Console.WriteLine(result.OUTPUT_SIZE);
IntPtr wav_ptr = (nint)result.OUTPUT_WAV_PTR;
if (result.OUTPUT_WAV_PTR != 0)
{
    byte[] wav = new byte[result.OUTPUT_SIZE];
    Marshal.Copy(wav_ptr, wav, 0, (int)(result.OUTPUT_SIZE));
    a22a.voicevox_free_wav(result.OUTPUT_WAV_PTR);
    using (var ms = new MemoryStream(wav))
    using (var sp = new SoundPlayer(ms))
    {
        sp.PlaySync();
    }
}