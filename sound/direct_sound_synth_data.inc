@ - Synth data sounds similar to square-1, square-2, or programmable wave,
@   but they are recognized as direct sound notes in a voicegroup, so you can
@   play more than one note simultanously.
@ - There are 3 types of synth,
@   type 0 (set_synth_custom) can be customized;
@   type 1 (set_synth_25) and type 2 (set_synth_25) are not;
@   separate from this fike settings, you can still set ADSR in a voicegroup.
@ - Macros asm/macros/music_voice.inc
@   set_synth_custom parameter 1, paramater 2, parameter 3, parameter 4 
@   set_synth_25
@   set_synth_50
@
@   parameter1/2/3/4 is between 0 (0x0) and 255 (0xFF)
@   example song: mus_pewter_synth_test using voicegroup701

	.align 2
DirectSoundSynthData_Custom_Param_10F0E080:: @ Copied parameters from Golden Sun 2
    set_synth_custom 0x10, 0xF0, 0xE0, 0x80

	.align 2
DirectSoundSynthData_Custom_Param_60204080:: @ Copied parameters from Golden Sun 2
    set_synth_custom 0x60, 0x20, 0x40, 0x80

	.align 2
DirectSoundSynthData_Custom_Param_80404040:: @ Copied parameters from Golden Sun 2
    set_synth_custom 0x10, 0xF0, 0xE0, 0x80

	.align 2
DirectSoundSynthData_Type_01::
    set_synth_25

	.align 2
DirectSoundSynthData_Type_02::
    set_synth_50

	.align 2
DirectSoundSynthData_Custom_Param_0080A080:: @ Sounds like gunshot
    set_synth_custom 0x00, 0x80, 0xA0, 0x80
