//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGeneratorGL
{
    int _profile;	// 8 = 0x8
}

- (int)profile;	// IMP=0x000000000027cc2f
- (struct __C3DFXProgram *)_newProgramWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;	// IMP=0x000000000027a9d7
- (id)init;	// IMP=0x000000000027a9a8
- (id)initWithProfile:(int)arg1;	// IMP=0x000000000027a966

@end

