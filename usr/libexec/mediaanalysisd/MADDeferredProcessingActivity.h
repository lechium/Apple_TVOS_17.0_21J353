//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MADDeferredProcessingActivity : NSObject
{
}

+ (const char *)identifier;	// IMP=0x00400000000861a4
+ (id)sharedActivity;	// IMP=0x0010000000086181
+ (void)notImplementedException:(id)arg1;	// IMP=0x00100000000860fa
- (void)schedule;	// IMP=0x0040000000086e1c
- (void)checkIn;	// IMP=0x0010000000086e08
- (void)_checkIn:(_Bool)arg1;	// IMP=0x00100000000869fc
- (void)_execute:(id)arg1;	// IMP=0x001000000008620a
- (void)executeWithCancelBlock:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000861ea
- (id)criteria;	// IMP=0x00100000000861c7

@end

