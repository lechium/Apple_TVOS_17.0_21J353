//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADMultiUserTestSupport : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_scoresBySharedID;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x004000000025680a
- (void).cxx_destruct;	// IMP=0x00200000002560d3
- (id)getUserIdentityClassification;	// IMP=0x0010000000255f6e
- (id)getClassifiedUser;	// IMP=0x0010000000255e1b
- (id)getDebugVoiceIdScores;	// IMP=0x0010000000255d62
- (void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000255c45
- (id)_init;	// IMP=0x0010000000255bbc

@end
