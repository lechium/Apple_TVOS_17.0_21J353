//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle;
@protocol OS_dispatch_queue;

@interface ADLocalRequestProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSBundle *_bundle;	// 16 = 0x10
}

+ (id)sharedProvider;	// IMP=0x00400000001302ed
- (void).cxx_destruct;	// IMP=0x00200000001300cc
- (void)_getLocalRequestWithType:(long long)arg1 bundle:(id)arg2 languageCode:(id)arg3 outputVoiceInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000012fcf2
- (id)_bundle;	// IMP=0x001000000012fc96
- (void)getLocalRequestWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012fbf6
- (id)init;	// IMP=0x001000000012fb4d

@end

