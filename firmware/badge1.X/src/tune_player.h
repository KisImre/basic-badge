#ifndef		__TUNE_PLAYER_H
#define		__TUNE_PLAYER_H

void play_mario_tune(void);
void play_music_array(const unsigned char *, unsigned char, const unsigned int *);

extern const unsigned char mario_array_limits[9];
extern const unsigned int mario_tempos[4];

extern const unsigned char mario_main0[48];
extern const unsigned char mario_main1[52];
extern const unsigned char mario_main2[52];
extern const unsigned char mario_main3[56];
extern const unsigned char mario_clip0[52];
extern const unsigned char mario_clip1[56];
extern const unsigned char mario_clip2[64];
extern const unsigned char mario_clip3[64];
extern const unsigned char mario_clip4[64];

#endif

