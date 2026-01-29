#ifndef GUARD_GAME_STAGE_CAMERA_H
#define GUARD_GAME_STAGE_CAMERA_H

#include "global.h"
#include "core.h"

#include "game/sa1_sa2_shared/camera.h"

void InitCamera(u32);
void DestroyCameraMovementTask(void);

#if ADJUSTABLE_RES
extern u16 gBossCameraYClamps[9][2];
#else
extern const u16 gBossCameraYClamps[][2];
#endif

#endif // GUARD_GAME_STAGE_CAMERA_H
