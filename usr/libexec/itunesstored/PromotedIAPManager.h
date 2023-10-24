//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PromotedIAPDatabase;

@interface PromotedIAPManager : NSObject
{
    PromotedIAPDatabase *_database;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001a22d9
- (void).cxx_destruct;	// IMP=0x00200000001a2a4c
- (void)removeOverridesForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a2a36
- (void)getInfoInternalForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a240c
- (void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001a23f6
- (void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a23e0
- (void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a23ca
- (void)getOrderForIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a23b4
- (id)init;	// IMP=0x00100000001a235e

@end

