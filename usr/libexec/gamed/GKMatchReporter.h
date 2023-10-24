//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKMatchReporter : NSObject
{
    MISSING_TYPE *matchRecording;	// 8 = 0x8
    MISSING_TYPE *matchQueue;	// 16 = 0x10
}

+ (void)onInviteReceivedWithBulletin:(id)arg1;	// IMP=0x00200000001ef774
+ (id)shared;	// IMP=0x00100000001ec605
- (void).cxx_destruct;	// IMP=0x00400000001ef7cc
- (void)recordGameCompleteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ef36d
- (void)recordGameStart;	// IMP=0x00100000001eea87
- (void)recordMatchCompleteWithMatchType:(id)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ee60f
- (void)recordSharePlayDevicesWithCount:(id)arg1;	// IMP=0x00100000001edb76
- (void)recordActiveDevicesWithCount:(id)arg1;	// IMP=0x00100000001ed861
- (void)recordMatchServerWithType:(id)arg1;	// IMP=0x00100000001ed763
- (void)recordMatchStartWithType:(id)arg1 minPlayers:(id)arg2 maxPlayers:(id)arg3;	// IMP=0x00100000001ed43d
- (id)init;	// IMP=0x00100000001ec7df

@end

